
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CRYPTO_RWLOCK ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int const*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

BN_MONT_CTX *FUNC_6(BN_MONT_CTX **VAR_0, CRYPTO_RWLOCK *VAR_1,
                                    const BIGNUM *VAR_2, BN_CTX *VAR_3)
{
    BN_MONT_CTX *VAR_4;

    FUNC_3(VAR_1);
    VAR_4 = *VAR_0;
    FUNC_4(VAR_1);
    if (VAR_4)
        return VAR_4;
    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0))
        return ((void*)0);
    if (!FUNC_2(VAR_4, VAR_2, VAR_3)) {
        FUNC_0(VAR_4);
        return ((void*)0);
    }


    FUNC_5(VAR_1);
    if (*VAR_0) {
        FUNC_0(VAR_4);
        VAR_4 = *VAR_0;
    } else
        *VAR_0 = VAR_4;
    FUNC_4(VAR_1);
    return VAR_4;
}
