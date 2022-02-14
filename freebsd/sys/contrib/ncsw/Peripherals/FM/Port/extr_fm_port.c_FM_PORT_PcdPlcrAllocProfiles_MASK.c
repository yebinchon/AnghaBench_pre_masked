
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int lock; int hardwarePortId; int h_FmPcd; int h_Spinlock; int h_Fm; } ;
typedef TYPE_1__ t_FmPort ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_8 (int ,int *) ;

t_Error FUNC_9(t_Handle VAR_5, uint16_t VAR_6)
{
    t_FmPort *VAR_7 = (t_FmPort*)VAR_5;
    t_Error VAR_8 = VAR_1;

    VAR_7->h_FmPcd = FUNC_3(VAR_7->h_Fm);
    FUNC_0(VAR_7->h_FmPcd);

    if (!FUNC_8(VAR_7->h_Spinlock, &VAR_7->lock))
    {
        FUNC_1(VAR_4, ("FM Port Try Lock - BUSY"));
        return FUNC_2(VAR_0);
    }

    if (VAR_6)
    {
        VAR_8 = FUNC_4(VAR_7->h_FmPcd,
                                     VAR_7->hardwarePortId, VAR_6);
        if (VAR_8)
            FUNC_7(VAR_2, VAR_8, VAR_3);
    }

    FUNC_5(VAR_7->h_FmPcd, VAR_5, VAR_7->hardwarePortId);

    FUNC_6(VAR_7->lock);

    return VAR_1;
}
