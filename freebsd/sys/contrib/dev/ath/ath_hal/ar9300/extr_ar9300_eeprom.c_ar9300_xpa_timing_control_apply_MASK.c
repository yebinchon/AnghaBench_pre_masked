
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {int tx_frame_to_xpa_on; } ;
struct TYPE_8__ {int tx_frame_to_xpa_on; } ;
struct TYPE_7__ {int feature_enable; } ;
struct TYPE_9__ {TYPE_1__ modal_header_5g; TYPE_3__ modal_header_2g; TYPE_2__ base_eep_header; } ;
typedef TYPE_4__ ar9300_eeprom_t ;
struct TYPE_10__ {TYPE_4__ ah_eeprom; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_5__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (struct ath_hal*,int ,int ,int ) ;

HAL_BOOL FUNC_6(struct ath_hal *VAR_4, HAL_BOOL VAR_5)
{
    u_int8_t VAR_6;
    ar9300_eeprom_t *VAR_7 = &FUNC_0(VAR_4)->ah_eeprom;
    if ((VAR_7->base_eep_header.feature_enable & 0x80) >> 7) {
  if (FUNC_3(VAR_4) || FUNC_1(VAR_4) || FUNC_4(VAR_4) || FUNC_2(VAR_4)) {
   if (VAR_5) {
                VAR_6 = VAR_7->modal_header_2g.tx_frame_to_xpa_on;
                FUNC_5(VAR_4,
      VAR_1, VAR_3,
      VAR_6);
   } else {
                VAR_6 = VAR_7->modal_header_5g.tx_frame_to_xpa_on;
                FUNC_5(VAR_4,
      VAR_1, VAR_2,
      VAR_6);
   }
  }
 }
    return VAR_0;
}
