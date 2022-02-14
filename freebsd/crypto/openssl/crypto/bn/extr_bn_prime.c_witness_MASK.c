
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int const*,int const*,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int const*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                   const BIGNUM *VAR_3, int VAR_4, BN_CTX *VAR_5,
                   BN_MONT_CTX *VAR_6)
{
    if (!FUNC_2(VAR_0, VAR_0, VAR_3, VAR_1, VAR_5, VAR_6))
        return -1;
    if (FUNC_1(VAR_0))
        return 0;
    if (FUNC_0(VAR_0, VAR_2) == 0)
        return 0;
    while (--VAR_4) {
        if (!FUNC_3(VAR_0, VAR_0, VAR_0, VAR_1, VAR_5))
            return -1;
        if (FUNC_1(VAR_0))
            return 1;

        if (FUNC_0(VAR_0, VAR_2) == 0)
            return 0;
    }




    FUNC_4(VAR_0);
    return 1;
}
