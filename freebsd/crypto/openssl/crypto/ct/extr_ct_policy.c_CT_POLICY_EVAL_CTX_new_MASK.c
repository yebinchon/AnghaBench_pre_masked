
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int epoch_time_in_ms; } ;
typedef TYPE_1__ CT_POLICY_EVAL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;

CT_POLICY_EVAL_CTX *FUNC_3(void)
{
    CT_POLICY_EVAL_CTX *VAR_3 = FUNC_1(sizeof(CT_POLICY_EVAL_CTX));

    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }


    VAR_3->epoch_time_in_ms = (uint64_t)(FUNC_2(((void*)0)) + VAR_2) *
            1000;

    return VAR_3;
}
