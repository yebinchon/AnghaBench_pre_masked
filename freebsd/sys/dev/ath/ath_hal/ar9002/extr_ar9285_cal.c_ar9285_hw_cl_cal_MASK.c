
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


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
 int VAR_13 ;
 int FUNC_0 (struct ath_hal*,int ,char*) ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ,int ) ;

__attribute__((used)) static HAL_BOOL
FUNC_5(struct ath_hal *VAR_15, const struct ieee80211_channel *VAR_16)
{
 FUNC_3(VAR_15, VAR_7, VAR_8);
 if (FUNC_1(VAR_16)) {
  FUNC_3(VAR_15, VAR_7, VAR_10);
  FUNC_3(VAR_15, VAR_13, VAR_9);
  FUNC_2(VAR_15, VAR_4,
       VAR_6);
  FUNC_2(VAR_15, VAR_11, VAR_12);
  FUNC_3(VAR_15, VAR_4, VAR_5);
  if (!FUNC_4(VAR_15, VAR_4,
      VAR_5, 0)) {
   FUNC_0(VAR_15, VAR_14,
    "offset calibration failed to complete in 1ms; noisy environment?\n");
   return VAR_0;
  }
  FUNC_2(VAR_15, VAR_13, VAR_9);
  FUNC_2(VAR_15, VAR_7, VAR_10);
  FUNC_2(VAR_15, VAR_7, VAR_8);
 }
 FUNC_2(VAR_15, VAR_2, VAR_3);
 FUNC_3(VAR_15, VAR_4, VAR_6);
 FUNC_3(VAR_15, VAR_11, VAR_12);
 FUNC_3(VAR_15, VAR_4, VAR_5);
 if (!FUNC_4(VAR_15, VAR_4, VAR_5,
     0)) {
  FUNC_0(VAR_15, VAR_14,
   "offset calibration failed to complete in 1ms; noisy environment?\n");
  return VAR_0;
 }

 FUNC_3(VAR_15, VAR_2, VAR_3);
 FUNC_2(VAR_15, VAR_7, VAR_8);
 FUNC_2(VAR_15, VAR_4, VAR_6);

 return VAR_1;
}
