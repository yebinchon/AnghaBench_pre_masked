
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* meth; int field; } ;
struct TYPE_13__ {scalar_t__ Z_is_one; int * Y; int * X; int * Z; } ;
struct TYPE_12__ {int (* field_mul ) (TYPE_3__ const*,int *,int *,int *,int *) ;int (* field_sqr ) (TYPE_3__ const*,int *,int *,int *) ;int (* field_encode ) (TYPE_3__ const*,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_7 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_9 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_10 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_11 (TYPE_3__ const*,int *,int *,int *,int *) ;

int FUNC_12(const EC_GROUP *VAR_3, EC_POINT *VAR_4,
                                    BN_CTX *VAR_5)
{
    int VAR_6 = 0;
    BIGNUM *VAR_7 = ((void*)0);
    BIGNUM *VAR_8 = ((void*)0);

    FUNC_2(VAR_5);
    VAR_7 = FUNC_1(VAR_5);
    VAR_8 = FUNC_1(VAR_5);
    if (VAR_8 == ((void*)0)) {
        FUNC_5(VAR_0, VAR_2);
        goto err;
    }


    do {
        if (!FUNC_4(VAR_7, VAR_3->field)) {
            FUNC_5(VAR_0, VAR_1);
            goto err;
        }
    } while (FUNC_3(VAR_7));


    if (VAR_3->meth->field_encode != ((void*)0)
        && !VAR_3->meth->field_encode(VAR_3, VAR_7, VAR_7, VAR_5))
        goto err;
    if (!VAR_3->meth->field_mul(VAR_3, VAR_4->Z, VAR_4->Z, VAR_7, VAR_5))
        goto err;
    if (!VAR_3->meth->field_sqr(VAR_3, VAR_8, VAR_7, VAR_5))
        goto err;
    if (!VAR_3->meth->field_mul(VAR_3, VAR_4->X, VAR_4->X, VAR_8, VAR_5))
        goto err;
    if (!VAR_3->meth->field_mul(VAR_3, VAR_8, VAR_8, VAR_7, VAR_5))
        goto err;
    if (!VAR_3->meth->field_mul(VAR_3, VAR_4->Y, VAR_4->Y, VAR_8, VAR_5))
        goto err;
    VAR_4->Z_is_one = 0;

    VAR_6 = 1;

 err:
    FUNC_0(VAR_5);
    return VAR_6;
}
