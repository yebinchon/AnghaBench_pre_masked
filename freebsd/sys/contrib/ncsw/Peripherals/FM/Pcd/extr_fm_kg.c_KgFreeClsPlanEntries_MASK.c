
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdKg; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* clsPlanBlocksMng; } ;
struct TYPE_4__ {int allocated; size_t ownerId; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;

void FUNC_2(t_Handle VAR_2, uint16_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
    t_FmPcd *VAR_6 = (t_FmPcd*)VAR_2;
    uint8_t VAR_7;
    uint8_t VAR_8, VAR_9;
    VAR_7 = (uint8_t)(VAR_3/VAR_0);
    FUNC_0(!(VAR_5%VAR_0));

    VAR_9 = (uint8_t)(VAR_5/VAR_0);
    for (VAR_8=VAR_9;VAR_8<VAR_9+VAR_7;VAR_8++)
    {
        FUNC_0(VAR_6->p_FmPcdKg->clsPlanBlocksMng[VAR_8].allocated);
        FUNC_0(VAR_4 == VAR_6->p_FmPcdKg->clsPlanBlocksMng[VAR_8].ownerId);
        VAR_6->p_FmPcdKg->clsPlanBlocksMng[VAR_8].allocated = VAR_1;
        VAR_6->p_FmPcdKg->clsPlanBlocksMng[VAR_8].ownerId = 0;
    }
}
