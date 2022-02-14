
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int ctx; } ;
typedef TYPE_1__ HMAC_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_2(EVP_MD_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
    HMAC_PKEY_CTX *VAR_3 = FUNC_0(VAR_0)->data;
    if (!FUNC_1(VAR_3->ctx, VAR_1, VAR_2))
        return 0;
    return 1;
}
