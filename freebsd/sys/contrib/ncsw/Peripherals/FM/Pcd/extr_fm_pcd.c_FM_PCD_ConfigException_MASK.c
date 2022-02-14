
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {scalar_t__ guestId; int exceptions; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;
typedef int e_FmPcdExceptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

t_Error FUNC_3(t_Handle VAR_6, e_FmPcdExceptions VAR_7, bool VAR_8)
{
    t_FmPcd *VAR_9 = (t_FmPcd*)VAR_6;
    uint32_t VAR_10 = 0;

    FUNC_2(VAR_9, VAR_0);

    if (VAR_9->guestId != VAR_5)
        FUNC_1(VAR_4, VAR_2, ("FM_PCD_ConfigException - guest mode!"));

    FUNC_0(VAR_10, VAR_7);
    if (VAR_10)
    {
        if (VAR_8)
            VAR_9->exceptions |= VAR_10;
        else
            VAR_9->exceptions &= ~VAR_10;
   }
    else
        FUNC_1(VAR_4, VAR_1, ("Undefined exception"));

    return VAR_3;
}
