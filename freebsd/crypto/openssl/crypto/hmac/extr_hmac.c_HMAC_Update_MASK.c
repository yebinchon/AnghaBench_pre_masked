
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md_ctx; int md; } ;
typedef TYPE_1__ HMAC_CTX ;


 int FUNC_0 (int ,unsigned char const*,size_t) ;

int FUNC_1(HMAC_CTX *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    if (!VAR_0->md)
        return 0;
    return FUNC_0(VAR_0->md_ctx, VAR_1, VAR_2);
}
