
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int __control; } ;
struct TYPE_4__ {TYPE_3__ __x87; int __mxcsr; } ;
typedef TYPE_1__ fenv_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(fenv_t *VAR_0)
{

 FUNC_1(&VAR_0->__x87);
 FUNC_2(&VAR_0->__mxcsr);




 FUNC_0(&VAR_0->__x87.__control);
 return (0);
}
