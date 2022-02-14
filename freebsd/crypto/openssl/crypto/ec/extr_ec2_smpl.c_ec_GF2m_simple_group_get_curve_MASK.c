
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b; int a; int field; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int ) ;

int FUNC_1(const EC_GROUP *VAR_0, BIGNUM *VAR_1,
                                   BIGNUM *VAR_2, BIGNUM *VAR_3, BN_CTX *VAR_4)
{
    int VAR_5 = 0;

    if (VAR_1 != ((void*)0)) {
        if (!FUNC_0(VAR_1, VAR_0->field))
            return 0;
    }

    if (VAR_2 != ((void*)0)) {
        if (!FUNC_0(VAR_2, VAR_0->a))
            goto err;
    }

    if (VAR_3 != ((void*)0)) {
        if (!FUNC_0(VAR_3, VAR_0->b))
            goto err;
    }

    VAR_5 = 1;

 err:
    return VAR_5;
}
