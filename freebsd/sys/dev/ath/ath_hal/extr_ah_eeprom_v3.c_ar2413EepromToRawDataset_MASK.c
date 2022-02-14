
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ath_hal {int dummy; } ;
typedef int int16_t ;
struct TYPE_12__ {int* pwr_I; int* Vpd_I; int** pwr_delta_t2; int** Vpd_delta; int channelValue; } ;
struct TYPE_11__ {scalar_t__ xpd_mask; int numChannels; TYPE_5__* pDataPerChannel; } ;
struct TYPE_10__ {int numVpd; int* pwr_t4; int* Vpd; } ;
struct TYPE_9__ {scalar_t__ xpd_mask; int numChannels; TYPE_1__* pDataPerChannel; } ;
struct TYPE_8__ {TYPE_3__* pDataPerPDGain; int channelValue; } ;
typedef TYPE_2__ RAW_DATA_STRUCT_2413 ;
typedef TYPE_3__ RAW_DATA_PER_PDGAIN_2413 ;
typedef int HAL_BOOL ;
typedef TYPE_4__ EEPROM_DATA_STRUCT_2413 ;
typedef TYPE_5__ EEPROM_DATA_PER_CHANNEL_2413 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static HAL_BOOL
FUNC_1(struct ath_hal *VAR_2,
 EEPROM_DATA_STRUCT_2413 *VAR_3, RAW_DATA_STRUCT_2413 *VAR_4)
{
 uint16_t VAR_5, VAR_6, VAR_7, VAR_8;
 RAW_DATA_PER_PDGAIN_2413 *VAR_9;

 EEPROM_DATA_PER_CHANNEL_2413 *VAR_10;
 uint16_t VAR_11[VAR_1];
 uint16_t VAR_12;
 uint32_t VAR_13;

 FUNC_0(VAR_4->xpd_mask == VAR_3->xpd_mask);

 VAR_11[0] = 0xDEAD;
 VAR_11[1] = 0xDEAD;
 VAR_11[2] = 0xDEAD;
 VAR_11[3] = 0xDEAD;

 VAR_13 = 0;
 VAR_12 = VAR_4->xpd_mask;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if ((VAR_12 >> (VAR_1-VAR_6-1)) & 1)
   VAR_11[VAR_13++] = VAR_1-VAR_6-1;
 }

 VAR_4->numChannels = VAR_3->numChannels;
 for (VAR_5 = 0; VAR_5 < VAR_4->numChannels; VAR_5++) {
  VAR_10 = &(VAR_3->pDataPerChannel[VAR_5]);
  VAR_4->pDataPerChannel[VAR_5].channelValue = VAR_10->channelValue;


  for (VAR_6 = 0; VAR_6 < VAR_13; VAR_6++) {

   VAR_8 = VAR_11[VAR_6];
   VAR_9 = &(VAR_4->pDataPerChannel[VAR_5].pDataPerPDGain[VAR_8]);
   FUNC_0(VAR_9->numVpd >= 1);

   VAR_9->pwr_t4[0] = (uint16_t)(4*VAR_10->pwr_I[VAR_6]);
   VAR_9->Vpd[0] = VAR_10->Vpd_I[VAR_6];

   for (VAR_7 = 1; VAR_7 < VAR_9->numVpd; VAR_7++) {
    VAR_9->pwr_t4[VAR_7] = (int16_t)(VAR_9->pwr_t4[VAR_7-1] + 2*VAR_10->pwr_delta_t2[VAR_7-1][VAR_6]);
    VAR_9->Vpd[VAR_7] = (uint16_t)(VAR_9->Vpd[VAR_7-1] + VAR_10->Vpd_delta[VAR_7-1][VAR_6]);
   }

  }

 }

 return VAR_0;
}
