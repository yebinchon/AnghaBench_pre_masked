
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * n0; int ri; int Ni; int N; int RR; } ;
typedef TYPE_1__ BN_MONT_CTX ;


 int FUNC_0 (int *,int *) ;

BN_MONT_CTX *FUNC_1(BN_MONT_CTX *VAR_0, BN_MONT_CTX *VAR_1)
{
    if (VAR_0 == VAR_1)
        return VAR_0;

    if (!FUNC_0(&(VAR_0->RR), &(VAR_1->RR)))
        return ((void*)0);
    if (!FUNC_0(&(VAR_0->N), &(VAR_1->N)))
        return ((void*)0);
    if (!FUNC_0(&(VAR_0->Ni), &(VAR_1->Ni)))
        return ((void*)0);
    VAR_0->ri = VAR_1->ri;
    VAR_0->n0[0] = VAR_1->n0[0];
    VAR_0->n0[1] = VAR_1->n0[1];
    return VAR_0;
}
