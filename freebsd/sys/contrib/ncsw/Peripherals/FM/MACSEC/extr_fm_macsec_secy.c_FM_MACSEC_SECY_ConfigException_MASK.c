
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int exceptions; struct TYPE_3__* p_FmMacsecSecYDriverParam; } ;
typedef TYPE_1__ t_FmMacsecSecY ;
typedef int t_Error ;
typedef int e_FmMacsecSecYExceptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

t_Error FUNC_3(t_Handle VAR_5, e_FmMacsecSecYExceptions VAR_6, bool VAR_7)
{
    t_FmMacsecSecY *VAR_8 = (t_FmMacsecSecY *)VAR_5;
    uint32_t VAR_9 = 0;

    FUNC_2(VAR_8, VAR_0);
    FUNC_2(VAR_8->p_FmMacsecSecYDriverParam, VAR_1);

    FUNC_0(VAR_9, VAR_6);
    if (VAR_9)
    {
        if (VAR_7)
            VAR_8->exceptions |= VAR_9;
        else
            VAR_8->exceptions &= ~VAR_9;
    }
    else
        FUNC_1(VAR_4, VAR_2, ("Undefined exception"));

    return VAR_3;
}
