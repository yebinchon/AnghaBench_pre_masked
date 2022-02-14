
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int ctx; } ;
typedef TYPE_1__ POLY1305_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned char*) ;

__attribute__((used)) static int FUNC_1(EVP_PKEY_CTX *VAR_1, unsigned char *VAR_2, size_t *VAR_3,
                            EVP_MD_CTX *VAR_4)
{
    POLY1305_PKEY_CTX *VAR_5 = VAR_1->data;

    *VAR_3 = VAR_0;
    if (VAR_2 != ((void*)0))
        FUNC_0(&VAR_5->ctx, VAR_2);
    return 1;
}
