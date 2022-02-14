
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dmax; int * d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

BIGNUM *FUNC_2(BIGNUM *VAR_0, int VAR_1)
{
    if (VAR_1 > VAR_0->dmax) {
        BN_ULONG *VAR_2 = FUNC_0(VAR_0, VAR_1);
        if (!VAR_2)
            return ((void*)0);
        if (VAR_0->d != ((void*)0))
            FUNC_1(VAR_0, 1);
        VAR_0->d = VAR_2;
        VAR_0->dmax = VAR_1;
    }

    return VAR_0;
}
