
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {TYPE_1__* p_FmMacsecRegs; } ;
typedef TYPE_2__ t_FmMacsec ;
typedef int t_Error ;
struct TYPE_4__ {int cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int) ;

t_Error FUNC_4(t_Handle VAR_5, bool VAR_6)
{
    t_FmMacsec *VAR_7 = (t_FmMacsec*)VAR_5;
    uint32_t VAR_8 = 0;

    FUNC_2(VAR_7, VAR_1);

    VAR_8 = FUNC_0(VAR_7->p_FmMacsecRegs->cfg);
    if (VAR_6 && (VAR_8 & VAR_0))
        FUNC_1(VAR_4, VAR_2, ("MACSEC already in point-to-point mode"));

    if (VAR_6)
        VAR_8 |= VAR_0;
    else
        VAR_8 &= ~VAR_0;
    FUNC_3(VAR_7->p_FmMacsecRegs->cfg, VAR_8);

    return VAR_3;
}
