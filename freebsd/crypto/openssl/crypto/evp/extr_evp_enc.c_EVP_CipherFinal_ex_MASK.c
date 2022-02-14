
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ encrypt; } ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_1__*,unsigned char*,int*) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int*) ;

int FUNC_2(EVP_CIPHER_CTX *VAR_0, unsigned char *VAR_1, int *VAR_2)
{
    if (VAR_0->encrypt)
        return FUNC_1(VAR_0, VAR_1, VAR_2);
    else
        return FUNC_0(VAR_0, VAR_1, VAR_2);
}
