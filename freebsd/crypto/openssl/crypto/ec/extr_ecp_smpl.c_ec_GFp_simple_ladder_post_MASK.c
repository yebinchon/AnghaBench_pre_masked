
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


struct TYPE_38__ {TYPE_1__* meth; int field; int * a; int * b; } ;
struct TYPE_37__ {int * Y; int * Z; int * X; } ;
struct TYPE_36__ {int (* field_mul ) (TYPE_3__ const*,int *,int *,int *,int *) ;int (* field_sqr ) (TYPE_3__ const*,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *,int *,int ) ;
 int FUNC_8 (TYPE_3__ const*,TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_10 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_11 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_12 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_13 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_14 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_15 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_16 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_17 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_18 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_19 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_20 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_21 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_22 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_23 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_24 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_25 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_26 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_27 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_28 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_29 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_30 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_31 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_32 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_33 (TYPE_3__ const*,int *,int *,int *) ;

int FUNC_34(const EC_GROUP *VAR_0,
                              EC_POINT *VAR_1, EC_POINT *VAR_2,
                              EC_POINT *VAR_3, BN_CTX *VAR_4)
{
    int VAR_5 = 0;
    BIGNUM *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12 = ((void*)0);

    if (FUNC_4(VAR_1->Z))
        return FUNC_9(VAR_0, VAR_1);

    if (FUNC_4(VAR_2->Z)) {

        if (!VAR_0->meth->field_mul(VAR_0, VAR_1->X, VAR_3->X, VAR_3->Z, VAR_4)
            || !VAR_0->meth->field_sqr(VAR_0, VAR_1->Z, VAR_3->Z, VAR_4)
            || !VAR_0->meth->field_mul(VAR_0, VAR_1->Y, VAR_3->Y, VAR_1->Z, VAR_4)
            || !FUNC_3(VAR_1->Z, VAR_3->Z)
            || !FUNC_8(VAR_0, VAR_1, VAR_4))
            return 0;
        return 1;
    }

    FUNC_2(VAR_4);
    VAR_6 = FUNC_1(VAR_4);
    VAR_7 = FUNC_1(VAR_4);
    VAR_8 = FUNC_1(VAR_4);
    VAR_9 = FUNC_1(VAR_4);
    VAR_10 = FUNC_1(VAR_4);
    VAR_11 = FUNC_1(VAR_4);
    VAR_12 = FUNC_1(VAR_4);

    if (VAR_12 == ((void*)0)
        || !FUNC_6(VAR_6, VAR_3->Y, VAR_0->field)
        || !VAR_0->meth->field_mul(VAR_0, VAR_7, VAR_1->X, VAR_3->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_8, VAR_1->Z, VAR_2->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_8, VAR_7, VAR_8, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_9, VAR_8, VAR_6, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_8, VAR_1->Z, VAR_3->Z, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_10, VAR_8, VAR_4)
        || !FUNC_6(VAR_11, VAR_0->b, VAR_0->field)
        || !VAR_0->meth->field_mul(VAR_0, VAR_10, VAR_10, VAR_11, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_12, VAR_8, VAR_0->a, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_11, VAR_1->X, VAR_3->X, VAR_4)
        || !FUNC_5(VAR_11, VAR_12, VAR_11, VAR_0->field)
        || !VAR_0->meth->field_mul(VAR_0, VAR_12, VAR_1->Z, VAR_3->X, VAR_4)
        || !FUNC_5(VAR_8, VAR_12, VAR_7, VAR_0->field)
        || !VAR_0->meth->field_mul(VAR_0, VAR_11, VAR_11, VAR_8, VAR_4)
        || !FUNC_7(VAR_12, VAR_12, VAR_7, VAR_0->field)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_12, VAR_12, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_12, VAR_12, VAR_2->X, VAR_4)
        || !FUNC_5(VAR_10, VAR_11, VAR_10, VAR_0->field)
        || !VAR_0->meth->field_mul(VAR_0, VAR_10, VAR_10, VAR_2->Z, VAR_4)
        || !FUNC_7(VAR_10, VAR_10, VAR_12, VAR_0->field)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_11, VAR_1->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_1->Z, VAR_3->Z, VAR_2->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_1->Z, VAR_11, VAR_1->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_1->Z, VAR_1->Z, VAR_6, VAR_4)


        || !VAR_0->meth->field_mul(VAR_0, VAR_1->X, VAR_9, VAR_1->Z, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_9, VAR_1->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_1->Y, VAR_10, VAR_9, VAR_4))
        goto err;

    VAR_5 = 1;

 err:
    FUNC_0(VAR_4);
    return VAR_5;
}
