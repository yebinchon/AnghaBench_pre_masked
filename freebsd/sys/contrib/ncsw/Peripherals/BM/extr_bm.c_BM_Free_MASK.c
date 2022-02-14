
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_4__ {scalar_t__ guestId; scalar_t__ errIrq; struct TYPE_4__* p_BmDriverParams; int moduleName; } ;
typedef TYPE_1__ t_Bm ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

t_Error FUNC_6(t_Handle VAR_4)
{
    t_Bm *VAR_5 = (t_Bm *)VAR_4;

    if (!VAR_5)
       return FUNC_0(VAR_0);

    if (VAR_5->guestId == VAR_2)
    {
        FUNC_5(VAR_5->moduleName);
        if (VAR_5->errIrq != VAR_3)
        {
            FUNC_2(VAR_5->errIrq);
            FUNC_4(VAR_5->errIrq);
        }
    }
    FUNC_1(VAR_5);

    if(VAR_5->p_BmDriverParams)
        FUNC_3(VAR_5->p_BmDriverParams);

    FUNC_3(VAR_5);
    return VAR_1;
}
