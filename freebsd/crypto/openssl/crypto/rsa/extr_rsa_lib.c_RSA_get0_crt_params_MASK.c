
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * iqmp; int * dmq1; int * dmp1; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;



void FUNC_0(const RSA *VAR_0,
                         const BIGNUM **VAR_1, const BIGNUM **VAR_2,
                         const BIGNUM **VAR_3)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->dmp1;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0->dmq1;
    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_0->iqmp;
}
