
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_3__ ktmp; int ctx; int md; } ;
typedef TYPE_1__ HMAC_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;


 int FUNC_0 (TYPE_3__*,scalar_t__,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_0, EVP_PKEY_CTX *VAR_1)
{
    HMAC_PKEY_CTX *VAR_2, *VAR_3;


    if (!FUNC_4(VAR_0))
        return 0;
    VAR_2 = FUNC_1(VAR_1);
    VAR_3 = FUNC_1(VAR_0);
    VAR_3->md = VAR_2->md;
    if (!FUNC_2(VAR_3->ctx, VAR_2->ctx))
        goto err;
    if (VAR_2->ktmp.data) {
        if (!FUNC_0(&VAR_3->ktmp,
                                   VAR_2->ktmp.data, VAR_2->ktmp.length))
            goto err;
    }
    return 1;
err:

    FUNC_3 (VAR_0);
    return 0;
}
