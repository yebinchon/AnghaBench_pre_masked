
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef int symbol_filter_t ;
struct symsrc {int dummy; } ;
struct stat {scalar_t__ st_uid; } ;
struct map {TYPE_1__* groups; int type; } ;
struct machine {char* root_dir; } ;
struct dso {scalar_t__ kernel; int name; int symtab_type; scalar_t__ adjust_symbols; } ;
typedef enum dso_binary_type { ____Placeholder_dso_binary_type } dso_binary_type ;
struct TYPE_2__ {struct machine* machine; } ;


 int DSO_BINARY_TYPE__JAVA_JIT ;
 int DSO_BINARY_TYPE__NOT_FOUND ;
 size_t DSO_BINARY_TYPE__SYMTAB_CNT ;
 scalar_t__ DSO_TYPE_GUEST_KERNEL ;
 scalar_t__ DSO_TYPE_KERNEL ;
 int PATH_MAX ;
 int* binary_type_symtab ;
 scalar_t__ dso__binary_type_file (struct dso*,int,char*,char*,int ) ;
 int dso__load_guest_kernel_sym (struct dso*,struct map*,int ) ;
 int dso__load_kernel_sym (struct dso*,struct map*,int ) ;
 int dso__load_perf_map (struct dso*,struct map*,int ) ;
 int dso__load_sym (struct dso*,struct map*,struct symsrc*,struct symsrc*,int ,int ) ;
 int dso__set_loaded (struct dso*,int ) ;
 int dso__synthesize_plt_symbols (struct dso*,struct symsrc*,struct map*,int ) ;
 int free (char*) ;
 scalar_t__ geteuid () ;
 scalar_t__ lstat (int ,struct stat*) ;
 char* malloc (int ) ;
 int pr_warning (char*,int ) ;
 scalar_t__ strncmp (int ,char*,int) ;
 int * strstr (int ,char*) ;
 int symsrc__destroy (struct symsrc*) ;
 scalar_t__ symsrc__has_symtab (struct symsrc*) ;
 scalar_t__ symsrc__init (struct symsrc*,struct dso*,char*,int) ;
 scalar_t__ symsrc__possibly_runtime (struct symsrc*) ;

int dso__load(struct dso *dso, struct map *map, symbol_filter_t filter)
{
 char *name;
 int ret = -1;
 u_int i;
 struct machine *machine;
 char *root_dir = (char *) "";
 int ss_pos = 0;
 struct symsrc ss_[2];
 struct symsrc *syms_ss = ((void*)0), *runtime_ss = ((void*)0);

 dso__set_loaded(dso, map->type);

 if (dso->kernel == DSO_TYPE_KERNEL)
  return dso__load_kernel_sym(dso, map, filter);
 else if (dso->kernel == DSO_TYPE_GUEST_KERNEL)
  return dso__load_guest_kernel_sym(dso, map, filter);

 if (map->groups && map->groups->machine)
  machine = map->groups->machine;
 else
  machine = ((void*)0);

 name = malloc(PATH_MAX);
 if (!name)
  return -1;

 dso->adjust_symbols = 0;

 if (strncmp(dso->name, "/tmp/perf-", 10) == 0) {
  struct stat st;

  if (lstat(dso->name, &st) < 0)
   return -1;

  if (st.st_uid && (st.st_uid != geteuid())) {
   pr_warning("File %s not owned by current user or root, "
    "ignoring it.\n", dso->name);
   return -1;
  }

  ret = dso__load_perf_map(dso, map, filter);
  dso->symtab_type = ret > 0 ? DSO_BINARY_TYPE__JAVA_JIT :
          DSO_BINARY_TYPE__NOT_FOUND;
  return ret;
 }

 if (machine)
  root_dir = machine->root_dir;





 for (i = 0; i < DSO_BINARY_TYPE__SYMTAB_CNT; i++) {
  struct symsrc *ss = &ss_[ss_pos];
  bool next_slot = 0;

  enum dso_binary_type symtab_type = binary_type_symtab[i];

  if (dso__binary_type_file(dso, symtab_type,
       root_dir, name, PATH_MAX))
   continue;


  if (symsrc__init(ss, dso, name, symtab_type) < 0)
   continue;

  if (!syms_ss && symsrc__has_symtab(ss)) {
   syms_ss = ss;
   next_slot = 1;
  }

  if (!runtime_ss && symsrc__possibly_runtime(ss)) {
   runtime_ss = ss;
   next_slot = 1;
  }

  if (next_slot) {
   ss_pos++;

   if (syms_ss && runtime_ss)
    break;
  }

 }

 if (!runtime_ss && !syms_ss)
  goto out_free;

 if (runtime_ss && !syms_ss) {
  syms_ss = runtime_ss;
 }


 if (!runtime_ss && syms_ss)
  runtime_ss = syms_ss;

 if (syms_ss)
  ret = dso__load_sym(dso, map, syms_ss, runtime_ss, filter, 0);
 else
  ret = -1;

 if (ret > 0) {
  int nr_plt;

  nr_plt = dso__synthesize_plt_symbols(dso, runtime_ss, map, filter);
  if (nr_plt > 0)
   ret += nr_plt;
 }

 for (; ss_pos > 0; ss_pos--)
  symsrc__destroy(&ss_[ss_pos - 1]);
out_free:
 free(name);
 if (ret < 0 && strstr(dso->name, " (deleted)") != ((void*)0))
  return 0;
 return ret;
}
