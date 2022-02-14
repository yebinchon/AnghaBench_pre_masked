
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* meth; } ;
struct TYPE_7__ {int (* rsa_multi_prime_keygen ) (TYPE_2__*,int,int,int *,int *) ;int (* rsa_keygen ) (TYPE_2__*,int,int *,int *) ;} ;
typedef TYPE_2__ RSA ;
typedef int BN_GENCB ;
typedef int BIGNUM ;


 int FUNC_0 (TYPE_2__*,int,int,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int,int,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int,int *,int *) ;

int FUNC_3(RSA *VAR_0, int VAR_1, int VAR_2,
                                 BIGNUM *VAR_3, BN_GENCB *VAR_4)
{

    if (VAR_0->meth->rsa_multi_prime_keygen != ((void*)0)) {
        return VAR_0->meth->rsa_multi_prime_keygen(VAR_0, VAR_1, VAR_2,
                                                 VAR_3, VAR_4);
    } else if (VAR_0->meth->rsa_keygen != ((void*)0)) {






        if (VAR_2 == 2)
            return VAR_0->meth->rsa_keygen(VAR_0, VAR_1, VAR_3, VAR_4);
        else
            return 0;
    }

    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
