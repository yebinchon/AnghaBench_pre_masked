
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nodes; scalar_t__ anyPolicy; } ;
typedef TYPE_1__ X509_POLICY_LEVEL ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1(X509_POLICY_LEVEL *VAR_0)
{
    int VAR_1;
    if (!VAR_0)
        return 0;
    if (VAR_0->anyPolicy)
        VAR_1 = 1;
    else
        VAR_1 = 0;
    if (VAR_0->nodes)
        VAR_1 += FUNC_0(VAR_0->nodes);
    return VAR_1;
}
