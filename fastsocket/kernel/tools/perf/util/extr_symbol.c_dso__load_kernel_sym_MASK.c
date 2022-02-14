
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int symbol_filter_t ;
struct map {int dummy; } ;
struct dso {int build_id; scalar_t__ has_build_id; } ;
typedef int kallsyms_build_id ;
struct TYPE_2__ {char* kallsyms_name; char* vmlinux_name; scalar_t__* symfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char**,char*,int ,char*) ;
 int FUNC_2 (int ,int,char*) ;
 scalar_t__ FUNC_3 (struct dso*,int *) ;
 int FUNC_4 (struct dso*,char const*,struct map*,int ) ;
 int FUNC_5 (struct dso*,struct map*,char*,int ) ;
 int FUNC_6 (struct dso*,struct map*,int ) ;
 int FUNC_7 (struct dso*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct map*) ;
 int FUNC_11 (struct map*) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_15 (char*,int *,int) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_16(struct dso *VAR_4, struct map *VAR_5,
    symbol_filter_t VAR_6)
{
 int VAR_7;
 const char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 if (VAR_2.kallsyms_name != ((void*)0)) {
  VAR_8 = VAR_2.kallsyms_name;
  goto do_kallsyms;
 }

 if (VAR_2.vmlinux_name != ((void*)0)) {
  VAR_7 = FUNC_5(VAR_4, VAR_5,
     VAR_2.vmlinux_name, VAR_6);
  if (VAR_7 > 0) {
   FUNC_7(VAR_4,
        FUNC_14(VAR_2.vmlinux_name));
   goto out_fixup;
  }
  return VAR_7;
 }

 if (VAR_3 != ((void*)0)) {
  VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
  if (VAR_7 > 0)
   goto out_fixup;
 }


 if (VAR_2.symfs[0] != 0)
  return -1;






 if (VAR_4->has_build_id) {
  u8 VAR_10[VAR_0];
  char VAR_11[VAR_0 * 2 + 1];

  if (FUNC_15("/sys/kernel/notes", VAR_10,
      sizeof(VAR_10)) == 0) {
   if (FUNC_3(VAR_4, VAR_10)) {
    VAR_8 = "/proc/kallsyms";
    goto do_kallsyms;
   }
  }




  FUNC_2(VAR_4->build_id, sizeof(VAR_4->build_id),
      VAR_11);

  if (FUNC_1(&VAR_9,
        "%d/.debug/[kernel.kallsyms]/%s",
        FUNC_9("HOME"), VAR_11) == -1) {
   FUNC_13("Not enough memory for kallsyms file lookup\n");
   return -1;
  }

  VAR_8 = VAR_9;

  if (FUNC_0(VAR_8, VAR_1)) {
   FUNC_13("No kallsyms or vmlinux with build-id %s "
          "was found\n", VAR_11);
   FUNC_8(VAR_9);
   return -1;
  }
 } else {




  VAR_8 = "/proc/kallsyms";
 }

do_kallsyms:
 VAR_7 = FUNC_4(VAR_4, VAR_8, VAR_5, VAR_6);
 if (VAR_7 > 0)
  FUNC_12("Using %s for symbols\n", VAR_8);
 FUNC_8(VAR_9);

 if (VAR_7 > 0) {
  FUNC_7(VAR_4, FUNC_14("[kernel.kallsyms]"));
out_fixup:
  FUNC_11(VAR_5);
  FUNC_10(VAR_5);
 }

 return VAR_7;
}
