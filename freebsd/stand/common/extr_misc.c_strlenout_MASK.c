
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {int (* arch_copyout ) (int ,char*,int) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

size_t
FUNC_1(vm_offset_t VAR_1)
{
    char VAR_2;
    size_t VAR_3;

    for (VAR_3 = 0; ; VAR_3++) {
 VAR_0.arch_copyout(VAR_1++, &VAR_2, 1);
 if (VAR_2 == 0)
     break;
    }
    return(VAR_3);
}
