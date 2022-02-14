
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {int ah_miscMode; } ;
struct TYPE_4__ {int halRxChainMask; int halRxStreams; int halTxChainMask; int halTxStreams; } ;
struct TYPE_5__ {TYPE_1__ ah_caps; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;
typedef TYPE_1__ HAL_CAPABILITIES ;
typedef int HAL_BOOL ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int,int,int,int *) ;
 int FUNC_5 (struct ath_hal*,int ,int *) ;
 int FUNC_6 (int) ;

HAL_BOOL
FUNC_7(struct ath_hal *VAR_6, HAL_CAPABILITY_TYPE VAR_7,
    u_int32_t VAR_8, u_int32_t VAR_9, HAL_STATUS *VAR_10)
{
 HAL_CAPABILITIES *VAR_11 = &FUNC_1(VAR_6)->ah_caps;

 switch (VAR_7) {
 case 129:
  VAR_9 &= FUNC_5(VAR_6, VAR_2, ((void*)0));
  VAR_11->halRxChainMask = VAR_9;
  if (FUNC_6(VAR_9) > 2)
   VAR_11->halRxStreams = 2;
  else
   VAR_11->halRxStreams = 1;
  return VAR_1;
 case 128:
  VAR_9 &= FUNC_5(VAR_6, VAR_3, ((void*)0));
  VAR_11->halTxChainMask = VAR_9;
  if (FUNC_6(VAR_9) > 2)
   VAR_11->halTxStreams = 2;
  else
   VAR_11->halTxStreams = 1;
  return VAR_1;
 case 130:
  if (VAR_8 != 1)
   return VAR_0;
  if (VAR_9) {
   FUNC_0(VAR_6)->ah_miscMode
       |= VAR_5;
   FUNC_3(VAR_6, VAR_4,
       VAR_5);
  } else {
   FUNC_0(VAR_6)->ah_miscMode
       &= ~VAR_5;
   FUNC_2(VAR_6, VAR_4,
       VAR_5);
  }
  return VAR_1;
 default:
  break;
 }
 return FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
