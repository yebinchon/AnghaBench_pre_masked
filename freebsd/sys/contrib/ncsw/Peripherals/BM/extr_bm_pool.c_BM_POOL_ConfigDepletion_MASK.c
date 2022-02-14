
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_5__ {int depletionThresholds; struct TYPE_5__* p_BmPoolDriverParams; struct TYPE_5__* f_Depletion; int useDepletion; } ;
typedef TYPE_1__ t_BmPool ;
typedef TYPE_1__ t_BmDepletionCallback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;

t_Error FUNC_2(t_Handle VAR_3, t_BmDepletionCallback *VAR_4, uint32_t *VAR_5)
{
    t_BmPool *VAR_6 = (t_BmPool *)VAR_3;

    FUNC_0(VAR_6, VAR_0);
    FUNC_0(VAR_6->p_BmPoolDriverParams, VAR_0);
    FUNC_0(VAR_4, VAR_0);

    VAR_6->p_BmPoolDriverParams->useDepletion = VAR_2;
    VAR_6->f_Depletion = VAR_4;
    FUNC_1(&VAR_6->p_BmPoolDriverParams->depletionThresholds,
           VAR_5,
           sizeof(VAR_6->p_BmPoolDriverParams->depletionThresholds));

    return VAR_1;
}
