
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_2__ {int (* arch_copyout ) (int ,char*,int) ;} ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

char *
FUNC_3(vm_offset_t VAR_1)
{
    char *VAR_2, *VAR_3;

    VAR_2 = FUNC_0(FUNC_1(VAR_1) + 1);
    for (VAR_3 = VAR_2; ;VAR_3++) {
 VAR_0.arch_copyout(VAR_1++, VAR_3, 1);
 if (*VAR_3 == 0)
     break;
    }
    return(VAR_2);
}
