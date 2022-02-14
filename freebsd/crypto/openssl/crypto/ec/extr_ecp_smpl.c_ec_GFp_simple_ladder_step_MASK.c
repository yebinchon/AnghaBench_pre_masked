
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_32__ {int field; TYPE_1__* meth; int * a; int b; } ;
struct TYPE_31__ {int * Z; int * X; } ;
struct TYPE_30__ {int (* field_mul ) (TYPE_3__ const*,int *,int *,int *,int *) ;int (* field_sqr ) (TYPE_3__ const*,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *,int *,int *,int ) ;
 int FUNC_7 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_9 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_10 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_11 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_12 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_13 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_14 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_15 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_16 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_17 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_18 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_19 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_20 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_21 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_22 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_23 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_24 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_25 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_26 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_27 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_28 (TYPE_3__ const*,int *,int *,int *) ;

int FUNC_29(const EC_GROUP *VAR_0,
                              EC_POINT *VAR_1, EC_POINT *VAR_2,
                              EC_POINT *VAR_3, BN_CTX *VAR_4)
{
    int VAR_5 = 0;
    BIGNUM *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13 = ((void*)0);

    FUNC_2(VAR_4);
    VAR_6 = FUNC_1(VAR_4);
    VAR_7 = FUNC_1(VAR_4);
    VAR_8 = FUNC_1(VAR_4);
    VAR_9 = FUNC_1(VAR_4);
    VAR_10 = FUNC_1(VAR_4);
    VAR_11 = FUNC_1(VAR_4);
    VAR_12 = FUNC_1(VAR_4);
    VAR_13 = FUNC_1(VAR_4);

    if (VAR_13 == ((void*)0)
        || !VAR_0->meth->field_mul(VAR_0, VAR_6, VAR_1->X, VAR_2->X, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_7, VAR_1->Z, VAR_2->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_8, VAR_1->X, VAR_2->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_9, VAR_1->Z, VAR_2->X, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_10, VAR_0->a, VAR_7, VAR_4)
        || !FUNC_3(VAR_6, VAR_6, VAR_10, VAR_0->field)
        || !FUNC_3(VAR_10, VAR_9, VAR_8, VAR_0->field)
        || !VAR_0->meth->field_mul(VAR_0, VAR_6, VAR_10, VAR_6, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_7, VAR_7, VAR_4)
        || !FUNC_5(VAR_13, VAR_0->b, 2, VAR_0->field)
        || !VAR_0->meth->field_mul(VAR_0, VAR_7, VAR_13, VAR_7, VAR_4)
        || !FUNC_4(VAR_6, VAR_6, VAR_0->field)
        || !FUNC_3(VAR_6, VAR_7, VAR_6, VAR_0->field)
        || !FUNC_6(VAR_7, VAR_8, VAR_9, VAR_0->field)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_7, VAR_7, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_9, VAR_7, VAR_3->X, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_6, VAR_3->Z, VAR_6, VAR_4)

        || !FUNC_6(VAR_2->X, VAR_6, VAR_9, VAR_0->field)

        || !VAR_0->meth->field_mul(VAR_0, VAR_2->Z, VAR_3->Z, VAR_7, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_9, VAR_1->X, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_8, VAR_1->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_10, VAR_8, VAR_0->a, VAR_4)
        || !FUNC_3(VAR_11, VAR_1->X, VAR_1->Z, VAR_0->field)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_11, VAR_11, VAR_4)
        || !FUNC_6(VAR_11, VAR_11, VAR_9, VAR_0->field)
        || !FUNC_6(VAR_11, VAR_11, VAR_8, VAR_0->field)
        || !FUNC_6(VAR_12, VAR_9, VAR_10, VAR_0->field)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_12, VAR_12, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_6, VAR_8, VAR_11, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_6, VAR_13, VAR_6, VAR_4)

        || !FUNC_6(VAR_1->X, VAR_12, VAR_6, VAR_0->field)
        || !FUNC_3(VAR_12, VAR_9, VAR_10, VAR_0->field)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_9, VAR_8, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_13, VAR_9, VAR_13, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_11, VAR_11, VAR_12, VAR_4)
        || !FUNC_4(VAR_11, VAR_11, VAR_0->field)

        || !FUNC_3(VAR_1->Z, VAR_13, VAR_11, VAR_0->field))
        goto err;

    VAR_5 = 1;

 err:
    FUNC_0(VAR_4);
    return VAR_5;
}
