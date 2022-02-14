
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {scalar_t__ guestId; int prsMaxParseCycleLimit; struct TYPE_3__* p_FmPcdDriverParam; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

t_Error FUNC_2(t_Handle VAR_5,uint16_t VAR_6)
{
    t_FmPcd *VAR_7 = (t_FmPcd*)VAR_5;

    FUNC_1(VAR_7, VAR_0);
    FUNC_1(VAR_7->p_FmPcdDriverParam, VAR_0);

    if(VAR_7->guestId != VAR_4)
        FUNC_0(VAR_3, VAR_1, ("FM_PCD_ConfigPrsMaxCycleLimit - guest mode!"));

    VAR_7->p_FmPcdDriverParam->prsMaxParseCycleLimit = VAR_6;

    return VAR_2;
}
