
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_PUBKEY ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *,unsigned char**) ;

int FUNC_3(EVP_PKEY *VAR_0, unsigned char **VAR_1)
{
    X509_PUBKEY *VAR_2 = ((void*)0);
    int VAR_3;
    if (!VAR_0)
        return 0;
    if (!FUNC_1(&VAR_2, VAR_0))
        return -1;
    VAR_3 = FUNC_2(VAR_2, VAR_1);
    FUNC_0(VAR_2);
    return VAR_3;
}
