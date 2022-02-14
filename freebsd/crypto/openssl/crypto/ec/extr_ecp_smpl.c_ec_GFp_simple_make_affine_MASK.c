
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Z_is_one; } ;
typedef TYPE_1__ EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int const*,TYPE_1__*,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int const*,TYPE_1__*) ;
 int FUNC_7 (int const*,TYPE_1__*,int *,int *,int *) ;
 int FUNC_8 (int ,int ) ;
 int VAR_1 ;

int FUNC_9(const EC_GROUP *VAR_2, EC_POINT *VAR_3,
                              BN_CTX *VAR_4)
{
    BN_CTX *VAR_5 = ((void*)0);
    BIGNUM *VAR_6, *VAR_7;
    int VAR_8 = 0;

    if (VAR_3->Z_is_one || FUNC_6(VAR_2, VAR_3))
        return 1;

    if (VAR_4 == ((void*)0)) {
        VAR_4 = VAR_5 = FUNC_3();
        if (VAR_4 == ((void*)0))
            return 0;
    }

    FUNC_4(VAR_4);
    VAR_6 = FUNC_2(VAR_4);
    VAR_7 = FUNC_2(VAR_4);
    if (VAR_7 == ((void*)0))
        goto err;

    if (!FUNC_5(VAR_2, VAR_3, VAR_6, VAR_7, VAR_4))
        goto err;
    if (!FUNC_7(VAR_2, VAR_3, VAR_6, VAR_7, VAR_4))
        goto err;
    if (!VAR_3->Z_is_one) {
        FUNC_8(VAR_0, VAR_1);
        goto err;
    }

    VAR_8 = 1;

 err:
    FUNC_0(VAR_4);
    FUNC_1(VAR_5);
    return VAR_8;
}
