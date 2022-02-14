
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int ctx; } ;
typedef TYPE_1__ HMAC_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned char*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                        EVP_MD_CTX *VAR_3)
{
    unsigned int VAR_4;
    HMAC_PKEY_CTX *VAR_5 = VAR_0->data;
    int VAR_6 = FUNC_0(VAR_3);

    if (VAR_6 < 0)
        return 0;
    *VAR_2 = VAR_6;
    if (!VAR_1)
        return 1;

    if (!FUNC_1(VAR_5->ctx, VAR_1, &VAR_4))
        return 0;
    *VAR_2 = (size_t)VAR_4;
    return 1;
}
