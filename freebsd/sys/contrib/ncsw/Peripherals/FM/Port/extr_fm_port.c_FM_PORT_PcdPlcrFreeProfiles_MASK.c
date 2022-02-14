
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int lock; int hardwarePortId; int h_FmPcd; int h_Spinlock; } ;
typedef TYPE_1__ t_FmPort ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int *) ;

t_Error FUNC_6(t_Handle VAR_5)
{
    t_FmPort *VAR_6 = (t_FmPort*)VAR_5;
    t_Error VAR_7 = VAR_1;

    if (!FUNC_5(VAR_6->h_Spinlock, &VAR_6->lock))
    {
        FUNC_0(VAR_4, ("FM Port Try Lock - BUSY"));
        return FUNC_1(VAR_0);
    }

    VAR_7 = FUNC_2(VAR_6->h_FmPcd, VAR_6->hardwarePortId);

    FUNC_3(VAR_6->lock);

    if (VAR_7)
        FUNC_4(VAR_2, VAR_7, VAR_3);

    return VAR_1;
}
