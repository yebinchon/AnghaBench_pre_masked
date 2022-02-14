
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* p_FmPcdKg; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_6__ {TYPE_1__* clsPlanGrps; } ;
struct TYPE_5__ {int baseEntry; int sizeOfGrp; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(t_FmPcd *VAR_1, uint8_t VAR_2)
{
    uint32_t VAR_3;

    VAR_3 = (uint32_t)(VAR_1->p_FmPcdKg->clsPlanGrps[VAR_2].baseEntry / 8);
    VAR_3 |= (uint32_t)(((VAR_1->p_FmPcdKg->clsPlanGrps[VAR_2].sizeOfGrp / 8) - 1) << VAR_0);

    return VAR_3;
}
