
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int __mxcsr; int __x87; } ;
typedef TYPE_1__ fenv_t ;
typedef int __uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;

int
FUNC_4(fenv_t *VAR_2)
{
 __uint32_t VAR_3;

 FUNC_3(&VAR_3);
 FUNC_1(&VAR_2->__x87);
 FUNC_0();
 VAR_2->__mxcsr = VAR_3;
 VAR_3 &= ~VAR_0;
 VAR_3 |= VAR_0 << VAR_1;
 FUNC_2(&VAR_3);
 return (0);
}
