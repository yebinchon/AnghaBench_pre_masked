
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cipher; } ;
struct TYPE_5__ {int (* do_cipher ) (TYPE_2__*,unsigned char*,unsigned char const*,unsigned int) ;} ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_2__*,unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_1(EVP_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
               const unsigned char *VAR_2, unsigned int VAR_3)
{
    return VAR_0->cipher->do_cipher(VAR_0, VAR_1, VAR_2, VAR_3);
}
