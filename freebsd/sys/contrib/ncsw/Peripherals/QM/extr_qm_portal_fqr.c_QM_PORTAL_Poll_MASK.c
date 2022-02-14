
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int (* f_LoopDequeueRingCB ) (scalar_t__) ;int p_LowQmPortal; } ;
typedef TYPE_1__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
typedef scalar_t__ e_QmPortalPollSource ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

t_Error FUNC_7(t_Handle VAR_5, e_QmPortalPollSource VAR_6)
{
    t_QmPortal *VAR_7 = (t_QmPortal *)VAR_5;

    FUNC_3(VAR_7, VAR_0);

    FUNC_1(VAR_7);

    if ((VAR_6 == VAR_3) ||
        (VAR_6 == VAR_2))
    {
        uint32_t VAR_8 = FUNC_5(VAR_7->p_LowQmPortal);
        uint32_t VAR_9 = FUNC_0(VAR_7, VAR_8);
        if (VAR_9)
            FUNC_4(VAR_7->p_LowQmPortal, VAR_9);
    }
    if ((VAR_6 == VAR_4) ||
        (VAR_6 == VAR_2))
        VAR_7->f_LoopDequeueRingCB((t_Handle)VAR_7);

    FUNC_2(VAR_7);

    return VAR_1;
}
