
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pem_password_cb ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned char**,int *,int,int *,void*) ;

int FUNC_4(BIO *VAR_2, EVP_PKEY *VAR_3, int VAR_4,
                pem_password_cb *VAR_5, void *VAR_6)
{
    unsigned char *VAR_7 = ((void*)0);
    int VAR_8, VAR_9;
    VAR_8 = FUNC_3(&VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_8 < 0)
        return -1;
    VAR_9 = FUNC_0(VAR_2, VAR_7, VAR_8);
    FUNC_1(VAR_7);
    if (VAR_9 == VAR_8) {
        FUNC_2(VAR_0, VAR_1);
        return VAR_8;
    }
    return -1;
}
