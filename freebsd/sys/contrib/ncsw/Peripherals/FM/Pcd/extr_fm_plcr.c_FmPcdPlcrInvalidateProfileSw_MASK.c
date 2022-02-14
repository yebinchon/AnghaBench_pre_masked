
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_1__* p_FmPcdPlcr; } ;
typedef TYPE_2__ t_FmPcd ;
struct TYPE_7__ {int valid; } ;
struct TYPE_5__ {TYPE_3__* profiles; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;

void FUNC_3(t_Handle VAR_1, uint16_t VAR_2)
{
    t_FmPcd *VAR_3 = (t_FmPcd*)VAR_1;
    uint32_t VAR_4;

    FUNC_0(VAR_3->p_FmPcdPlcr->profiles[VAR_2].valid);

    VAR_4 = FUNC_1(&VAR_3->p_FmPcdPlcr->profiles[VAR_2]);
    VAR_3->p_FmPcdPlcr->profiles[VAR_2].valid = VAR_0;
    FUNC_2(&VAR_3->p_FmPcdPlcr->profiles[VAR_2], VAR_4);
}
