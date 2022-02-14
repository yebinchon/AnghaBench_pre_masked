
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int point_conversion_form_t ;
struct TYPE_39__ {scalar_t__ k3; scalar_t__ k2; scalar_t__ k1; } ;
typedef TYPE_9__ X9_62_PENTANOMIAL ;
struct TYPE_38__ {TYPE_9__* ppBasis; int tpBasis; } ;
struct TYPE_28__ {long m; TYPE_8__ p; int type; } ;
typedef TYPE_10__ X9_62_CHARACTERISTIC_TWO ;
struct TYPE_36__ {int * prime; TYPE_10__* char_two; int ptr; } ;
struct TYPE_37__ {TYPE_6__ p; int fieldType; } ;
struct TYPE_35__ {TYPE_1__* seed; TYPE_4__* b; TYPE_3__* a; } ;
struct TYPE_34__ {int length; int data; } ;
struct TYPE_33__ {int length; int data; } ;
struct TYPE_32__ {int* data; int length; } ;
struct TYPE_31__ {int length; int data; } ;
struct TYPE_30__ {int * cofactor; int * order; TYPE_2__* base; TYPE_5__* curve; TYPE_7__* fieldID; } ;
struct TYPE_29__ {int seed_len; int * seed; } ;
typedef int EC_POINT ;
typedef TYPE_11__ EC_GROUP ;
typedef TYPE_12__ ECPARAMETERS ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 long FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int VAR_0 ;
 TYPE_11__* FUNC_11 (TYPE_11__*) ;
 int FUNC_12 (TYPE_11__*) ;
 TYPE_11__* FUNC_13 (int) ;
 TYPE_11__* FUNC_14 (int *,int *,int *,int *) ;
 TYPE_11__* FUNC_15 (int *,int *,int *,int *) ;
 int FUNC_16 (TYPE_11__*,int ) ;
 int FUNC_17 (TYPE_11__*,int *,int *,int *) ;
 int FUNC_18 (TYPE_11__*,int ) ;
 int FUNC_19 (TYPE_11__*,int *,int ) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (TYPE_11__*) ;
 int FUNC_22 (TYPE_11__*,int *,int*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_23 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_24 (int ) ;
 long VAR_21 ;
 int VAR_22 ;
 int FUNC_25 (int *) ;
 int * FUNC_26 (int ) ;
 int FUNC_27 (TYPE_11__*,int *) ;
 int FUNC_28 (int *,int ,int ) ;

EC_GROUP *FUNC_29(const ECPARAMETERS *VAR_23)
{
    int VAR_24 = 0, VAR_25;
    EC_GROUP *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
    BIGNUM *VAR_28 = ((void*)0), *VAR_29 = ((void*)0), *VAR_30 = ((void*)0);
    EC_POINT *VAR_31 = ((void*)0);
    long VAR_32;
    int VAR_33 = VAR_19;
    BN_CTX *VAR_34 = ((void*)0);

    if (!VAR_23->fieldID || !VAR_23->fieldID->fieldType ||
        !VAR_23->fieldID->p.ptr) {
        FUNC_23(VAR_0, VAR_1);
        goto err;
    }







    if (!VAR_23->curve || !VAR_23->curve->a ||
        !VAR_23->curve->a->data || !VAR_23->curve->b ||
        !VAR_23->curve->b->data) {
        FUNC_23(VAR_0, VAR_1);
        goto err;
    }
    VAR_29 = FUNC_4(VAR_23->curve->a->data, VAR_23->curve->a->length, ((void*)0));
    if (VAR_29 == ((void*)0)) {
        FUNC_23(VAR_0, VAR_10);
        goto err;
    }
    VAR_30 = FUNC_4(VAR_23->curve->b->data, VAR_23->curve->b->length, ((void*)0));
    if (VAR_30 == ((void*)0)) {
        FUNC_23(VAR_0, VAR_10);
        goto err;
    }


    VAR_25 = FUNC_24(VAR_23->fieldID->fieldType);
    if (VAR_25 == VAR_13)






    {
        X9_62_CHARACTERISTIC_TWO *VAR_35;

        VAR_35 = VAR_23->fieldID->p.char_two;

        VAR_32 = VAR_35->m;
        if (VAR_32 > VAR_21) {
            FUNC_23(VAR_0, VAR_2);
            goto err;
        }

        if ((VAR_28 = FUNC_8()) == ((void*)0)) {
            FUNC_23(VAR_0, VAR_12);
            goto err;
        }


        VAR_25 = FUNC_24(VAR_35->type);

        if (VAR_25 == VAR_17) {
            long VAR_36;

            if (!VAR_35->p.tpBasis) {
                FUNC_23(VAR_0, VAR_1);
                goto err;
            }

            VAR_36 = FUNC_0(VAR_35->p.tpBasis);

            if (!(VAR_35->m > VAR_36 && VAR_36 > 0)) {
                FUNC_23(VAR_0,
                      VAR_7);
                goto err;
            }


            if (!FUNC_10(VAR_28, (int)VAR_35->m))
                goto err;
            if (!FUNC_10(VAR_28, (int)VAR_36))
                goto err;
            if (!FUNC_10(VAR_28, 0))
                goto err;
        } else if (VAR_25 == VAR_15) {
            X9_62_PENTANOMIAL *VAR_37;

            VAR_37 = VAR_35->p.ppBasis;
            if (!VAR_37) {
                FUNC_23(VAR_0, VAR_1);
                goto err;
            }

            if (!
                (VAR_35->m > VAR_37->k3 && VAR_37->k3 > VAR_37->k2
                 && VAR_37->k2 > VAR_37->k1 && VAR_37->k1 > 0)) {
                FUNC_23(VAR_0,
                      VAR_6);
                goto err;
            }


            if (!FUNC_10(VAR_28, (int)VAR_35->m))
                goto err;
            if (!FUNC_10(VAR_28, (int)VAR_37->k1))
                goto err;
            if (!FUNC_10(VAR_28, (int)VAR_37->k2))
                goto err;
            if (!FUNC_10(VAR_28, (int)VAR_37->k3))
                goto err;
            if (!FUNC_10(VAR_28, 0))
                goto err;
        } else if (VAR_25 == VAR_14) {
            FUNC_23(VAR_0, VAR_8);
            goto err;
        } else {

            FUNC_23(VAR_0, VAR_1);
            goto err;
        }


        VAR_26 = FUNC_14(VAR_28, VAR_29, VAR_30, ((void*)0));
    }

    else if (VAR_25 == VAR_16) {


        if (!VAR_23->fieldID->p.prime) {
            FUNC_23(VAR_0, VAR_1);
            goto err;
        }
        VAR_28 = FUNC_1(VAR_23->fieldID->p.prime, ((void*)0));
        if (VAR_28 == ((void*)0)) {
            FUNC_23(VAR_0, VAR_9);
            goto err;
        }

        if (FUNC_6(VAR_28) || FUNC_7(VAR_28)) {
            FUNC_23(VAR_0, VAR_4);
            goto err;
        }

        VAR_32 = FUNC_9(VAR_28);
        if (VAR_32 > VAR_21) {
            FUNC_23(VAR_0, VAR_2);
            goto err;
        }


        VAR_26 = FUNC_15(VAR_28, VAR_29, VAR_30, ((void*)0));
    } else {
        FUNC_23(VAR_0, VAR_4);
        goto err;
    }

    if (VAR_26 == ((void*)0)) {
        FUNC_23(VAR_0, VAR_11);
        goto err;
    }


    if (VAR_23->curve->seed != ((void*)0)) {
        FUNC_25(VAR_26->seed);
        if ((VAR_26->seed = FUNC_26(VAR_23->curve->seed->length)) == ((void*)0)) {
            FUNC_23(VAR_0, VAR_12);
            goto err;
        }
        FUNC_28(VAR_26->seed, VAR_23->curve->seed->data,
               VAR_23->curve->seed->length);
        VAR_26->seed_len = VAR_23->curve->seed->length;
    }

    if (!VAR_23->order || !VAR_23->base || !VAR_23->base->data) {
        FUNC_23(VAR_0, VAR_1);
        goto err;
    }

    if ((VAR_31 = FUNC_21(VAR_26)) == ((void*)0))
        goto err;


    FUNC_18(VAR_26, (point_conversion_form_t)
                                       (VAR_23->base->data[0] & ~0x01));


    if (!FUNC_22(VAR_26, VAR_31, VAR_23->base->data,
                            VAR_23->base->length, ((void*)0))) {
        FUNC_23(VAR_0, VAR_11);
        goto err;
    }


    if ((VAR_29 = FUNC_1(VAR_23->order, VAR_29)) == ((void*)0)) {
        FUNC_23(VAR_0, VAR_9);
        goto err;
    }
    if (FUNC_6(VAR_29) || FUNC_7(VAR_29)) {
        FUNC_23(VAR_0, VAR_5);
        goto err;
    }
    if (FUNC_9(VAR_29) > (int)VAR_32 + 1) {
        FUNC_23(VAR_0, VAR_5);
        goto err;
    }


    if (VAR_23->cofactor == ((void*)0)) {
        FUNC_5(VAR_30);
        VAR_30 = ((void*)0);
    } else if ((VAR_30 = FUNC_1(VAR_23->cofactor, VAR_30)) == ((void*)0)) {
        FUNC_23(VAR_0, VAR_9);
        goto err;
    }

    if (!FUNC_17(VAR_26, VAR_31, VAR_29, VAR_30)) {
        FUNC_23(VAR_0, VAR_11);
        goto err;
    }
    if ((VAR_34 = FUNC_3()) == ((void*)0)) {
        FUNC_23(VAR_0, VAR_10);
        goto err;
    }
    if ((VAR_27 = FUNC_11(VAR_26)) == ((void*)0)
            || FUNC_19(VAR_27, ((void*)0), 0) != 1
            || !FUNC_17(VAR_27, VAR_31, VAR_29, ((void*)0))) {
        FUNC_23(VAR_0, VAR_11);
        goto err;
    }
    if ((VAR_33 = FUNC_27(VAR_27, VAR_34)) != VAR_19) {
        EC_GROUP *VAR_38 = ((void*)0);







        if (VAR_33 == VAR_20)
            VAR_33 = VAR_18;


        if ((VAR_38 = FUNC_13(VAR_33)) == ((void*)0)) {
            FUNC_23(VAR_0, VAR_11);
            goto err;
        }
        FUNC_12(VAR_26);
        VAR_26 = VAR_38;





        FUNC_16(VAR_26, VAR_22);
    }

    VAR_24 = 1;

 err:
    if (!VAR_24) {
        FUNC_12(VAR_26);
        VAR_26 = ((void*)0);
    }
    FUNC_12(VAR_27);

    FUNC_5(VAR_28);
    FUNC_5(VAR_29);
    FUNC_5(VAR_30);
    FUNC_20(VAR_31);

    FUNC_2(VAR_34);

    return VAR_26;
}
