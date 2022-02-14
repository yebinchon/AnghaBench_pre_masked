
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; scalar_t__ key_length; int * md; int md_ctx; int o_ctx; int i_ctx; } ;
typedef TYPE_1__ HMAC_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(HMAC_CTX *VAR_0)
{
    FUNC_0(VAR_0->i_ctx);
    FUNC_0(VAR_0->o_ctx);
    FUNC_0(VAR_0->md_ctx);
    VAR_0->md = ((void*)0);
    VAR_0->key_length = 0;
    FUNC_1(VAR_0->key, sizeof(VAR_0->key));
}
