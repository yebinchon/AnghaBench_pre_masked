
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* meth; int field; } ;
struct TYPE_17__ {int * Y; int * X; int * Z; } ;
struct TYPE_16__ {scalar_t__ field_encode; int (* field_mul ) (TYPE_3__ const*,int *,int *,int *,int *) ;int (* field_sqr ) (TYPE_3__ const*,int *,int *,int *) ;int (* field_inv ) (TYPE_3__ const*,int *,int const*,int *) ;int (* field_decode ) (TYPE_3__ const*,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int *,int *,int *,int ,int *) ;
 int FUNC_8 (int *,int *,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (TYPE_3__ const*,TYPE_2__ const*) ;
 int VAR_1 ;
 int FUNC_10 (int ,int ) ;
 int VAR_2 ;
 int FUNC_11 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_12 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_13 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_14 (TYPE_3__ const*,int *,int const*,int *) ;
 int FUNC_15 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_16 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_17 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_18 (TYPE_3__ const*,int *,int *,int *,int *) ;

int FUNC_19(const EC_GROUP *VAR_3,
                                               const EC_POINT *VAR_4,
                                               BIGNUM *VAR_5, BIGNUM *VAR_6,
                                               BN_CTX *VAR_7)
{
    BN_CTX *VAR_8 = ((void*)0);
    BIGNUM *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    const BIGNUM *VAR_13;
    int VAR_14 = 0;

    if (FUNC_9(VAR_3, VAR_4)) {
        FUNC_10(VAR_0,
              VAR_1);
        return 0;
    }

    if (VAR_7 == ((void*)0)) {
        VAR_7 = VAR_8 = FUNC_3();
        if (VAR_7 == ((void*)0))
            return 0;
    }

    FUNC_4(VAR_7);
    VAR_9 = FUNC_2(VAR_7);
    VAR_10 = FUNC_2(VAR_7);
    VAR_11 = FUNC_2(VAR_7);
    VAR_12 = FUNC_2(VAR_7);
    if (VAR_12 == ((void*)0))
        goto err;



    if (VAR_3->meth->field_decode) {
        if (!VAR_3->meth->field_decode(VAR_3, VAR_9, VAR_4->Z, VAR_7))
            goto err;
        VAR_13 = VAR_9;
    } else {
        VAR_13 = VAR_4->Z;
    }

    if (FUNC_6(VAR_13)) {
        if (VAR_3->meth->field_decode) {
            if (VAR_5 != ((void*)0)) {
                if (!VAR_3->meth->field_decode(VAR_3, VAR_5, VAR_4->X, VAR_7))
                    goto err;
            }
            if (VAR_6 != ((void*)0)) {
                if (!VAR_3->meth->field_decode(VAR_3, VAR_6, VAR_4->Y, VAR_7))
                    goto err;
            }
        } else {
            if (VAR_5 != ((void*)0)) {
                if (!FUNC_5(VAR_5, VAR_4->X))
                    goto err;
            }
            if (VAR_6 != ((void*)0)) {
                if (!FUNC_5(VAR_6, VAR_4->Y))
                    goto err;
            }
        }
    } else {
        if (!VAR_3->meth->field_inv(VAR_3, VAR_10, VAR_13, VAR_7)) {
            FUNC_10(VAR_0,
                  VAR_2);
            goto err;
        }

        if (VAR_3->meth->field_encode == 0) {

            if (!VAR_3->meth->field_sqr(VAR_3, VAR_11, VAR_10, VAR_7))
                goto err;
        } else {
            if (!FUNC_8(VAR_11, VAR_10, VAR_3->field, VAR_7))
                goto err;
        }

        if (VAR_5 != ((void*)0)) {




            if (!VAR_3->meth->field_mul(VAR_3, VAR_5, VAR_4->X, VAR_11, VAR_7))
                goto err;
        }

        if (VAR_6 != ((void*)0)) {
            if (VAR_3->meth->field_encode == 0) {



                if (!VAR_3->meth->field_mul(VAR_3, VAR_12, VAR_11, VAR_10, VAR_7))
                    goto err;
            } else {
                if (!FUNC_7(VAR_12, VAR_11, VAR_10, VAR_3->field, VAR_7))
                    goto err;
            }





            if (!VAR_3->meth->field_mul(VAR_3, VAR_6, VAR_4->Y, VAR_12, VAR_7))
                goto err;
        }
    }

    VAR_14 = 1;

 err:
    FUNC_0(VAR_7);
    FUNC_1(VAR_8);
    return VAR_14;
}
