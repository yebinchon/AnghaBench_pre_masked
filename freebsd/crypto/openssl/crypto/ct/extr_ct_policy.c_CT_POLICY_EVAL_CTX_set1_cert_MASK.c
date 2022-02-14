
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {int * cert; } ;
typedef TYPE_1__ CT_POLICY_EVAL_CTX ;


 int FUNC_0 (int *) ;

int FUNC_1(CT_POLICY_EVAL_CTX *VAR_0, X509 *VAR_1)
{
    if (!FUNC_0(VAR_1))
        return 0;
    VAR_0->cert = VAR_1;
    return 1;
}
