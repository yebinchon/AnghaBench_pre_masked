
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_19__ {int numChannels; int xpd_mask; TYPE_1__* pDataPerChannel; } ;
struct TYPE_18__ {scalar_t__ ee_version; int ee_eepMap; int ee_eepMap2PowerCalStart; int * ee_xgain; TYPE_2__* ee_rawDataset2413; scalar_t__ ee_Gmode; scalar_t__ ee_Bmode; scalar_t__ ee_Amode; } ;
struct TYPE_17__ {int xpd_mask; } ;
struct TYPE_16__ {int numPdGains; } ;
typedef TYPE_2__ RAW_DATA_STRUCT_2413 ;
typedef TYPE_3__ HAL_EEPROM ;
typedef int HAL_BOOL ;
typedef TYPE_4__ EEPROM_DATA_STRUCT_2413 ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (struct ath_hal*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (struct ath_hal*,TYPE_3__*,TYPE_4__*,int,int ,size_t) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static HAL_BOOL
FUNC_7(struct ath_hal *VAR_9, HAL_EEPROM *VAR_10)
{

 static const uint16_t VAR_11[] = { 4, 6, 9, 12 };
 EEPROM_DATA_STRUCT_2413 *VAR_12 = VAR_1;
 RAW_DATA_STRUCT_2413 *VAR_13;
 int VAR_14;
 uint32_t VAR_15;
 HAL_BOOL VAR_16 = VAR_0;

 FUNC_0(VAR_10->ee_version >= VAR_3);
 FUNC_0(VAR_10->ee_eepMap == 2);

 VAR_12 = FUNC_6(sizeof(EEPROM_DATA_STRUCT_2413));
 if (VAR_12 == VAR_1)
  goto exit;

 VAR_15 = VAR_10->ee_eepMap2PowerCalStart;
 if (VAR_10->ee_Amode) {
  FUNC_1(VAR_12, sizeof(EEPROM_DATA_STRUCT_2413));
  VAR_12->xpd_mask = VAR_10->ee_xgain[VAR_6];
  if (!FUNC_3(VAR_9, VAR_10, VAR_12, VAR_15,
   VAR_4, VAR_6)) {
   goto exit;
  }
  VAR_13 = &VAR_10->ee_rawDataset2413[VAR_6];
  VAR_13->xpd_mask = VAR_10->ee_xgain[VAR_6];
  FUNC_4(VAR_13, VAR_12);
  if (!FUNC_2(VAR_9, VAR_12, VAR_13)) {
   goto exit;
  }

  VAR_14 = VAR_11[
   VAR_12->pDataPerChannel[0].numPdGains - 1];
  VAR_15 += VAR_12->numChannels * VAR_14 + 5;
 }
 if (VAR_10->ee_Bmode) {
  FUNC_1(VAR_12, sizeof(EEPROM_DATA_STRUCT_2413));
  VAR_12->xpd_mask = VAR_10->ee_xgain[VAR_7];
  if (!FUNC_3(VAR_9, VAR_10, VAR_12, VAR_15,
   VAR_5 , VAR_7)) {
   goto exit;
  }
  VAR_13 = &VAR_10->ee_rawDataset2413[VAR_7];
  VAR_13->xpd_mask = VAR_10->ee_xgain[VAR_7];
  FUNC_4(VAR_13, VAR_12);
  if (!FUNC_2(VAR_9, VAR_12, VAR_13)) {
   goto exit;
  }

  VAR_14 = VAR_11[
   VAR_12->pDataPerChannel[0].numPdGains - 1];
  VAR_15 += VAR_12->numChannels * VAR_14 + 2;
 }
 if (VAR_10->ee_Gmode) {
  FUNC_1(VAR_12, sizeof(EEPROM_DATA_STRUCT_2413));
  VAR_12->xpd_mask = VAR_10->ee_xgain[VAR_8];
  if (!FUNC_3(VAR_9, VAR_10, VAR_12, VAR_15,
   VAR_5, VAR_8)) {
   goto exit;
  }
  VAR_13 = &VAR_10->ee_rawDataset2413[VAR_8];
  VAR_13->xpd_mask = VAR_10->ee_xgain[VAR_8];
  FUNC_4(VAR_13, VAR_12);
  if (!FUNC_2(VAR_9, VAR_12, VAR_13)) {
   goto exit;
  }
 }
 VAR_16 = VAR_2;
 exit:
 if (VAR_12 != VAR_1)
  FUNC_5(VAR_12);
 return VAR_16;
}
