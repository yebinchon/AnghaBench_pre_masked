
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbol_filter_t ;
struct map {TYPE_1__* groups; } ;
struct machine {char* root_dir; } ;
struct dso {int dummy; } ;
typedef int path ;
struct TYPE_4__ {char* default_guest_kallsyms; int * default_guest_vmlinux_name; } ;
struct TYPE_3__ {struct machine* machine; } ;


 int VAR_0 ;
 int FUNC_0 (struct dso*,char const*,struct map*,int ) ;
 int FUNC_1 (struct dso*,struct map*,int *,int ) ;
 int FUNC_2 (struct dso*,int ) ;
 scalar_t__ FUNC_3 (struct machine*) ;
 int FUNC_4 (struct machine*,char*,int) ;
 int FUNC_5 (struct map*) ;
 int FUNC_6 (struct map*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_10(struct dso *VAR_2, struct map *VAR_3,
          symbol_filter_t VAR_4)
{
 int VAR_5;
 const char *VAR_6 = ((void*)0);
 struct machine *VAR_7;
 char VAR_8[VAR_0];

 if (!VAR_3->groups) {
  FUNC_7("Guest kernel map hasn't the point to groups\n");
  return -1;
 }
 VAR_7 = VAR_3->groups->machine;

 if (FUNC_3(VAR_7)) {





  if (VAR_1.default_guest_vmlinux_name != ((void*)0)) {
   VAR_5 = FUNC_1(VAR_2, VAR_3,
    VAR_1.default_guest_vmlinux_name, VAR_4);
   goto out_try_fixup;
  }

  VAR_6 = VAR_1.default_guest_kallsyms;
  if (!VAR_6)
   return -1;
 } else {
  FUNC_8(VAR_8, "%s/proc/kallsyms", VAR_7->root_dir);
  VAR_6 = VAR_8;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_3, VAR_4);
 if (VAR_5 > 0)
  FUNC_7("Using %s for symbols\n", VAR_6);

out_try_fixup:
 if (VAR_5 > 0) {
  if (VAR_6 != ((void*)0)) {
   FUNC_4(VAR_7, VAR_8, sizeof(VAR_8));
   FUNC_2(VAR_2, FUNC_9(VAR_8));
  }
  FUNC_6(VAR_3);
  FUNC_5(VAR_3);
 }

 return VAR_5;
}
