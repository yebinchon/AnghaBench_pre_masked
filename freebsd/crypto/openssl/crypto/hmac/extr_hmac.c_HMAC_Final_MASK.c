
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md_ctx; int o_ctx; int md; } ;
typedef TYPE_1__ HMAC_CTX ;


 int FUNC_0 (int ,unsigned char*,unsigned int*) ;
 int FUNC_1 (int ,unsigned char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(HMAC_CTX *VAR_1, unsigned char *VAR_2, unsigned int *VAR_3)
{
    unsigned int VAR_4;
    unsigned char VAR_5[VAR_0];

    if (!VAR_1->md)
        goto err;

    if (!FUNC_0(VAR_1->md_ctx, VAR_5, &VAR_4))
        goto err;
    if (!FUNC_2(VAR_1->md_ctx, VAR_1->o_ctx))
        goto err;
    if (!FUNC_1(VAR_1->md_ctx, VAR_5, VAR_4))
        goto err;
    if (!FUNC_0(VAR_1->md_ctx, VAR_2, VAR_3))
        goto err;
    return 1;
 err:
    return 0;
}
