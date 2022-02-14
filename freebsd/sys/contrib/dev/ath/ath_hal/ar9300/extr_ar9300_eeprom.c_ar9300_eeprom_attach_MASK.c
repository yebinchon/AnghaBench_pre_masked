
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_9__ {void* op_flags; } ;
struct TYPE_11__ {int txrx_mask; int txrxgain; TYPE_1__ op_cap_flags; } ;
struct TYPE_12__ {int* mac_addr; TYPE_3__ base_eep_header; } ;
struct ath_hal_9300 {int try_dram; int try_eeprom; int try_otp; int try_nand; int try_flash; int ah_emu_eeprom; TYPE_4__ ah_eeprom; scalar_t__ calibration_data_try_address; int calibration_data_try; scalar_t__ calibration_data_source_address; int calibration_data_source; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_4__ ar9300_eeprom_t ;
struct TYPE_10__ {scalar_t__ ath_hal_skip_eeprom_read; } ;
struct TYPE_13__ {TYPE_2__ ah_config; int ah_getSpurChan; } ;
typedef int HAL_STATUS ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_8__* FUNC_1 (struct ath_hal*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal*) ;
 scalar_t__ FUNC_6 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct ath_hal*,int ,int*,int) ;
 int VAR_4 ;
 int FUNC_8 (struct ath_hal*) ;
 int FUNC_9 () ;
 size_t VAR_5 ;
 int FUNC_10 (struct ath_hal*) ;
 int FUNC_11 (struct ath_hal*) ;
 TYPE_4__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_12 (struct ath_hal*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__** VAR_12 ;
 int FUNC_13 (char*,int) ;

HAL_STATUS
FUNC_14(struct ath_hal *VAR_13)
{
    struct ath_hal_9300 *VAR_14 = FUNC_0(VAR_13);
    VAR_14->try_dram = 1;
    VAR_14->try_eeprom = 1;
    VAR_14->try_otp = 1;



    VAR_14->try_flash = 1;

    VAR_14->calibration_data_source = VAR_9;
    VAR_14->calibration_data_source_address = 0;
    VAR_14->calibration_data_try = VAR_11;
    VAR_14->calibration_data_try_address = 0;





    FUNC_11(VAR_13);





    FUNC_1(VAR_13)->ah_getSpurChan = VAR_4;
    VAR_14->ah_emu_eeprom = 1;
    if (FUNC_3(VAR_13) || FUNC_6(VAR_13) || FUNC_5(VAR_13)
        || FUNC_2(VAR_13)) {
        VAR_14->try_eeprom = 0;
    }

    if (FUNC_2(VAR_13)) {
        VAR_14->try_otp = 0;
    }

    if (!FUNC_8(VAR_13)) {
        return VAR_2;
    }
    return VAR_3;

}
