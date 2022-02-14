
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pem_password_cb ;
typedef int i2d_of_void ;
struct TYPE_6__ {TYPE_1__* ameth; } ;
struct TYPE_5__ {int pem_str; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int BIO ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (int *,char*,int *,TYPE_2__*,int const*,unsigned char*,int,int *,void*) ;
 scalar_t__ VAR_0 ;

int FUNC_2(BIO *VAR_1, EVP_PKEY *VAR_2,
                                         const EVP_CIPHER *VAR_3,
                                         unsigned char *VAR_4, int VAR_5,
                                         pem_password_cb *VAR_6, void *VAR_7)
{
    char VAR_8[80];
    FUNC_0(VAR_8, 80, "%s PRIVATE KEY", VAR_2->ameth->pem_str);
    return FUNC_1((i2d_of_void *)VAR_0,
                              VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
