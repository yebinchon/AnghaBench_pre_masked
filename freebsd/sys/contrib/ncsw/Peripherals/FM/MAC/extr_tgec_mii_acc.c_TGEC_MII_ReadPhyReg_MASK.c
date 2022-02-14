
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {int clkFreq; } ;
struct TYPE_6__ {int mdio_cfg_status; int mdio_data; int mdio_command; int mdio_regaddr; TYPE_1__ fmMacControllerDriver; struct TYPE_6__* p_MiiMemMap; } ;
typedef TYPE_2__ t_TgecMiiAccessMemMap ;
typedef TYPE_2__ t_Tgec ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

t_Error FUNC_6(t_Handle VAR_10,
                            uint8_t VAR_11,
                            uint8_t VAR_12,
                            uint16_t *VAR_13)
{
    t_Tgec *VAR_14 = (t_Tgec *)VAR_10;
    t_TgecMiiAccessMemMap *VAR_15;
    uint32_t VAR_16;

    FUNC_3(VAR_14, VAR_0);
    FUNC_3(VAR_14->p_MiiMemMap, VAR_0);

    VAR_15 = VAR_14->p_MiiMemMap;


    VAR_16 = FUNC_1(VAR_15->mdio_cfg_status);
    VAR_16 &= ~VAR_4;

    VAR_16 |=((((VAR_14->fmMacControllerDriver.clkFreq*10)/2)/25) << VAR_5);
    FUNC_4(VAR_15->mdio_cfg_status, VAR_16);

    while ((FUNC_1(VAR_15->mdio_cfg_status)) & VAR_7)
        FUNC_5 (1);

    FUNC_4(VAR_15->mdio_command, VAR_11);

    FUNC_4(VAR_15->mdio_regaddr, VAR_12);

    FUNC_0();

    while ((FUNC_1(VAR_15->mdio_cfg_status)) & VAR_7)
        FUNC_5 (1);

    FUNC_4(VAR_15->mdio_command, (uint32_t)(VAR_11 | VAR_6));

    FUNC_0();

    while ((FUNC_1(VAR_15->mdio_data)) & VAR_3)
        FUNC_5 (1);

    *VAR_13 = (uint16_t)FUNC_1(VAR_15->mdio_data);

    VAR_16 = FUNC_1(VAR_15->mdio_cfg_status);

    if (VAR_16 & VAR_8)
        FUNC_2(VAR_9, VAR_1,
                     ("Read Error: phyAddr 0x%x, dev 0x%x, reg 0x%x, cfgStatusReg 0x%x",
                      ((VAR_11 & 0xe0)>>5), (VAR_11 & 0x1f), VAR_12, VAR_16));

    return VAR_2;
}
