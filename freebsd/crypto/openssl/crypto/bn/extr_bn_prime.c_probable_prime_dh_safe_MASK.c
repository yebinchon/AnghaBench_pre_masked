
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BN_ULONG ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int const*,int const*,int const*) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int const*,int const*) ;
 int FUNC_6 (int const*,int const*,int const*,int *) ;
 scalar_t__ FUNC_7 (int const*,scalar_t__) ;
 int FUNC_8 (int const*,int,int ,int ) ;
 int FUNC_9 (int const*,int const*) ;
 int FUNC_10 (int const*,int const*,int const*) ;
 int VAR_2 ;
 int FUNC_11 (int const*) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_12(BIGNUM *VAR_4, int VAR_5, const BIGNUM *VAR_6,
                                  const BIGNUM *VAR_7, BN_CTX *VAR_8)
{
    int VAR_9, VAR_10 = 0;
    BIGNUM *VAR_11, *VAR_12, *VAR_13;

    VAR_5--;
    FUNC_2(VAR_8);
    VAR_11 = FUNC_1(VAR_8);
    VAR_13 = FUNC_1(VAR_8);
    VAR_12 = FUNC_1(VAR_8);
    if (VAR_12 == ((void*)0))
        goto err;

    if (!FUNC_9(VAR_12, VAR_6))
        goto err;

    if (!FUNC_8(VAR_13, VAR_5, VAR_1, VAR_0))
        goto err;


    if (!FUNC_6(VAR_11, VAR_13, VAR_12, VAR_8))
        goto err;
    if (!FUNC_10(VAR_13, VAR_13, VAR_11))
        goto err;
    if (VAR_7 == ((void*)0)) {
        if (!FUNC_4(VAR_13, 1))
            goto err;
    } else {
        if (!FUNC_9(VAR_11, VAR_7))
            goto err;
        if (!FUNC_3(VAR_13, VAR_13, VAR_11))
            goto err;
    }


    if (!FUNC_5(VAR_4, VAR_13))
        goto err;
    if (!FUNC_4(VAR_4, 1))
        goto err;

 loop:
    for (VAR_9 = 1; VAR_9 < VAR_2; VAR_9++) {




        BN_ULONG VAR_14 = FUNC_7(VAR_4, (BN_ULONG)VAR_3[VAR_9]);
        BN_ULONG VAR_15 = FUNC_7(VAR_13, (BN_ULONG)VAR_3[VAR_9]);
        if (VAR_14 == (BN_ULONG)-1 || VAR_15 == (BN_ULONG)-1)
            goto err;
        if (VAR_14 == 0 || VAR_15 == 0) {
            if (!FUNC_3(VAR_4, VAR_4, VAR_6))
                goto err;
            if (!FUNC_3(VAR_13, VAR_13, VAR_12))
                goto err;
            goto loop;
        }
    }
    VAR_10 = 1;

 err:
    FUNC_0(VAR_8);
    FUNC_11(VAR_4);
    return VAR_10;
}
