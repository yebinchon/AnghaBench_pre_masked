
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int a_is_minus3; int const* field; int const* b; TYPE_1__* meth; int const* a; } ;
struct TYPE_6__ {int (* field_encode ) (TYPE_2__*,int const*,int const*,int *) ;} ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*,int) ;
 scalar_t__ FUNC_6 (int const*,int const*) ;
 int FUNC_7 (int const*,int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*,int const*,int const*,int *) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_2__*,int const*,int const*,int *) ;
 int FUNC_14 (TYPE_2__*,int const*,int const*,int *) ;

int FUNC_15(EC_GROUP *VAR_2,
                                  const BIGNUM *VAR_3, const BIGNUM *VAR_4,
                                  const BIGNUM *VAR_5, BN_CTX *VAR_6)
{
    int VAR_7 = 0;
    BN_CTX *VAR_8 = ((void*)0);
    BIGNUM *VAR_9;


    if (FUNC_10(VAR_3) <= 2 || !FUNC_8(VAR_3)) {
        FUNC_12(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_6 == ((void*)0)) {
        VAR_6 = VAR_8 = FUNC_3();
        if (VAR_6 == ((void*)0))
            return 0;
    }

    FUNC_4(VAR_6);
    VAR_9 = FUNC_2(VAR_6);
    if (VAR_9 == ((void*)0))
        goto err;


    if (!FUNC_7(VAR_2->field, VAR_3))
        goto err;
    FUNC_11(VAR_2->field, 0);


    if (!FUNC_9(VAR_9, VAR_4, VAR_3, VAR_6))
        goto err;
    if (VAR_2->meth->field_encode) {
        if (!VAR_2->meth->field_encode(VAR_2, VAR_2->a, VAR_9, VAR_6))
            goto err;
    } else if (!FUNC_7(VAR_2->a, VAR_9))
        goto err;


    if (!FUNC_9(VAR_2->b, VAR_5, VAR_3, VAR_6))
        goto err;
    if (VAR_2->meth->field_encode)
        if (!VAR_2->meth->field_encode(VAR_2, VAR_2->b, VAR_2->b, VAR_6))
            goto err;


    if (!FUNC_5(VAR_9, 3))
        goto err;
    VAR_2->a_is_minus3 = (0 == FUNC_6(VAR_9, VAR_2->field));

    VAR_7 = 1;

 err:
    FUNC_0(VAR_6);
    FUNC_1(VAR_8);
    return VAR_7;
}
