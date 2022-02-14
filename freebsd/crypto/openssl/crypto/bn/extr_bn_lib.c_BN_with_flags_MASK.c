
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int neg; int dmax; int top; int d; } ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(BIGNUM *VAR_2, const BIGNUM *VAR_3, int VAR_4)
{
    VAR_2->d = VAR_3->d;
    VAR_2->top = VAR_3->top;
    VAR_2->dmax = VAR_3->dmax;
    VAR_2->neg = VAR_3->neg;
    VAR_2->flags = ((VAR_2->flags & VAR_0)
                   | (VAR_3->flags & ~VAR_0)
                   | VAR_1 | VAR_4);
}
