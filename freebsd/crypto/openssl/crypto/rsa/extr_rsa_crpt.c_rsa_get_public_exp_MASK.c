
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int const*,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static BIGNUM *FUNC_7(const BIGNUM *VAR_0, const BIGNUM *VAR_1,
                                  const BIGNUM *VAR_2, BN_CTX *VAR_3)
{
    BIGNUM *VAR_4 = ((void*)0), *VAR_5, *VAR_6, *VAR_7;

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
        return ((void*)0);

    FUNC_2(VAR_3);
    VAR_5 = FUNC_1(VAR_3);
    VAR_6 = FUNC_1(VAR_3);
    VAR_7 = FUNC_1(VAR_3);
    if (VAR_7 == ((void*)0))
        goto err;

    if (!FUNC_5(VAR_6, VAR_1, FUNC_6()))
        goto err;
    if (!FUNC_5(VAR_7, VAR_2, FUNC_6()))
        goto err;
    if (!FUNC_4(VAR_5, VAR_6, VAR_7, VAR_3))
        goto err;

    VAR_4 = FUNC_3(((void*)0), VAR_0, VAR_5, VAR_3);
 err:
    FUNC_0(VAR_3);
    return VAR_4;
}
