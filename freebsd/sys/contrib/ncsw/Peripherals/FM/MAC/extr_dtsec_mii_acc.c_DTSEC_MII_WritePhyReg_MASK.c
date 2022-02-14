
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
struct TYPE_2__ {int clkFreq; } ;
struct dtsec_mii_reg {struct dtsec_mii_reg* p_MiiMemMap; TYPE_1__ fmMacControllerDriver; } ;
typedef struct dtsec_mii_reg t_Dtsec ;


 int VAR_0 ;
 int FUNC_0 (struct dtsec_mii_reg*,int ) ;
 scalar_t__ FUNC_1 (struct dtsec_mii_reg*,int ,int ,scalar_t__,scalar_t__) ;

t_Error FUNC_2(t_Handle VAR_1,
                              uint8_t VAR_2,
                              uint8_t VAR_3,
                              uint16_t VAR_4)
{
    t_Dtsec *VAR_5 = (t_Dtsec *)VAR_1;
    struct dtsec_mii_reg *VAR_6;
    uint16_t VAR_7;
    t_Error VAR_8;

    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_5->p_MiiMemMap, VAR_0);

    VAR_7 = (uint16_t)(VAR_5->fmMacControllerDriver.clkFreq >> 1);
    VAR_6 = VAR_5->p_MiiMemMap;

    VAR_8 = (t_Error)FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4, VAR_7);

    return VAR_8;
}
