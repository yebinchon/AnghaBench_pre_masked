
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * iqmp; int * p; int * q; int * d; int * dmq1; int * dmp1; int * e; int * n; } ;
typedef TYPE_1__ RSA ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int const*,int const*,int const*,int const*,int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *) ;
 int * FUNC_7 (int const*) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *,int *) ;
 void* FUNC_10 (int *,int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 void* FUNC_12 () ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 () ;

int FUNC_15(RSA *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2, BIGNUM *VAR_3,
                       BIGNUM *VAR_4, const BIGNUM *VAR_5, const BIGNUM *VAR_6,
                       const BIGNUM *VAR_7, const BIGNUM *VAR_8, const BIGNUM *VAR_9,
                       const BIGNUM *VAR_10, const BIGNUM *VAR_11, BN_GENCB *VAR_12)
{
    BIGNUM *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    BN_CTX *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
    int VAR_19 = 0;

    if (!VAR_0)
        goto err;

    VAR_17 = FUNC_3();
    if (VAR_17 == ((void*)0))
        goto err;
    FUNC_4(VAR_17);

    VAR_13 = FUNC_2(VAR_17);
    VAR_14 = FUNC_2(VAR_17);
    VAR_15 = FUNC_2(VAR_17);
    VAR_16 = FUNC_2(VAR_17);

    if (VAR_16 == ((void*)0))
        goto err;
    if (!VAR_0->e) {
        VAR_0->e = FUNC_7(VAR_11);
        if (!VAR_0->e)
            goto err;
    } else {
        VAR_11 = VAR_0->e;
    }






    if (VAR_7 && VAR_0->p == ((void*)0)) {
        VAR_0->p = FUNC_12();
        if (VAR_0->p == ((void*)0))
            goto err;

        if (!FUNC_5(VAR_0->p, VAR_1, VAR_2,
                                     VAR_7, VAR_5, VAR_6, VAR_11, VAR_17, VAR_12))
            goto err;
    }

    if (VAR_10 && VAR_0->q == ((void*)0)) {
        VAR_0->q = FUNC_12();
        if (VAR_0->q == ((void*)0))
            goto err;
        if (!FUNC_5(VAR_0->q, VAR_3, VAR_4,
                                     VAR_10, VAR_8, VAR_9, VAR_11, VAR_17, VAR_12))
            goto err;
    }

    if (VAR_0->p == ((void*)0) || VAR_0->q == ((void*)0)) {
        FUNC_0(VAR_17);
        FUNC_1(VAR_17);
        return 2;
    }







    VAR_0->n = FUNC_12();
    if (VAR_0->n == ((void*)0))
        goto err;
    if (!FUNC_11(VAR_0->n, VAR_0->p, VAR_0->q, VAR_17))
        goto err;


    if (!FUNC_13(VAR_14, VAR_0->p, FUNC_14()))
        goto err;
    if (!FUNC_13(VAR_15, VAR_0->q, FUNC_14()))
        goto err;
    if (!FUNC_11(VAR_13, VAR_14, VAR_15, VAR_17))
        goto err;

    if (!FUNC_8(VAR_16, VAR_14, VAR_15, VAR_17))
        goto err;

    if (!FUNC_6(VAR_13, ((void*)0), VAR_13, VAR_16, VAR_17))
        goto err;

    VAR_18 = FUNC_3();
    if (VAR_18 == ((void*)0))
        goto err;

    VAR_0->d = FUNC_10(((void*)0), VAR_0->e, VAR_13, VAR_18);
    if (VAR_0->d == ((void*)0))
        goto err;


    VAR_0->dmp1 = FUNC_12();
    if (VAR_0->dmp1 == ((void*)0))
        goto err;
    if (!FUNC_9(VAR_0->dmp1, VAR_0->d, VAR_14, VAR_17))
        goto err;


    VAR_0->dmq1 = FUNC_12();
    if (VAR_0->dmq1 == ((void*)0))
        goto err;
    if (!FUNC_9(VAR_0->dmq1, VAR_0->d, VAR_15, VAR_17))
        goto err;


    VAR_0->iqmp = FUNC_10(((void*)0), VAR_0->q, VAR_0->p, VAR_18);
    if (VAR_0->iqmp == ((void*)0))
        goto err;

    VAR_19 = 1;
 err:
    FUNC_0(VAR_17);
    FUNC_1(VAR_17);
    FUNC_1(VAR_18);

    return VAR_19;

}
