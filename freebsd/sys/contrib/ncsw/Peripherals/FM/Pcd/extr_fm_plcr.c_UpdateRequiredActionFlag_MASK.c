
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdPlcr; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* profiles; } ;
struct TYPE_4__ {int requiredActionFlag; scalar_t__ requiredAction; int valid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(t_Handle VAR_2, uint16_t VAR_3, bool VAR_4)
{
    t_FmPcd *VAR_5 = (t_FmPcd*)VAR_2;



    FUNC_0(VAR_5->p_FmPcdPlcr->profiles[VAR_3].valid);

    if (VAR_4)
        VAR_5->p_FmPcdPlcr->profiles[VAR_3].requiredActionFlag = VAR_1;
    else
    {
        VAR_5->p_FmPcdPlcr->profiles[VAR_3].requiredAction = 0;
        VAR_5->p_FmPcdPlcr->profiles[VAR_3].requiredActionFlag = VAR_0;
    }
}
