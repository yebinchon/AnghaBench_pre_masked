
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int try_vmlinux_path; int sort_by_name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_1 = 0;

 VAR_0.try_vmlinux_path = 0;
 VAR_0.sort_by_name = 1;
 VAR_1 = FUNC_1();

 if (VAR_1 < 0)
  FUNC_0("Failed to init symbol map.\n");

 return VAR_1;
}
