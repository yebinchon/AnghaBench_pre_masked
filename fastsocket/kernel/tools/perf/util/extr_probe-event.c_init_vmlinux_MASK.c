
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sort_by_name; int try_vmlinux_path; int * vmlinux_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_3;

 VAR_2.sort_by_name = 1;
 if (VAR_2.vmlinux_name == ((void*)0))
  VAR_2.try_vmlinux_path = 1;
 else
  FUNC_2("Use vmlinux: %s\n", VAR_2.vmlinux_name);
 VAR_3 = FUNC_4();
 if (VAR_3 < 0) {
  FUNC_2("Failed to init symbol map.\n");
  goto out;
 }

 VAR_3 = FUNC_1(&VAR_1, "", VAR_0);
 if (VAR_3 < 0)
  goto out;

 if (FUNC_0(&VAR_1) < 0) {
  FUNC_2("machine__create_kernel_maps() failed.\n");
  goto out;
 }
out:
 if (VAR_3 < 0)
  FUNC_3("Failed to init vmlinux path.\n");
 return VAR_3;
}
