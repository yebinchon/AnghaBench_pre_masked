
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int const*,int const*) ;
 scalar_t__ FUNC_4 (int const*,int ) ;
 scalar_t__ FUNC_5 (int const*,int) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int const*,int const*,int const*,int *) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*,int const*,int *) ;
 int FUNC_11 (int ,int ) ;
 int VAR_2 ;
 int FUNC_12 (int const*) ;

int FUNC_13(BIGNUM *VAR_3, const BIGNUM *VAR_4, const BIGNUM *VAR_5, BN_CTX *VAR_6)
{
    int VAR_7, VAR_8, VAR_9 = 0;
    BIGNUM *VAR_10, *VAR_11;

    if (FUNC_4(VAR_5, VAR_0) != 0
            || FUNC_4(VAR_4, VAR_0) != 0) {

        FUNC_11(VAR_1, VAR_2);
        return 0;
    }

    FUNC_2(VAR_6);
    VAR_11 = ((VAR_3 == VAR_4) || (VAR_3 == VAR_5)) ? FUNC_1(VAR_6) : VAR_3;
    VAR_10 = FUNC_1(VAR_6);
    if (VAR_11 == ((void*)0) || VAR_10 == ((void*)0))
        goto err;

    if (FUNC_3(VAR_10, VAR_4) == ((void*)0))
        goto err;
    VAR_8 = FUNC_8(VAR_5);

    if (FUNC_6(VAR_5)) {
        if (FUNC_3(VAR_11, VAR_4) == ((void*)0))
            goto err;
    } else {
        if (!FUNC_9(VAR_11))
            goto err;
    }

    for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++) {
        if (!FUNC_10(VAR_10, VAR_10, VAR_6))
            goto err;
        if (FUNC_5(VAR_5, VAR_7)) {
            if (!FUNC_7(VAR_11, VAR_11, VAR_10, VAR_6))
                goto err;
        }
    }
    if (VAR_3 != VAR_11 && FUNC_3(VAR_3, VAR_11) == ((void*)0))
        goto err;

    VAR_9 = 1;
 err:
    FUNC_0(VAR_6);
    FUNC_12(VAR_3);
    return VAR_9;
}
