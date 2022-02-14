
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int neg; } ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(BIGNUM *VAR_0, int VAR_1)
{
    if (VAR_1 && !FUNC_0(VAR_0))
        VAR_0->neg = 1;
    else
        VAR_0->neg = 0;
}
