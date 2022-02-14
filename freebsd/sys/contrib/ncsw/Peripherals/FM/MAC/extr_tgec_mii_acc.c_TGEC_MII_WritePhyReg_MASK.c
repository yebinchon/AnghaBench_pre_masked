
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int clkFreq; } ;
struct TYPE_6__ {int mdio_data; int mdio_cfg_status; int mdio_regaddr; int mdio_command; TYPE_1__ fmMacControllerDriver; struct TYPE_6__* p_MiiMemMap; } ;
typedef TYPE_2__ t_TgecMiiAccessMemMap ;
typedef TYPE_2__ t_Tgec ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

t_Error FUNC_5(t_Handle VAR_6,
                             uint8_t VAR_7,
                             uint8_t VAR_8,
                             uint16_t VAR_9)
{
    t_Tgec *VAR_10 = (t_Tgec *)VAR_6;
    t_TgecMiiAccessMemMap *VAR_11;
    uint32_t VAR_12;

    FUNC_2(VAR_10, VAR_0);
    FUNC_2(VAR_10->p_MiiMemMap, VAR_0);

    VAR_11 = VAR_10->p_MiiMemMap;


    VAR_12 = FUNC_1(VAR_11->mdio_cfg_status);
    VAR_12 &= ~VAR_3;

    VAR_12 |=((((VAR_10->fmMacControllerDriver.clkFreq*10)/2)/25) << VAR_4);
    FUNC_3(VAR_11->mdio_cfg_status, VAR_12);

    while ((FUNC_1(VAR_11->mdio_cfg_status)) & VAR_5)
        FUNC_4 (1);

    FUNC_3(VAR_11->mdio_command, VAR_7);

    FUNC_3(VAR_11->mdio_regaddr, VAR_8);

    FUNC_0();

    while ((FUNC_1(VAR_11->mdio_cfg_status)) & VAR_5)
        FUNC_4 (1);

    FUNC_3(VAR_11->mdio_data, VAR_9);

    FUNC_0();

    while ((FUNC_1(VAR_11->mdio_data)) & VAR_2)
        FUNC_4 (1);

    return VAR_1;
}
