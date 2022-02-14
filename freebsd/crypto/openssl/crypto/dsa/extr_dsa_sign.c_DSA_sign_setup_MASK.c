
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* dsa_sign_setup ) (TYPE_2__*,int *,int **,int **) ;} ;
typedef TYPE_2__ DSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (TYPE_2__*,int *,int **,int **) ;

int FUNC_1(DSA *VAR_0, BN_CTX *VAR_1, BIGNUM **VAR_2, BIGNUM **VAR_3)
{
    return VAR_0->meth->dsa_sign_setup(VAR_0, VAR_1, VAR_2, VAR_3);
}
