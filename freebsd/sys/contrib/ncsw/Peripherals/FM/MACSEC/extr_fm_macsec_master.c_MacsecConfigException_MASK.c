
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int userExceptions; struct TYPE_3__* p_FmMacsecDriverParam; } ;
typedef TYPE_1__ t_FmMacsec ;
typedef int t_Error ;
typedef int e_FmMacsecExceptions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static t_Error FUNC_3(t_Handle VAR_4, e_FmMacsecExceptions VAR_5, bool VAR_6)
{
    t_FmMacsec *VAR_7 = (t_FmMacsec*)VAR_4;
    uint32_t VAR_8 = 0;

    FUNC_2(VAR_7, VAR_0);
    FUNC_2(VAR_7->p_FmMacsecDriverParam, VAR_0);

    FUNC_0(VAR_8, VAR_5);
    if (VAR_8)
    {
        if (VAR_6)
            VAR_7->userExceptions |= VAR_8;
        else
            VAR_7->userExceptions &= ~VAR_8;
    }
    else
        FUNC_1(VAR_3, VAR_1, ("Undefined exception"));

    return VAR_2;
}
