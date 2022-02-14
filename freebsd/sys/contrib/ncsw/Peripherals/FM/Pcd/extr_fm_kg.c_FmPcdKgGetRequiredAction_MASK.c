
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdKg; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* schemes; } ;
struct TYPE_4__ {int requiredAction; int valid; } ;


 int FUNC_0 (int ) ;

uint32_t FUNC_1(t_Handle VAR_0, uint8_t VAR_1)
{
    t_FmPcd *VAR_2 = (t_FmPcd*)VAR_0;
    FUNC_0(VAR_2->p_FmPcdKg->schemes[VAR_1].valid);

    return VAR_2->p_FmPcdKg->schemes[VAR_1].requiredAction;
}
