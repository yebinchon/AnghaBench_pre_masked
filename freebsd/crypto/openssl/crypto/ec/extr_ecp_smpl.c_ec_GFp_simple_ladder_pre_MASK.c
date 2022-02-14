
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int field; TYPE_1__* meth; int * b; int * a; } ;
struct TYPE_23__ {scalar_t__ Z_is_one; int * Z; int * X; int * Y; } ;
struct TYPE_22__ {int (* field_mul ) (TYPE_3__ const*,int *,int *,int *,int *) ;int (* field_sqr ) (TYPE_3__ const*,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *,int *,int,int ) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_5 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_6 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_7 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_9 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_10 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_11 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_12 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_13 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_14 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_15 (TYPE_3__ const*,int *,int *,int *,int *) ;

int FUNC_16(const EC_GROUP *VAR_0,
                             EC_POINT *VAR_1, EC_POINT *VAR_2,
                             EC_POINT *VAR_3, BN_CTX *VAR_4)
{
    BIGNUM *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10 = ((void*)0);

    VAR_5 = VAR_1->Z;
    VAR_6 = VAR_1->Y;
    VAR_7 = VAR_2->X;
    VAR_8 = VAR_1->X;
    VAR_9 = VAR_2->Y;
    VAR_10 = VAR_2->Z;


    if (!VAR_0->meth->field_mul(VAR_0, VAR_3->X, VAR_3->X, VAR_3->Z, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_5, VAR_3->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_3->Z, VAR_3->Z, VAR_5, VAR_4)

        || !VAR_0->meth->field_sqr(VAR_0, VAR_6, VAR_3->X, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_7, VAR_3->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_8, VAR_7, VAR_0->a, VAR_4)
        || !FUNC_2(VAR_9, VAR_6, VAR_8, VAR_0->field)
        || !FUNC_0(VAR_6, VAR_6, VAR_8, VAR_0->field)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_9, VAR_9, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_10, VAR_7, VAR_0->b, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_5, VAR_3->X, VAR_3->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_8, VAR_5, VAR_10, VAR_4)
        || !FUNC_1(VAR_8, VAR_8, 3, VAR_0->field)

        || !FUNC_2(VAR_1->X, VAR_9, VAR_8, VAR_0->field)
        || !VAR_0->meth->field_mul(VAR_0, VAR_5, VAR_5, VAR_6, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_6, VAR_7, VAR_10, VAR_4)
        || !FUNC_0(VAR_5, VAR_5, VAR_6, VAR_0->field)

        || !FUNC_1(VAR_1->Z, VAR_5, 2, VAR_0->field)
        || !FUNC_3(VAR_2, VAR_3))
        return 0;

    VAR_1->Z_is_one = 0;
    VAR_2->Z_is_one = 0;
    VAR_3->Z_is_one = 0;

    return 1;
}
