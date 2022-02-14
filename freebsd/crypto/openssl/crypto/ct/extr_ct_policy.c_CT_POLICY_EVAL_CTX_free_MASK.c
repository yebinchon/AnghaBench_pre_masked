
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int issuer; int cert; } ;
typedef TYPE_1__ CT_POLICY_EVAL_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(CT_POLICY_EVAL_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    FUNC_1(VAR_0->cert);
    FUNC_1(VAR_0->issuer);
    FUNC_0(VAR_0);
}
