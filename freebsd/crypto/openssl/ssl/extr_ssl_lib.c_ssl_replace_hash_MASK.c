
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 scalar_t__ FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int **) ;

EVP_MD_CTX *FUNC_4(EVP_MD_CTX **VAR_0, const EVP_MD *VAR_1)
{
    FUNC_3(VAR_0);
    *VAR_0 = FUNC_2();
    if (*VAR_0 == ((void*)0) || (VAR_1 && FUNC_0(*VAR_0, VAR_1, ((void*)0)) <= 0)) {
        FUNC_1(*VAR_0);
        *VAR_0 = ((void*)0);
        return ((void*)0);
    }
    return *VAR_0;
}
