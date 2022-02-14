
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ ah_sw_beacon_response_time; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
typedef int HAL_STATUS ;
typedef int HAL_QUIET_FLAG ;


 int VAR_0 ;
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
 int FUNC_0 (struct ath_hal*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ,int) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

HAL_STATUS
FUNC_7(struct ath_hal *VAR_13, uint32_t VAR_14, uint32_t VAR_15,
    uint32_t VAR_16, HAL_QUIET_FLAG VAR_17)
{
 uint32_t VAR_18 = FUNC_6(VAR_14);
 uint32_t VAR_19 = FUNC_6(VAR_16);
 if (VAR_17 & VAR_12) {
  if ((!VAR_16) || (VAR_17 & VAR_10)) {

   VAR_19 += FUNC_1(VAR_13, VAR_8);
  }
  if (VAR_17 & VAR_11) {
   VAR_19 += VAR_13->ah_config.ah_sw_beacon_response_time;
  }
  FUNC_2(VAR_13, VAR_1, VAR_2, 1);
  FUNC_4(VAR_13, VAR_3, FUNC_5(VAR_15, VAR_4));
  FUNC_4(VAR_13, VAR_5, VAR_18);
  FUNC_4(VAR_13, VAR_0, VAR_19);
  FUNC_3(VAR_13, VAR_6, VAR_7);
 } else {
  FUNC_0(VAR_13, VAR_6, VAR_7);
 }
 return VAR_9;
}
