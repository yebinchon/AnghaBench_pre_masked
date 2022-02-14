
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ version; int * d; int prime_infos; int * iqmp; int * p; int * q; int * dmq1; int * dmp1; int * e; int * n; } ;
struct TYPE_5__ {int * t; int * r; int * pp; int * d; } ;
typedef TYPE_1__ RSA_PRIME_INFO ;
typedef TYPE_2__ RSA ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 int VAR_0 ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 TYPE_1__* FUNC_20 (int ,int) ;

int FUNC_21(const RSA *VAR_18, BN_GENCB *VAR_19)
{
    BIGNUM *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
    BN_CTX *VAR_25;
    int VAR_26 = 1, VAR_27 = 0, VAR_28;
    RSA_PRIME_INFO *VAR_29;

    if (VAR_18->p == ((void*)0) || VAR_18->q == ((void*)0) || VAR_18->n == ((void*)0)
            || VAR_18->e == ((void*)0) || VAR_18->d == ((void*)0)) {
        FUNC_17(VAR_3, VAR_17);
        return 0;
    }


    if (VAR_18->version == VAR_2) {
        VAR_27 = FUNC_19(VAR_18->prime_infos);
        if (VAR_27 <= 0
                || (VAR_27 + 2) > FUNC_18(FUNC_14(VAR_18->n))) {
            FUNC_17(VAR_3, VAR_8);
            return 0;
        }
    }

    VAR_20 = FUNC_13();
    VAR_21 = FUNC_13();
    VAR_22 = FUNC_13();
    VAR_23 = FUNC_13();
    VAR_24 = FUNC_13();
    VAR_25 = FUNC_1();
    if (VAR_20 == ((void*)0) || VAR_21 == ((void*)0) || VAR_22 == ((void*)0) || VAR_23 == ((void*)0)
            || VAR_24 == ((void*)0) || VAR_25 == ((void*)0)) {
        VAR_26 = -1;
        FUNC_17(VAR_3, VAR_1);
        goto err;
    }

    if (FUNC_7(VAR_18->e)) {
        VAR_26 = 0;
        FUNC_17(VAR_3, VAR_4);
    }
    if (!FUNC_6(VAR_18->e)) {
        VAR_26 = 0;
        FUNC_17(VAR_3, VAR_4);
    }


    if (FUNC_8(VAR_18->p, VAR_0, ((void*)0), VAR_19) != 1) {
        VAR_26 = 0;
        FUNC_17(VAR_3, VAR_15);
    }


    if (FUNC_8(VAR_18->q, VAR_0, ((void*)0), VAR_19) != 1) {
        VAR_26 = 0;
        FUNC_17(VAR_3, VAR_16);
    }


    for (VAR_28 = 0; VAR_28 < VAR_27; VAR_28++) {
        VAR_29 = FUNC_20(VAR_18->prime_infos, VAR_28);
        if (FUNC_8(VAR_29->r, VAR_0, ((void*)0), VAR_19) != 1) {
            VAR_26 = 0;
            FUNC_17(VAR_3, VAR_12);
        }
    }


    if (!FUNC_12(VAR_20, VAR_18->p, VAR_18->q, VAR_25)) {
        VAR_26 = -1;
        goto err;
    }
    for (VAR_28 = 0; VAR_28 < VAR_27; VAR_28++) {
        VAR_29 = FUNC_20(VAR_18->prime_infos, VAR_28);
        if (!FUNC_12(VAR_20, VAR_20, VAR_29->r, VAR_25)) {
            VAR_26 = -1;
            goto err;
        }
    }
    if (FUNC_2(VAR_20, VAR_18->n) != 0) {
        VAR_26 = 0;
        if (VAR_27)
            FUNC_17(VAR_3,
                   VAR_13);
        else
            FUNC_17(VAR_3, VAR_14);
    }


    if (!FUNC_15(VAR_20, VAR_18->p, FUNC_16())) {
        VAR_26 = -1;
        goto err;
    }
    if (!FUNC_15(VAR_21, VAR_18->q, FUNC_16())) {
        VAR_26 = -1;
        goto err;
    }


    if (!FUNC_12(VAR_23, VAR_20, VAR_21, VAR_25)) {
        VAR_26 = -1;
        goto err;
    }
    if (!FUNC_5(VAR_24, VAR_20, VAR_21, VAR_25)) {
        VAR_26 = -1;
        goto err;
    }
    for (VAR_28 = 0; VAR_28 < VAR_27; VAR_28++) {
        VAR_29 = FUNC_20(VAR_18->prime_infos, VAR_28);
        if (!FUNC_15(VAR_22, VAR_29->r, FUNC_16())) {
            VAR_26 = -1;
            goto err;
        }
        if (!FUNC_12(VAR_23, VAR_23, VAR_22, VAR_25)) {
            VAR_26 = -1;
            goto err;
        }
        if (!FUNC_5(VAR_24, VAR_24, VAR_22, VAR_25)) {
            VAR_26 = -1;
            goto err;
        }
    }
    if (!FUNC_3(VAR_22, ((void*)0), VAR_23, VAR_24, VAR_25)) {
        VAR_26 = -1;
        goto err;
    }
    if (!FUNC_11(VAR_20, VAR_18->d, VAR_18->e, VAR_22, VAR_25)) {
        VAR_26 = -1;
        goto err;
    }

    if (!FUNC_7(VAR_20)) {
        VAR_26 = 0;
        FUNC_17(VAR_3, VAR_7);
    }

    if (VAR_18->dmp1 != ((void*)0) && VAR_18->dmq1 != ((void*)0) && VAR_18->iqmp != ((void*)0)) {

        if (!FUNC_15(VAR_20, VAR_18->p, FUNC_16())) {
            VAR_26 = -1;
            goto err;
        }
        if (!FUNC_9(VAR_21, VAR_18->d, VAR_20, VAR_25)) {
            VAR_26 = -1;
            goto err;
        }
        if (FUNC_2(VAR_21, VAR_18->dmp1) != 0) {
            VAR_26 = 0;
            FUNC_17(VAR_3, VAR_5);
        }


        if (!FUNC_15(VAR_20, VAR_18->q, FUNC_16())) {
            VAR_26 = -1;
            goto err;
        }
        if (!FUNC_9(VAR_21, VAR_18->d, VAR_20, VAR_25)) {
            VAR_26 = -1;
            goto err;
        }
        if (FUNC_2(VAR_21, VAR_18->dmq1) != 0) {
            VAR_26 = 0;
            FUNC_17(VAR_3, VAR_6);
        }


        if (!FUNC_10(VAR_20, VAR_18->q, VAR_18->p, VAR_25)) {
            VAR_26 = -1;
            goto err;
        }
        if (FUNC_2(VAR_20, VAR_18->iqmp) != 0) {
            VAR_26 = 0;
            FUNC_17(VAR_3, VAR_9);
        }
    }

    for (VAR_28 = 0; VAR_28 < VAR_27; VAR_28++) {
        VAR_29 = FUNC_20(VAR_18->prime_infos, VAR_28);

        if (!FUNC_15(VAR_20, VAR_29->r, FUNC_16())) {
            VAR_26 = -1;
            goto err;
        }
        if (!FUNC_9(VAR_21, VAR_18->d, VAR_20, VAR_25)) {
            VAR_26 = -1;
            goto err;
        }
        if (FUNC_2(VAR_21, VAR_29->d) != 0) {
            VAR_26 = 0;
            FUNC_17(VAR_3, VAR_11);
        }

        if (!FUNC_10(VAR_20, VAR_29->pp, VAR_29->r, VAR_25)) {
            VAR_26 = -1;
            goto err;
        }
        if (FUNC_2(VAR_20, VAR_29->t) != 0) {
            VAR_26 = 0;
            FUNC_17(VAR_3, VAR_10);
        }
    }

 err:
    FUNC_4(VAR_20);
    FUNC_4(VAR_21);
    FUNC_4(VAR_22);
    FUNC_4(VAR_23);
    FUNC_4(VAR_24);
    FUNC_0(VAR_25);
    return VAR_26;
}
