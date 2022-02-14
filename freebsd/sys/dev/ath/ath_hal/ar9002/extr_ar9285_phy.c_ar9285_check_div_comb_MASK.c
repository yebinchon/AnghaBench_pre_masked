
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct ath_hal {int dummy; } ;
struct TYPE_8__ {TYPE_3__* ah_eeprom; } ;
struct TYPE_6__ {int version; int antdiv_ctl1; } ;
struct TYPE_5__ {TYPE_2__ modalHeader; } ;
struct TYPE_7__ {TYPE_1__ ee_base; } ;
typedef TYPE_2__ MODAL_EEP4K_HEADER ;
typedef TYPE_3__ HAL_EEPROM_v4k ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_2)
{
 uint8_t VAR_3;
 HAL_EEPROM_v4k *VAR_4 = FUNC_0(VAR_2)->ah_eeprom;
        const MODAL_EEP4K_HEADER *VAR_5 = &VAR_4->ee_base.modalHeader;






 if (! FUNC_1(VAR_2))
  return VAR_0;

 if (VAR_5->version < 3)
  return VAR_0;

 VAR_3 = VAR_5->antdiv_ctl1;
 if ((VAR_3 & 0x1) && ((VAR_3 >> 3) & 0x1))
  return VAR_1;

 return VAR_0;
}
