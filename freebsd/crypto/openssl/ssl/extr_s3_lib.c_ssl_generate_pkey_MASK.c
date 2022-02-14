
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int *) ;

EVP_PKEY *FUNC_5(EVP_PKEY *VAR_0)
{
    EVP_PKEY_CTX *VAR_1 = ((void*)0);
    EVP_PKEY *VAR_2 = ((void*)0);

    if (VAR_0 == ((void*)0))
        return ((void*)0);
    VAR_1 = FUNC_1(VAR_0, ((void*)0));
    if (VAR_1 == ((void*)0))
        goto err;
    if (FUNC_4(VAR_1) <= 0)
        goto err;
    if (FUNC_3(VAR_1, &VAR_2) <= 0) {
        FUNC_2(VAR_2);
        VAR_2 = ((void*)0);
    }

    err:
    FUNC_0(VAR_1);
    return VAR_2;
}
