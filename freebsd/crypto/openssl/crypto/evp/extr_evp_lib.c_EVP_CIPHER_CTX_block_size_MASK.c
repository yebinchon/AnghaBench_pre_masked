
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cipher; } ;
struct TYPE_4__ {int block_size; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;



int FUNC_0(const EVP_CIPHER_CTX *VAR_0)
{
    return VAR_0->cipher->block_size;
}
