
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int ia_rows; } ;
struct ath_hal_9300 {int ah_wa_reg_val; TYPE_2__ ah_ini_pcie_serdes_low_power; TYPE_2__ ah_ini_pcie_serdes; } ;
struct TYPE_4__ {int ath_hal_war70c; int ath_hal_pcie_power_save_enable; int ath_hal_pcie_waen; scalar_t__ ath_hal_pcie_ser_des_write; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
struct TYPE_6__ {scalar_t__ ah_ispcie; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_3__* FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (struct ath_hal*,int,int ) ;
 int FUNC_6 (struct ath_hal*,int,int) ;

void
FUNC_7(struct ath_hal *VAR_4, int VAR_5, int VAR_6)
{
    struct ath_hal_9300 *VAR_7 = FUNC_0(VAR_4);
    int VAR_8;

    if (FUNC_1(VAR_4)->ah_ispcie != VAR_0) {
        return;
    }





    if (FUNC_3(VAR_4)) {
        u_int32_t VAR_9 = VAR_4->ah_config.ath_hal_war70c;
        if ((VAR_9 & 0xff000000) == 0x17000000) {
            VAR_9 &= 0x00ffffff;
            VAR_9 |= 0x27000000;
            FUNC_6(VAR_4, 0x570c, VAR_9);
        }
    }


    if (VAR_4->ah_config.ath_hal_pcie_power_save_enable == 2) {
        return;
    }


    if (!VAR_5) {

        FUNC_5(VAR_4,
            FUNC_2(VAR_4, VAR_1), VAR_2);





        if (VAR_4->ah_config.ath_hal_pcie_waen) {
            FUNC_6(VAR_4,
                FUNC_2(VAR_4, VAR_3),
                VAR_4->ah_config.ath_hal_pcie_waen);
        } else {

            FUNC_6(VAR_4, FUNC_2(VAR_4, VAR_3), VAR_7->ah_wa_reg_val);
        }
    }


    if (VAR_4->ah_config.ath_hal_pcie_ser_des_write) {
        if (VAR_6) {
            for (VAR_8 = 0; VAR_8 < VAR_7->ah_ini_pcie_serdes.ia_rows; VAR_8++) {
                FUNC_6(VAR_4,
                    FUNC_4(&VAR_7->ah_ini_pcie_serdes, VAR_8, 0),
                    FUNC_4(&VAR_7->ah_ini_pcie_serdes, VAR_8, 1));
            }
        } else {
            for (VAR_8 = 0; VAR_8 < VAR_7->ah_ini_pcie_serdes_low_power.ia_rows; VAR_8++) {
                FUNC_6(VAR_4,
                    FUNC_4(&VAR_7->ah_ini_pcie_serdes_low_power, VAR_8, 0),
                    FUNC_4(&VAR_7->ah_ini_pcie_serdes_low_power, VAR_8, 1));
            }
        }
    }

}
