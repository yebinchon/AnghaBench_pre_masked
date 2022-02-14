
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,int *,unsigned char const*,unsigned char const*,int) ;

int FUNC_2(EVP_CIPHER_CTX *VAR_0, const EVP_CIPHER *VAR_1,
                   const unsigned char *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
    if (VAR_1 != ((void*)0))
        FUNC_0(VAR_0);
    return FUNC_1(VAR_0, VAR_1, ((void*)0), VAR_2, VAR_3, VAR_4);
}
