
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Y; int X; int Z; } ;
typedef TYPE_1__ EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int const*,TYPE_1__ const*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;

int FUNC_6(const EC_GROUP *VAR_3,
                                                const EC_POINT *VAR_4,
                                                BIGNUM *VAR_5, BIGNUM *VAR_6,
                                                BN_CTX *VAR_7)
{
    int VAR_8 = 0;

    if (FUNC_4(VAR_3, VAR_4)) {
        FUNC_5(VAR_0,
              VAR_1);
        return 0;
    }

    if (FUNC_0(VAR_4->Z, FUNC_3())) {
        FUNC_5(VAR_0,
              VAR_2);
        return 0;
    }
    if (VAR_5 != ((void*)0)) {
        if (!FUNC_1(VAR_5, VAR_4->X))
            goto err;
        FUNC_2(VAR_5, 0);
    }
    if (VAR_6 != ((void*)0)) {
        if (!FUNC_1(VAR_6, VAR_4->Y))
            goto err;
        FUNC_2(VAR_6, 0);
    }
    VAR_8 = 1;

 err:
    return VAR_8;
}
