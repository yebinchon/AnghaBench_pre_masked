
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iv_len; } ;
struct TYPE_5__ {TYPE_2__* cipher; } ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_1__*,int ,int ,int*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(const EVP_CIPHER_CTX *VAR_2)
{
    int VAR_3, VAR_4;

    if ((FUNC_1(VAR_2->cipher) & VAR_0) != 0) {
        VAR_4 = FUNC_0((EVP_CIPHER_CTX *)VAR_2, VAR_1,
                                 0, &VAR_3);
        return (VAR_4 == 1) ? VAR_3 : -1;
    }
    return VAR_2->cipher->iv_len;
}
