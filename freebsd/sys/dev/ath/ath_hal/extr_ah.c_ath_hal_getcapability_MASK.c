
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halTxTstampPrecision; int halRxDoMyBeacon; int halRxUsingLnaMixing; int halMfpSupport; int halSerialiseRegWar; int halHasBBReadWar; int halHasRxSelfLinkedTail; int halRxStreams; int halTxStreams; int halBssidMatchSupport; int halIntrMask; int halEnhancedDfsSupport; int halAntDivCombSupport; int halRxTstampPrecision; int halHTSGI20Support; int halSpectralScanSupport; int halBtCoexSupport; int halNumMRRetries; int halRxLpFifoDepth; int halRxHpFifoDepth; int halRxStatusLen; int halTxStatusLen; int halTxDescLen; int halNumTxMaps; int halEnhancedDmaSupport; int hal4kbSplitTransSupport; int halMbssidAggrSupport; int halAutoSleepSupport; int halUseCombinedRadarRssi; int halTxStbcSupport; int halRxStbcSupport; int halExtChanDfsSupport; int hal4AddrAggrSupport; int halRtsAggrLimit; int halCSTSupport; int halNumGpioPins; int halRxChainMask; int halTxChainMask; int halFastCCSupport; int halGTTSupport; int halHTSupport; int halRfSilentSupport; int halMcastKeySrchSupport; int halBssIdMaskSupport; int halFastFramesSupport; int halBurstSupport; int halCompressSupport; int halPSPollBroken; int halVEOLSupport; int halTotalQueues; int halKeyCacheSize; int halHwPhyCounterSupport; } ;
struct TYPE_4__ {int ah_rxornIsFatal; int ah_currentRDext; int ah_rfsilent; int ah_rfkillEnabled; int ah_tpScale; int ah_maxPowerLevel; int ah_powerLimit; int ah_diagreg; int ah_dfsDomain; int ah_currentRD; TYPE_1__ ah_caps; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;
typedef TYPE_1__ HAL_CAPABILITIES ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



HAL_STATUS
FUNC_1(struct ath_hal *VAR_4, HAL_CAPABILITY_TYPE VAR_5,
 uint32_t VAR_6, uint32_t *VAR_7)
{
 const HAL_CAPABILITIES *VAR_8 = &FUNC_0(VAR_4)->ah_caps;

 switch (VAR_5) {
 case 157:
  *VAR_7 = FUNC_0(VAR_4)->ah_currentRD;
  return VAR_3;
 case 180:
  *VAR_7 = FUNC_0(VAR_4)->ah_dfsDomain;
  return VAR_3;
 case 184:
 case 140:
  return VAR_1;
 case 139:
  return VAR_1;
 case 159:
  return VAR_8->halHwPhyCounterSupport ? VAR_3 : VAR_2;
 case 130:
  return VAR_1;
 case 178:
  return VAR_1;
 case 167:
  *VAR_7 = VAR_8->halKeyCacheSize;
  return VAR_3;
 case 160:
  *VAR_7 = VAR_8->halTotalQueues;
  return VAR_3;
 case 131:
  return VAR_8->halVEOLSupport ? VAR_3 : VAR_1;
 case 158:
  return VAR_8->halPSPollBroken ? VAR_1 : VAR_3;
 case 182:
  return VAR_8->halCompressSupport ? VAR_3 : VAR_1;
 case 185:
  return VAR_8->halBurstSupport ? VAR_3 : VAR_1;
 case 173:
  return VAR_8->halFastFramesSupport ? VAR_3 : VAR_1;
 case 179:
  *VAR_7 = FUNC_0(VAR_4)->ah_diagreg;
  return VAR_3;
 case 136:
  switch (VAR_6) {
  case 0:
   return VAR_3;
  case 1:
   *VAR_7 = FUNC_0(VAR_4)->ah_powerLimit;
   return VAR_3;
  case 2:
   *VAR_7 = FUNC_0(VAR_4)->ah_maxPowerLevel;
   return VAR_3;
  case 3:
   *VAR_7 = FUNC_0(VAR_4)->ah_tpScale;
   return VAR_3;
  }
  return VAR_1;
 case 188:
  return VAR_8->halBssIdMaskSupport ? VAR_3 : VAR_1;
 case 165:
  return VAR_8->halMcastKeySrchSupport ? VAR_3 : VAR_1;
 case 138:
  return VAR_1;
 case 155:
  switch (VAR_6) {
  case 0:
   return VAR_8->halRfSilentSupport ? VAR_3 : VAR_1;
  case 1:
   return FUNC_0(VAR_4)->ah_rfkillEnabled ?
    VAR_3 : VAR_1;
  case 2:
   *VAR_7 = FUNC_0(VAR_4)->ah_rfsilent;
   return VAR_3;
  }
  return VAR_1;
 case 193:
  return VAR_3;

 case 170:
  return VAR_8->halHTSupport ? VAR_3 : VAR_1;
 case 171:
  return VAR_8->halGTTSupport ? VAR_3 : VAR_1;
 case 172:
  return VAR_8->halFastCCSupport ? VAR_3 : VAR_1;
 case 133:
  *VAR_7 = VAR_8->halTxChainMask;
  return VAR_3;
 case 147:
  *VAR_7 = VAR_8->halRxChainMask;
  return VAR_3;
 case 163:
  *VAR_7 = VAR_8->halNumGpioPins;
  return VAR_3;
 case 181:
  return VAR_8->halCSTSupport ? VAR_3 : VAR_1;
 case 154:
  *VAR_7 = VAR_8->halRtsAggrLimit;
  return VAR_3;
 case 192:
  return VAR_8->hal4AddrAggrSupport ? VAR_3 : VAR_1;
 case 174:
  return VAR_8->halExtChanDfsSupport ? VAR_3 : VAR_1;
 case 145:
  return VAR_8->halRxStbcSupport ? VAR_3 : VAR_1;
 case 132:
  return VAR_8->halTxStbcSupport ? VAR_3 : VAR_1;
 case 183:
  return VAR_8->halUseCombinedRadarRssi ? VAR_3 : VAR_1;
 case 190:
  return VAR_8->halAutoSleepSupport ? VAR_3 : VAR_1;
 case 166:
  return VAR_8->halMbssidAggrSupport ? VAR_3 : VAR_1;
 case 142:
  return VAR_8->hal4kbSplitTransSupport ? VAR_3 : VAR_1;
 case 156:
  *VAR_7 = FUNC_0(VAR_4)->ah_currentRDext;
  return VAR_3;
 case 175:
  return VAR_8->halEnhancedDmaSupport ? VAR_3 : VAR_1;
 case 161:
  *VAR_7 = VAR_8->halNumTxMaps;
  return VAR_3;
 case 137:
  *VAR_7 = VAR_8->halTxDescLen;
  return VAR_3;
 case 135:
  *VAR_7 = VAR_8->halTxStatusLen;
  return VAR_3;
 case 149:
  *VAR_7 = VAR_8->halRxStatusLen;
  return VAR_3;
 case 151:
  switch (VAR_6) {
  case 129:
   *VAR_7 = VAR_8->halRxHpFifoDepth;
   return VAR_3;
  case 128:
   *VAR_7 = VAR_8->halRxLpFifoDepth;
   return VAR_3;
  default:
   return VAR_1;
 }
 case 153:
 case 162:
  *VAR_7 = VAR_8->halNumMRRetries;
  return VAR_3;
 case 186:
  return VAR_8->halBtCoexSupport ? VAR_3 : VAR_1;
 case 143:
  return VAR_8->halSpectralScanSupport ? VAR_3 : VAR_1;
 case 169:
  return VAR_8->halHTSGI20Support ? VAR_3 : VAR_1;
 case 148:
  *VAR_7 = VAR_8->halRxTstampPrecision;
  return VAR_3;
 case 191:
  return VAR_8->halAntDivCombSupport ? VAR_3 : VAR_1;

 case 176:
  return VAR_8->halEnhancedDfsSupport ? VAR_3 : VAR_1;


 case 150:
  return FUNC_0(VAR_4)->ah_rxornIsFatal ? VAR_3 : VAR_1;
 case 168:
  *VAR_7 = VAR_8->halIntrMask;
  return VAR_3;
 case 187:
  return VAR_8->halBssidMatchSupport ? VAR_3 : VAR_1;
 case 141:
  switch (VAR_6) {
  case 0:
   *VAR_7 = VAR_8->halTxStreams;
   return VAR_3;
  case 1:
   *VAR_7 = VAR_8->halRxStreams;
   return VAR_3;
  default:
   return VAR_1;
  }
 case 152:
  return VAR_8->halHasRxSelfLinkedTail ? VAR_3 : VAR_1;
 case 189:
  return VAR_8->halHasBBReadWar? VAR_3 : VAR_1;
 case 144:
  return VAR_8->halSerialiseRegWar ? VAR_3 : VAR_1;
 case 164:
  *VAR_7 = VAR_8->halMfpSupport;
  return VAR_3;
 case 146:
  return VAR_8->halRxUsingLnaMixing ? VAR_3 : VAR_1;
 case 177:
  return VAR_8->halRxDoMyBeacon ? VAR_3 : VAR_1;
 case 134:
  *VAR_7 = VAR_8->halTxTstampPrecision;
  return VAR_3;
 default:
  return VAR_0;
 }
}
