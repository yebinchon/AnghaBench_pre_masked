
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdKg; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* clsPlanGrps; } ;
struct TYPE_4__ {size_t baseEntry; } ;



uint8_t FUNC_0(t_Handle VAR_0, uint8_t VAR_1)
{
    t_FmPcd *VAR_2 = (t_FmPcd*)VAR_0;

    return VAR_2->p_FmPcdKg->clsPlanGrps[VAR_1].baseEntry;
}
