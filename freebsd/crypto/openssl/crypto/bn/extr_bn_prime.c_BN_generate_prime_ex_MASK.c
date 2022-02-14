
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prime_t ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,int,int) ;
 int VAR_1 ;
 int FUNC_6 (int *,int,int *,int ,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int,int const*,int const*,int *) ;
 int FUNC_14 (int *,int,int *) ;
 int FUNC_15 (int *,int,int const*,int const*,int *) ;

int FUNC_16(BIGNUM *VAR_3, int VAR_4, int VAR_5,
                         const BIGNUM *VAR_6, const BIGNUM *VAR_7, BN_GENCB *VAR_8)
{
    BIGNUM *VAR_9;
    int VAR_10 = 0;
    int VAR_11, VAR_12, VAR_13 = 0;
    BN_CTX *VAR_14 = ((void*)0);
    prime_t *VAR_15 = ((void*)0);
    int VAR_16 = FUNC_7(VAR_4);

    if (VAR_4 < 2) {

        FUNC_9(VAR_0, VAR_1);
        return 0;
    } else if (VAR_6 == ((void*)0) && VAR_5 && VAR_4 < 6 && VAR_4 != 3) {





        FUNC_9(VAR_0, VAR_1);
        return 0;
    }

    VAR_15 = FUNC_11(sizeof(*VAR_15) * VAR_2);
    if (VAR_15 == ((void*)0))
        goto err;

    VAR_14 = FUNC_3();
    if (VAR_14 == ((void*)0))
        goto err;
    FUNC_4(VAR_14);
    VAR_9 = FUNC_2(VAR_14);
    if (VAR_9 == ((void*)0))
        goto err;
 loop:

    if (VAR_6 == ((void*)0)) {
        if (!FUNC_14(VAR_3, VAR_4, VAR_15))
            goto err;
    } else {
        if (VAR_5) {
            if (!FUNC_15(VAR_3, VAR_4, VAR_6, VAR_7, VAR_14))
                goto err;
        } else {
            if (!FUNC_13(VAR_3, VAR_4, VAR_6, VAR_7, VAR_14))
                goto err;
        }
    }

    if (!FUNC_5(VAR_8, 0, VAR_13++))

        goto err;

    if (!VAR_5) {
        VAR_11 = FUNC_6(VAR_3, VAR_16, VAR_14, 0, VAR_8);
        if (VAR_11 == -1)
            goto err;
        if (VAR_11 == 0)
            goto loop;
    } else {




        if (!FUNC_8(VAR_9, VAR_3))
            goto err;

        for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++) {
            VAR_12 = FUNC_6(VAR_3, 1, VAR_14, 0, VAR_8);
            if (VAR_12 == -1)
                goto err;
            if (VAR_12 == 0)
                goto loop;

            VAR_12 = FUNC_6(VAR_9, 1, VAR_14, 0, VAR_8);
            if (VAR_12 == -1)
                goto err;
            if (VAR_12 == 0)
                goto loop;

            if (!FUNC_5(VAR_8, 2, VAR_13 - 1))
                goto err;

        }
    }

    VAR_10 = 1;
 err:
    FUNC_10(VAR_15);
    FUNC_0(VAR_14);
    FUNC_1(VAR_14);
    FUNC_12(VAR_3);
    return VAR_10;
}
