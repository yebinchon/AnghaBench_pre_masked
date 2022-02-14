
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int,int ,int *) ;
 int FUNC_3 (int *,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_0, SSL_CTX *VAR_1, X509 *VAR_2, int VAR_3)
{
    int VAR_4 = -1;
    EVP_PKEY *VAR_5 = FUNC_1(VAR_2);
    if (VAR_5) {






        VAR_4 = FUNC_0(VAR_5);
    }
    if (VAR_0)
        return FUNC_3(VAR_0, VAR_3, VAR_4, 0, VAR_2);
    else
        return FUNC_2(VAR_1, VAR_3, VAR_4, 0, VAR_2);
}
