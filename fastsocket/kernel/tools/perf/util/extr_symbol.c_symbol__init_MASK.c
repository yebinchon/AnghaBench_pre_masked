
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct symbol_name_rb_node {int dummy; } ;
struct symbol {int dummy; } ;
struct TYPE_2__ {int initialized; int priv_size; char* field_sep; char* symfs; int dso_list; int comm_list; int kptr_restrict; int sym_list_str; int sym_list; int comm_list_str; int dso_list_str; scalar_t__ try_vmlinux_path; scalar_t__ sort_by_name; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_9 () ;

int FUNC_10(void)
{
 const char *VAR_1;

 if (VAR_0.initialized)
  return 0;

 VAR_0.priv_size = FUNC_0(VAR_0.priv_size, sizeof(u64));

 FUNC_7();

 if (VAR_0.sort_by_name)
  VAR_0.priv_size += (sizeof(struct symbol_name_rb_node) -
       sizeof(struct symbol));

 if (VAR_0.try_vmlinux_path && FUNC_9() < 0)
  return -1;

 if (VAR_0.field_sep && *VAR_0.field_sep == '.') {
  FUNC_2("'.' is the only non valid --field-separator argument\n");
  return -1;
 }

 if (FUNC_4(&VAR_0.dso_list,
         VAR_0.dso_list_str, "dso") < 0)
  return -1;

 if (FUNC_4(&VAR_0.comm_list,
         VAR_0.comm_list_str, "comm") < 0)
  goto out_free_dso_list;

 if (FUNC_4(&VAR_0.sym_list,
         VAR_0.sym_list_str, "symbol") < 0)
  goto out_free_comm_list;





 VAR_1 = FUNC_3(VAR_0.symfs, ((void*)0));
 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_0.symfs;
 if (FUNC_5(VAR_1, "/") == 0)
  VAR_0.symfs = "";
 if (VAR_1 != VAR_0.symfs)
  FUNC_1((void *)VAR_1);

 VAR_0.kptr_restrict = FUNC_8();

 VAR_0.initialized = 1;
 return 0;

out_free_comm_list:
 FUNC_6(VAR_0.comm_list);
out_free_dso_list:
 FUNC_6(VAR_0.dso_list);
 return -1;
}
