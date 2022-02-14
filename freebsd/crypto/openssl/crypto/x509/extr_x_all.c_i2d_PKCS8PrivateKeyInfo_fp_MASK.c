
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS8_PRIV_KEY_INFO ;
typedef int FILE ;
typedef int EVP_PKEY ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(FILE *VAR_0, EVP_PKEY *VAR_1)
{
    PKCS8_PRIV_KEY_INFO *VAR_2;
    int VAR_3;
    VAR_2 = FUNC_0(VAR_1);
    if (!VAR_2)
        return 0;
    VAR_3 = FUNC_2(VAR_0, VAR_2);
    FUNC_1(VAR_2);
    return VAR_3;
}
