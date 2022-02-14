
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int top; int* d; } ;
typedef int BN_ULONG ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef TYPE_1__ const BIGNUM ;


 int FUNC_0 (int *) ;
 TYPE_1__ const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__ const*,int,TYPE_1__ const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,TYPE_1__ const*,int *) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__ const*,int,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*,int) ;
 int FUNC_9 (TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__ const*,int) ;
 int FUNC_12 (TYPE_1__ const*) ;
 int FUNC_13 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *,int *) ;
 int FUNC_14 (TYPE_1__ const*) ;
 int FUNC_15 (TYPE_1__ const*) ;
 int FUNC_16 (TYPE_1__ const*) ;
 int FUNC_17 (int ,int ) ;
 int VAR_3 ;
 int FUNC_18 (TYPE_1__ const*) ;

int FUNC_19(BIGNUM *VAR_4, BN_ULONG VAR_5, const BIGNUM *VAR_6,
                         const BIGNUM *VAR_7, BN_CTX *VAR_8, BN_MONT_CTX *VAR_9)
{
    BN_MONT_CTX *VAR_10 = ((void*)0);
    int VAR_11, VAR_12, VAR_13 = 0;
    int VAR_14;
    BN_ULONG VAR_15, VAR_16;
    BIGNUM *VAR_17, *VAR_18;
    BIGNUM *VAR_19;
    if (FUNC_10(VAR_6, VAR_0) != 0
            || FUNC_10(VAR_7, VAR_0) != 0) {

        FUNC_17(VAR_1, VAR_3);
        return 0;
    }

    FUNC_18(VAR_6);
    FUNC_18(VAR_7);

    if (!FUNC_12(VAR_7)) {
        FUNC_17(VAR_1, VAR_2);
        return 0;
    }
    if (VAR_7->top == 1)
        VAR_5 %= VAR_7->d[0];

    VAR_12 = FUNC_14(VAR_6);
    if (VAR_12 == 0) {

        if (FUNC_8(VAR_7, 1)) {
            VAR_13 = 1;
            FUNC_16(VAR_4);
        } else {
            VAR_13 = FUNC_15(VAR_4);
        }
        return VAR_13;
    }
    if (VAR_5 == 0) {
        FUNC_16(VAR_4);
        VAR_13 = 1;
        return VAR_13;
    }

    FUNC_2(VAR_8);
    VAR_17 = FUNC_1(VAR_8);
    VAR_18 = FUNC_1(VAR_8);
    if (VAR_18 == ((void*)0))
        goto err;

    if (VAR_9 != ((void*)0))
        VAR_10 = VAR_9;
    else {
        if ((VAR_10 = FUNC_5()) == ((void*)0))
            goto err;
        if (!FUNC_6(VAR_10, VAR_7, VAR_8))
            goto err;
    }

    VAR_14 = 1;




    VAR_15 = VAR_5;
    for (VAR_11 = VAR_12 - 2; VAR_11 >= 0; VAR_11--) {

        VAR_16 = VAR_15 * VAR_15;
        if ((VAR_16 / VAR_15) != VAR_15) {
            if (VAR_14) {
                if (!(FUNC_0(VAR_17, (VAR_15)) && FUNC_0(VAR_17, VAR_17, (VAR_10), VAR_8)))
                    goto err;
                VAR_14 = 0;
            } else {
                if (!(FUNC_0(VAR_17, (VAR_15)) && ( (FUNC_0(VAR_18, VAR_17, VAR_7, VAR_8) && (VAR_19 = VAR_17, VAR_17 = VAR_18, VAR_18 = VAR_19, 1)))))
                    goto err;
            }
            VAR_16 = 1;
        }
        VAR_15 = VAR_16;
        if (!VAR_14) {
            if (!FUNC_13(VAR_17, VAR_17, VAR_17, VAR_10, VAR_8))
                goto err;
        }


        if (FUNC_11(VAR_6, VAR_11)) {
            VAR_16 = VAR_15 * VAR_5;
            if ((VAR_16 / VAR_5) != VAR_15) {
                if (VAR_14) {
                    if (!(FUNC_0(VAR_17, (VAR_15)) && FUNC_0(VAR_17, VAR_17, (VAR_10), VAR_8)))
                        goto err;
                    VAR_14 = 0;
                } else {
                    if (!(FUNC_0(VAR_17, (VAR_15)) && ( (FUNC_0(VAR_18, VAR_17, VAR_7, VAR_8) && (VAR_19 = VAR_17, VAR_17 = VAR_18, VAR_18 = VAR_19, 1)))))
                        goto err;
                }
                VAR_16 = VAR_5;
            }
            VAR_15 = VAR_16;
        }
    }


    if (VAR_15 != 1) {
        if (VAR_14) {
            if (!(FUNC_0(VAR_17, (VAR_15)) && FUNC_0(VAR_17, VAR_17, (VAR_10), VAR_8)))
                goto err;
            VAR_14 = 0;
        } else {
            if (!(FUNC_0(VAR_17, (VAR_15)) && ( (FUNC_0(VAR_18, VAR_17, VAR_7, VAR_8) && (VAR_19 = VAR_17, VAR_17 = VAR_18, VAR_18 = VAR_19, 1)))))
                goto err;
        }
    }

    if (VAR_14) {
        if (!FUNC_15(VAR_4))
            goto err;
    } else {
        if (!FUNC_9(VAR_4, VAR_17, VAR_10, VAR_8))
            goto err;
    }
    VAR_13 = 1;
 err:
    if (VAR_9 == ((void*)0))
        FUNC_4(VAR_10);
    FUNC_0(VAR_8);
    FUNC_18(VAR_4);
    return VAR_13;
}
