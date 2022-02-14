
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ guestId; TYPE_1__* p_FmPcdKg; } ;
typedef TYPE_2__ t_FmPcd ;
typedef scalar_t__ t_Error ;
struct TYPE_6__ {scalar_t__ h_HwSpinlock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;

t_Error FUNC_5(t_FmPcd *VAR_4)
{
    t_Error VAR_5 = VAR_1;

    VAR_4->p_FmPcdKg->h_HwSpinlock = FUNC_4();
    if (!VAR_4->p_FmPcdKg->h_HwSpinlock)
        FUNC_2(VAR_2, VAR_0, ("FM KG HW spinlock"));

    if (VAR_4->guestId == VAR_3)
        VAR_5 = FUNC_1(VAR_4);
    else
        VAR_5 = FUNC_0(VAR_4);

    if (VAR_5 != VAR_1)
    {
        if (VAR_4->p_FmPcdKg->h_HwSpinlock)
            FUNC_3(VAR_4->p_FmPcdKg->h_HwSpinlock);
    }

    return VAR_5;
}
