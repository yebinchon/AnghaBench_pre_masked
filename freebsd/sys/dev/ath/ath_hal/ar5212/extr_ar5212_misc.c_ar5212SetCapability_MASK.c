
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal_5212 {int ah_miscMode; int ah_diversity; int ah_tpcEnabled; int ah_txPowerIndexOffset; int ah_macTPC; int (* ah_aniControl ) (struct ath_hal*,int const,int) ;int ah_staId1Defaults; int ah_phyPowerOn; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int halTsfAddSupport; int halTkipMicTxRxKeySupport; } ;
struct TYPE_4__ {int ah_diagreg; TYPE_1__ ah_caps; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;
typedef TYPE_1__ HAL_CAPABILITIES ;
typedef int HAL_BOOL ;
typedef int HAL_ANI_CMD ;


 struct ath_hal_5212* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct ath_hal*,int,int,int,int *) ;
 int FUNC_8 (struct ath_hal*,int const,int) ;

HAL_BOOL
FUNC_9(struct ath_hal *VAR_15, HAL_CAPABILITY_TYPE VAR_16,
 uint32_t VAR_17, uint32_t VAR_18, HAL_STATUS *VAR_19)
{

 struct ath_hal_5212 *VAR_20 = FUNC_0(VAR_15);
 const HAL_CAPABILITIES *VAR_21 = &FUNC_1(VAR_15)->ah_caps;
 uint32_t VAR_22;

 switch (VAR_16) {
 case 133:
  if (VAR_18)
   VAR_20->ah_staId1Defaults |= VAR_10;
  else
   VAR_20->ah_staId1Defaults &= ~VAR_10;
  return VAR_1;
 case 132:
  if (!VAR_21->halTkipMicTxRxKeySupport)
   return VAR_0;

  if (VAR_18)
   VAR_20->ah_miscMode &= ~VAR_4;
  else
   VAR_20->ah_miscMode |= VAR_4;

  FUNC_5(VAR_15, VAR_3, FUNC_4(VAR_15, VAR_3) | VAR_20->ah_miscMode);
  return VAR_1;
 case 137:
  switch (VAR_17) {
  case 0:
   return VAR_0;
  case 1:
   if (VAR_20->ah_phyPowerOn) {
    if (VAR_17 == 134) {
     VAR_22 = FUNC_4(VAR_15, VAR_6);
     if (VAR_18)
      VAR_22 |= VAR_7;
     else
      VAR_22 &= ~VAR_7;
     FUNC_5(VAR_15, VAR_6, VAR_22);
    }
   }
   VAR_20->ah_diversity = (VAR_18 != 0);
   return VAR_1;

  case 134:
   if (! VAR_20->ah_phyPowerOn)
    return VAR_0;
   VAR_22 = FUNC_4(VAR_15, VAR_8);
   VAR_22 &= ~VAR_9;
   VAR_22 |= FUNC_6(VAR_18, VAR_9);
   FUNC_5(VAR_15, VAR_8, VAR_22);
   return VAR_1;
  default:
   return VAR_0;
  }
 case 138:





  FUNC_1(VAR_15)->ah_diagreg = VAR_18;
  FUNC_5(VAR_15, VAR_2, FUNC_1(VAR_15)->ah_diagreg);
  return VAR_1;
 case 131:
  VAR_20->ah_tpcEnabled = (VAR_18 != 0);
  return VAR_1;
 case 135:
  if (VAR_18)
   VAR_20->ah_staId1Defaults |= VAR_11;
  else
   VAR_20->ah_staId1Defaults &= ~VAR_11;
  return VAR_1;
 case 130:
 case 129:
  VAR_18 += VAR_20->ah_txPowerIndexOffset;
  if (VAR_18 > 63)
   VAR_18 = 63;
  if (VAR_16 == 130) {
   VAR_20->ah_macTPC &= VAR_13;
   VAR_20->ah_macTPC |= FUNC_2(VAR_18, VAR_13);
  } else {
   VAR_20->ah_macTPC &= VAR_14;
   VAR_20->ah_macTPC |= FUNC_2(VAR_18, VAR_14);
  }
  FUNC_5(VAR_15, VAR_12, VAR_20->ah_macTPC);
  return VAR_1;
 case 136: {


  static const HAL_ANI_CMD VAR_23[] = {
   140,
   143,
   142,
   141,
   145,
   144,
   139,
  };
  return VAR_17 < (sizeof(VAR_23)/sizeof(VAR_23[0])) ?
   FUNC_0(VAR_15)->ah_aniControl(VAR_15, VAR_23[VAR_17], VAR_18) :
   VAR_0;
 }
 case 128:
  if (VAR_21->halTsfAddSupport) {
   if (VAR_18)
    VAR_20->ah_miscMode |= VAR_5;
   else
    VAR_20->ah_miscMode &= ~VAR_5;
   return VAR_1;
  }

 default:
  return FUNC_7(VAR_15, VAR_16, VAR_17,
    VAR_18, VAR_19);
 }

}
