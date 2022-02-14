
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {TYPE_1__* profiles; } ;
typedef TYPE_2__ t_FmPcdPlcr ;
struct TYPE_6__ {TYPE_2__* p_FmPcdPlcr; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_4__ {int valid; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;

bool FUNC_1(t_Handle VAR_1, uint16_t VAR_2)
{
    t_FmPcd *VAR_3 = (t_FmPcd*)VAR_1;
    t_FmPcdPlcr *VAR_4 = VAR_3->p_FmPcdPlcr;

    FUNC_0(VAR_2 < VAR_0);

    return VAR_4->profiles[VAR_2].valid;
}
