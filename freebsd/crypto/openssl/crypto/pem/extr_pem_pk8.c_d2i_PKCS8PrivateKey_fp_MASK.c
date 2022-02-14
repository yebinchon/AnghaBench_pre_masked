
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int FILE ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,int **,int *,void*) ;

EVP_PKEY *FUNC_4(FILE *VAR_3, EVP_PKEY **VAR_4, pem_password_cb *VAR_5,
                                 void *VAR_6)
{
    BIO *VAR_7;
    EVP_PKEY *VAR_8;

    if ((VAR_7 = FUNC_1(VAR_3, VAR_0)) == ((void*)0)) {
        FUNC_2(VAR_2, VAR_1);
        return ((void*)0);
    }
    VAR_8 = FUNC_3(VAR_7, VAR_4, VAR_5, VAR_6);
    FUNC_0(VAR_7);
    return VAR_8;
}
