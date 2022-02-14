
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * r; int * s; } ;
struct TYPE_8__ {int mont_data; } ;
typedef int EC_KEY ;
typedef TYPE_1__ EC_GROUP ;
typedef TYPE_2__ ECDSA_SIG ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (unsigned char const*,int,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int const*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int const*,int ,int *) ;
 void* FUNC_7 () ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 () ;
 int VAR_0 ;
 int * FUNC_12 (TYPE_1__ const*) ;
 int FUNC_13 (int *) ;
 TYPE_1__* FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_16 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (int *,int *,int *,int const*) ;
 int FUNC_18 (int *,int *,int const*,int ,int *) ;
 int FUNC_19 (int *,int *,int ,int *) ;
 int FUNC_20 (int *,int *,int **,int **,unsigned char const*,int) ;

ECDSA_SIG *FUNC_21(const unsigned char *VAR_8, int VAR_9,
                               const BIGNUM *VAR_10, const BIGNUM *VAR_11,
                               EC_KEY *VAR_12)
{
    int VAR_13 = 0, VAR_14;
    BIGNUM *VAR_15 = ((void*)0), *VAR_16, *VAR_17 = ((void*)0);
    const BIGNUM *VAR_18, *VAR_19;
    BN_CTX *VAR_20 = ((void*)0);
    const EC_GROUP *VAR_21;
    ECDSA_SIG *VAR_22;
    const BIGNUM *VAR_23;

    VAR_21 = FUNC_14(VAR_12);
    VAR_23 = FUNC_15(VAR_12);

    if (VAR_21 == ((void*)0)) {
        FUNC_16(VAR_0, VAR_7);
        return ((void*)0);
    }
    if (VAR_23 == ((void*)0)) {
        FUNC_16(VAR_0, VAR_2);
        return ((void*)0);
    }

    if (!FUNC_13(VAR_12)) {
        FUNC_16(VAR_0, VAR_1);
        return ((void*)0);
    }

    VAR_22 = FUNC_11();
    if (VAR_22 == ((void*)0)) {
        FUNC_16(VAR_0, VAR_6);
        return ((void*)0);
    }
    VAR_22->r = FUNC_7();
    VAR_22->s = FUNC_7();
    if (VAR_22->r == ((void*)0) || VAR_22->s == ((void*)0)) {
        FUNC_16(VAR_0, VAR_6);
        goto err;
    }
    VAR_16 = VAR_22->s;

    if ((VAR_20 = FUNC_1()) == ((void*)0)
        || (VAR_17 = FUNC_7()) == ((void*)0)) {
        FUNC_16(VAR_0, VAR_6);
        goto err;
    }

    VAR_18 = FUNC_12(VAR_21);
    VAR_14 = FUNC_8(VAR_18);



    if (8 * VAR_9 > VAR_14)
        VAR_9 = (VAR_14 + 7) / 8;
    if (!FUNC_2(VAR_8, VAR_9, VAR_17)) {
        FUNC_16(VAR_0, VAR_4);
        goto err;
    }

    if ((8 * VAR_9 > VAR_14) && !FUNC_9(VAR_17, VAR_17, 8 - (VAR_14 & 0x7))) {
        FUNC_16(VAR_0, VAR_4);
        goto err;
    }
    do {
        if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0)) {
            if (!FUNC_20(VAR_12, VAR_20, &VAR_15, &VAR_22->r, VAR_8, VAR_9)) {
                FUNC_16(VAR_0, VAR_5);
                goto err;
            }
            VAR_19 = VAR_15;
        } else {
            VAR_19 = VAR_10;
            if (FUNC_4(VAR_22->r, VAR_11) == ((void*)0)) {
                FUNC_16(VAR_0, VAR_6);
                goto err;
            }
        }
        if (!FUNC_19(VAR_16, VAR_22->r, VAR_21->mont_data, VAR_20)
            || !FUNC_18(VAR_16, VAR_16, VAR_23, VAR_21->mont_data, VAR_20)) {
            FUNC_16(VAR_0, VAR_4);
            goto err;
        }
        if (!FUNC_17(VAR_16, VAR_16, VAR_17, VAR_18)) {
            FUNC_16(VAR_0, VAR_4);
            goto err;
        }




        if (!FUNC_19(VAR_16, VAR_16, VAR_21->mont_data, VAR_20)
            || !FUNC_6(VAR_16, VAR_16, VAR_19, VAR_21->mont_data, VAR_20)) {
            FUNC_16(VAR_0, VAR_4);
            goto err;
        }

        if (FUNC_5(VAR_16)) {




            if (VAR_10 != ((void*)0) && VAR_11 != ((void*)0)) {
                FUNC_16(VAR_0, VAR_3);
                goto err;
            }
        } else {

            break;
        }
    } while (1);

    VAR_13 = 1;
 err:
    if (!VAR_13) {
        FUNC_10(VAR_22);
        VAR_22 = ((void*)0);
    }
    FUNC_0(VAR_20);
    FUNC_3(VAR_17);
    FUNC_3(VAR_15);
    return VAR_22;
}
