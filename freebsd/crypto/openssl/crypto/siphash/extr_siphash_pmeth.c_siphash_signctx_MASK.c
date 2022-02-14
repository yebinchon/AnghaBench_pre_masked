
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int ctx; } ;
typedef TYPE_1__ SIPHASH_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,size_t) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                            EVP_MD_CTX *VAR_3)
{
    SIPHASH_PKEY_CTX *VAR_4 = VAR_0->data;

    *VAR_2 = FUNC_1(&VAR_4->ctx);
    if (VAR_1 != ((void*)0))
        return FUNC_0(&VAR_4->ctx, VAR_1, *VAR_2);
    return 1;
}
