
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int numOfSharedProfiles; struct TYPE_3__* p_FmPcdPlcr; struct TYPE_3__* p_FmPcdDriverParam; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

t_Error FUNC_1(t_Handle VAR_2, uint16_t VAR_3)
{
   t_FmPcd *VAR_4 = (t_FmPcd*)VAR_2;

    FUNC_0(VAR_4, VAR_0);
    FUNC_0(VAR_4->p_FmPcdDriverParam, VAR_0);
    FUNC_0(VAR_4->p_FmPcdPlcr, VAR_0);

    VAR_4->p_FmPcdPlcr->numOfSharedProfiles = VAR_3;

    return VAR_1;
}
