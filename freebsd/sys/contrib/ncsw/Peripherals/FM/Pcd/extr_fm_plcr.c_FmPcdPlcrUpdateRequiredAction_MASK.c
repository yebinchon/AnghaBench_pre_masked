
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdPlcr; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* profiles; } ;
struct TYPE_4__ {int requiredAction; int valid; } ;


 int FUNC_0 (int ) ;

void FUNC_1(t_Handle VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
    t_FmPcd *VAR_3 = (t_FmPcd*)VAR_0;



    FUNC_0(VAR_3->p_FmPcdPlcr->profiles[VAR_1].valid);

    VAR_3->p_FmPcdPlcr->profiles[VAR_1].requiredAction |= VAR_2;
}
