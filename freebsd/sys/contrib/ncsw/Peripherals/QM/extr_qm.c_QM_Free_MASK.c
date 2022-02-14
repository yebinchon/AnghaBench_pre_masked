
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ guestId; scalar_t__ errIrq; struct TYPE_5__* p_QmDriverParams; int moduleName; scalar_t__ lock; } ;
typedef TYPE_1__ t_Qm ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

t_Error FUNC_7(t_Handle VAR_4)
{
    t_Qm *VAR_5 = (t_Qm *)VAR_4;

    FUNC_1(VAR_5, VAR_0);

    if (VAR_5->lock)
        FUNC_5(VAR_5->lock);

    if (VAR_5->guestId == VAR_2)
    {
        FUNC_6(VAR_5->moduleName);
        if (VAR_5->errIrq != VAR_3)
        {
            FUNC_2(VAR_5->errIrq);
            FUNC_4(VAR_5->errIrq);
        }
    }
    FUNC_0(VAR_5);

    if (VAR_5->p_QmDriverParams)
        FUNC_3(VAR_5->p_QmDriverParams);

    FUNC_3(VAR_5);

    return VAR_1;
}
