
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;
struct TYPE_2__ {int clkFreq; } ;
struct dtsec_mii_reg {struct dtsec_mii_reg* p_MiiMemMap; TYPE_1__ fmMacControllerDriver; } ;
typedef struct dtsec_mii_reg t_Dtsec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ,scalar_t__,char*) ;
 int FUNC_1 (struct dtsec_mii_reg*,int ) ;
 scalar_t__ FUNC_2 (struct dtsec_mii_reg*,int ,int ,int*,int) ;

t_Error FUNC_3(t_Handle VAR_5,
                             uint8_t VAR_6,
                             uint8_t VAR_7,
                             uint16_t *VAR_8)
{
    t_Dtsec *VAR_9 = (t_Dtsec *)VAR_5;
    struct dtsec_mii_reg *VAR_10;
    uint16_t VAR_11;
    t_Error VAR_12;

    FUNC_1(VAR_9, VAR_0);
    FUNC_1(VAR_9->p_MiiMemMap, VAR_0);

    VAR_11 = (uint16_t)(VAR_9->fmMacControllerDriver.clkFreq >> 1);
    VAR_10 = VAR_9->p_MiiMemMap;

    VAR_12 = FUNC_2(VAR_10, VAR_6, VAR_7, VAR_8, VAR_11);

    if (*VAR_8 == 0xffff)
        FUNC_0(VAR_3, VAR_1,
                     ("Read wrong data (0xffff): phyAddr 0x%x, reg 0x%x",
                      VAR_6, VAR_7));
    if (VAR_12)
        FUNC_0(VAR_3, (t_Error)VAR_12, VAR_4);

    return VAR_2;
}
