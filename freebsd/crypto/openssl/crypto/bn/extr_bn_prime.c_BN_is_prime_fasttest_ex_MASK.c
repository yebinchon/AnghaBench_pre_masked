
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BN_ULONG ;
typedef int BN_MONT_CTX ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int const*,int *) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int const*,int ) ;
 int FUNC_11 (int *,int const*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int const*) ;
 int FUNC_14 (int const*,int) ;
 scalar_t__ FUNC_15 (int const*,int) ;
 int FUNC_16 (int const*) ;
 int VAR_0 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 () ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_22 (int *,int const*,int *,int *,int,int *,int *) ;

int FUNC_23(const BIGNUM *VAR_3, int VAR_4, BN_CTX *VAR_5,
                            int VAR_6, BN_GENCB *VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = -1;
    int VAR_11;
    BN_CTX *VAR_12 = ((void*)0);
    BIGNUM *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    BN_MONT_CTX *VAR_17 = ((void*)0);


    if (FUNC_14(VAR_3, 2) || FUNC_14(VAR_3, 3))
        return 1;


    if (!FUNC_13(VAR_3) || FUNC_10(VAR_3, FUNC_21()) <= 0)
        return 0;

    if (VAR_4 == VAR_0)
        VAR_4 = FUNC_17(FUNC_16(VAR_3));


    if (VAR_6) {
        for (VAR_8 = 1; VAR_8 < VAR_1; VAR_8++) {
            BN_ULONG VAR_18 = FUNC_15(VAR_3, VAR_2[VAR_8]);
            if (VAR_18 == (BN_ULONG)-1)
                goto err;
            if (VAR_18 == 0)
                return FUNC_14(VAR_3, VAR_2[VAR_8]);
        }
        if (!FUNC_5(VAR_7, 1, -1))
            goto err;
    }

    if (VAR_5 != ((void*)0))
        VAR_12 = VAR_5;
    else if ((VAR_12 = FUNC_3()) == ((void*)0))
        goto err;
    FUNC_4(VAR_12);

    VAR_13 = FUNC_2(VAR_12);
    VAR_15 = FUNC_2(VAR_12);
    VAR_14 = FUNC_2(VAR_12);
    VAR_16 = FUNC_2(VAR_12);
    if (VAR_16 == ((void*)0))
        goto err;


    if (!FUNC_11(VAR_13, VAR_3) || !FUNC_20(VAR_13, 1))
        goto err;

    if (!FUNC_11(VAR_15, VAR_3) || !FUNC_20(VAR_15, 3))
        goto err;


    VAR_11 = 1;
    while (!FUNC_12(VAR_13, VAR_11))
        VAR_11++;
    if (!FUNC_19(VAR_14, VAR_13, VAR_11))
        goto err;


    VAR_17 = FUNC_7();
    if (VAR_17 == ((void*)0))
        goto err;
    if (!FUNC_8(VAR_17, VAR_3, VAR_12))
        goto err;

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {

        if (!FUNC_18(VAR_16, VAR_15) || !FUNC_9(VAR_16, 2))
            goto err;

        VAR_9 = FUNC_22(VAR_16, VAR_3, VAR_13, VAR_14, VAR_11, VAR_12, VAR_17);
        if (VAR_9 == -1)
            goto err;
        if (VAR_9) {
            VAR_10 = 0;
            goto err;
        }
        if (!FUNC_5(VAR_7, 1, VAR_8))
            goto err;
    }
    VAR_10 = 1;
 err:
    if (VAR_12 != ((void*)0)) {
        FUNC_0(VAR_12);
        if (VAR_5 == ((void*)0))
            FUNC_1(VAR_12);
    }
    FUNC_6(VAR_17);

    return VAR_10;
}
