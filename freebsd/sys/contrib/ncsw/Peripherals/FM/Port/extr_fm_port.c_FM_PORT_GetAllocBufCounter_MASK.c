
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {scalar_t__ portType; int port; int p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ) ;

uint32_t FUNC_4(t_Handle VAR_5, uint8_t VAR_6)
{
    t_FmPort *VAR_7 = (t_FmPort*)VAR_5;

    FUNC_2(VAR_7, VAR_0, 0);
    FUNC_1(!VAR_7->p_FmPortDriverParam, VAR_1);

    if ((VAR_7->portType != VAR_3)
            && (VAR_7->portType == VAR_4))
    {
        FUNC_0(VAR_2, VAR_1, ("Requested counter is not available for non-Rx ports"));
        return 0;
    }
    return FUNC_3(&VAR_7->port, VAR_6);
}
