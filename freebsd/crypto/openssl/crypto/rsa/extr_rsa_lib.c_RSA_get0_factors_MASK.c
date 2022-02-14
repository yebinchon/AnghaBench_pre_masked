
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * q; int * p; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;



void FUNC_0(const RSA *VAR_0, const BIGNUM **VAR_1, const BIGNUM **VAR_2)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->p;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0->q;
}
