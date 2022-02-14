
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int FILE ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int,int,int const*,char*,int,int *,void*) ;

__attribute__((used)) static int FUNC_4(FILE *VAR_3, EVP_PKEY *VAR_4, int VAR_5, int VAR_6,
                         const EVP_CIPHER *VAR_7, char *VAR_8, int VAR_9,
                         pem_password_cb *VAR_10, void *VAR_11)
{
    BIO *VAR_12;
    int VAR_13;

    if ((VAR_12 = FUNC_1(VAR_3, VAR_0)) == ((void*)0)) {
        FUNC_2(VAR_2, VAR_1);
        return 0;
    }
    VAR_13 = FUNC_3(VAR_12, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
    FUNC_0(VAR_12);
    return VAR_13;
}
