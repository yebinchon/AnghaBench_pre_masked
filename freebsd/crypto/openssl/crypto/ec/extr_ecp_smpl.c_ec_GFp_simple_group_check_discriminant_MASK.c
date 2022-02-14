
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int b; int a; TYPE_1__* meth; int * field; } ;
struct TYPE_6__ {int (* field_decode ) (TYPE_2__ const*,int *,int ,int *) ;} ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int *,int const*,int *) ;
 int FUNC_9 (int *,int *,int *,int const*,int *) ;
 int FUNC_10 (int *,int *,int const*,int *) ;
 int FUNC_11 (int *,int) ;
 int VAR_0 ;
 int FUNC_12 (int ,int ) ;
 int VAR_1 ;
 int FUNC_13 (TYPE_2__ const*,int *,int ,int *) ;
 int FUNC_14 (TYPE_2__ const*,int *,int ,int *) ;

int FUNC_15(const EC_GROUP *VAR_2, BN_CTX *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    const BIGNUM *VAR_10 = VAR_2->field;
    BN_CTX *VAR_11 = ((void*)0);

    if (VAR_3 == ((void*)0)) {
        VAR_3 = VAR_11 = FUNC_3();
        if (VAR_3 == ((void*)0)) {
            FUNC_12(VAR_0,
                  VAR_1);
            goto err;
        }
    }
    FUNC_4(VAR_3);
    VAR_5 = FUNC_2(VAR_3);
    VAR_6 = FUNC_2(VAR_3);
    VAR_8 = FUNC_2(VAR_3);
    VAR_9 = FUNC_2(VAR_3);
    VAR_7 = FUNC_2(VAR_3);
    if (VAR_7 == ((void*)0))
        goto err;

    if (VAR_2->meth->field_decode) {
        if (!VAR_2->meth->field_decode(VAR_2, VAR_5, VAR_2->a, VAR_3))
            goto err;
        if (!VAR_2->meth->field_decode(VAR_2, VAR_6, VAR_2->b, VAR_3))
            goto err;
    } else {
        if (!FUNC_5(VAR_5, VAR_2->a))
            goto err;
        if (!FUNC_5(VAR_6, VAR_2->b))
            goto err;
    }






    if (FUNC_6(VAR_5)) {
        if (FUNC_6(VAR_6))
            goto err;
    } else if (!FUNC_6(VAR_6)) {
        if (!FUNC_10(VAR_8, VAR_5, VAR_10, VAR_3))
            goto err;
        if (!FUNC_9(VAR_9, VAR_8, VAR_5, VAR_10, VAR_3))
            goto err;
        if (!FUNC_7(VAR_8, VAR_9, 2))
            goto err;


        if (!FUNC_10(VAR_9, VAR_6, VAR_10, VAR_3))
            goto err;
        if (!FUNC_11(VAR_9, 27))
            goto err;


        if (!FUNC_8(VAR_5, VAR_8, VAR_9, VAR_10, VAR_3))
            goto err;
        if (FUNC_6(VAR_5))
            goto err;
    }
    VAR_4 = 1;

 err:
    FUNC_0(VAR_3);
    FUNC_1(VAR_11);
    return VAR_4;
}
