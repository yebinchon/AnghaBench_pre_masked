
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int const*,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int ,int ) ;
 int FUNC_8 (int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 scalar_t__* VAR_3 ;

int FUNC_10(BIGNUM *VAR_4, int VAR_5,
                         const BIGNUM *VAR_6, const BIGNUM *VAR_7, BN_CTX *VAR_8)
{
    int VAR_9, VAR_10 = 0;
    BIGNUM *VAR_11;

    FUNC_2(VAR_8);
    if ((VAR_11 = FUNC_1(VAR_8)) == ((void*)0))
        goto err;

    if (!FUNC_7(VAR_4, VAR_5, VAR_1, VAR_0))
        goto err;



    if (!FUNC_5(VAR_11, VAR_4, VAR_6, VAR_8))
        goto err;
    if (!FUNC_8(VAR_4, VAR_4, VAR_11))
        goto err;
    if (VAR_7 == ((void*)0)) {
        if (!FUNC_4(VAR_4, 1))
            goto err;
    } else {
        if (!FUNC_3(VAR_4, VAR_4, VAR_7))
            goto err;
    }



 loop:
    for (VAR_9 = 1; VAR_9 < VAR_2; VAR_9++) {

        BN_ULONG VAR_12 = FUNC_6(VAR_4, (BN_ULONG)VAR_3[VAR_9]);
        if (VAR_12 == (BN_ULONG)-1)
            goto err;
        if (VAR_12 <= 1) {
            if (!FUNC_3(VAR_4, VAR_4, VAR_6))
                goto err;
            goto loop;
        }
    }
    VAR_10 = 1;

 err:
    FUNC_0(VAR_8);
    FUNC_9(VAR_4);
    return VAR_10;
}
