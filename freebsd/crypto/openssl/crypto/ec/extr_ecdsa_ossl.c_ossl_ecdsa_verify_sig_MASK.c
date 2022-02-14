
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* r; int const* s; } ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef TYPE_1__ ECDSA_SIG ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned char const*,int,int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_9 (int const*,int const*,int const*,int *) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*,int const*,int) ;
 scalar_t__ FUNC_12 (int const*,int const*) ;
 int VAR_0 ;
 int const* FUNC_13 (int const*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int const*,int *,int const*,int *,int *) ;
 int FUNC_19 (int const*,int *,int const*,int const*,int const*,int *) ;
 int * FUNC_20 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_21 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_22 (int const*,int const*,int const*,int *) ;

int FUNC_23(const unsigned char *VAR_7, int VAR_8,
                          const ECDSA_SIG *VAR_9, EC_KEY *VAR_10)
{
    int VAR_11 = -1, VAR_12;
    BN_CTX *VAR_13;
    const BIGNUM *VAR_14;
    BIGNUM *VAR_15, *VAR_16, *VAR_17, *VAR_18;
    EC_POINT *VAR_19 = ((void*)0);
    const EC_GROUP *VAR_20;
    const EC_POINT *VAR_21;


    if (VAR_10 == ((void*)0) || (VAR_20 = FUNC_15(VAR_10)) == ((void*)0) ||
        (VAR_21 = FUNC_16(VAR_10)) == ((void*)0) || VAR_9 == ((void*)0)) {
        FUNC_21(VAR_0, VAR_3);
        return -1;
    }

    if (!FUNC_14(VAR_10)) {
        FUNC_21(VAR_0, VAR_2);
        return -1;
    }

    VAR_13 = FUNC_3();
    if (VAR_13 == ((void*)0)) {
        FUNC_21(VAR_0, VAR_6);
        return -1;
    }
    FUNC_4(VAR_13);
    VAR_15 = FUNC_2(VAR_13);
    VAR_16 = FUNC_2(VAR_13);
    VAR_17 = FUNC_2(VAR_13);
    VAR_18 = FUNC_2(VAR_13);
    if (VAR_18 == ((void*)0)) {
        FUNC_21(VAR_0, VAR_4);
        goto err;
    }

    VAR_14 = FUNC_13(VAR_20);
    if (VAR_14 == ((void*)0)) {
        FUNC_21(VAR_0, VAR_5);
        goto err;
    }

    if (FUNC_7(VAR_9->r) || FUNC_6(VAR_9->r) ||
        FUNC_12(VAR_9->r, VAR_14) >= 0 || FUNC_7(VAR_9->s) ||
        FUNC_6(VAR_9->s) || FUNC_12(VAR_9->s, VAR_14) >= 0) {
        FUNC_21(VAR_0, VAR_1);
        VAR_11 = 0;
        goto err;
    }

    if (!FUNC_22(VAR_20, VAR_16, VAR_9->s, VAR_13)) {
        FUNC_21(VAR_0, VAR_4);
        goto err;
    }

    VAR_12 = FUNC_10(VAR_14);



    if (8 * VAR_8 > VAR_12)
        VAR_8 = (VAR_12 + 7) / 8;
    if (!FUNC_5(VAR_7, VAR_8, VAR_17)) {
        FUNC_21(VAR_0, VAR_4);
        goto err;
    }

    if ((8 * VAR_8 > VAR_12) && !FUNC_11(VAR_17, VAR_17, 8 - (VAR_12 & 0x7))) {
        FUNC_21(VAR_0, VAR_4);
        goto err;
    }

    if (!FUNC_8(VAR_15, VAR_17, VAR_16, VAR_14, VAR_13)) {
        FUNC_21(VAR_0, VAR_4);
        goto err;
    }

    if (!FUNC_8(VAR_16, VAR_9->r, VAR_16, VAR_14, VAR_13)) {
        FUNC_21(VAR_0, VAR_4);
        goto err;
    }

    if ((VAR_19 = FUNC_20(VAR_20)) == ((void*)0)) {
        FUNC_21(VAR_0, VAR_6);
        goto err;
    }
    if (!FUNC_19(VAR_20, VAR_19, VAR_15, VAR_21, VAR_16, VAR_13)) {
        FUNC_21(VAR_0, VAR_5);
        goto err;
    }

    if (!FUNC_18(VAR_20, VAR_19, VAR_18, ((void*)0), VAR_13)) {
        FUNC_21(VAR_0, VAR_5);
        goto err;
    }

    if (!FUNC_9(VAR_15, VAR_18, VAR_14, VAR_13)) {
        FUNC_21(VAR_0, VAR_4);
        goto err;
    }

    VAR_11 = (FUNC_12(VAR_15, VAR_9->r) == 0);
 err:
    FUNC_0(VAR_13);
    FUNC_1(VAR_13);
    FUNC_17(VAR_19);
    return VAR_11;
}
