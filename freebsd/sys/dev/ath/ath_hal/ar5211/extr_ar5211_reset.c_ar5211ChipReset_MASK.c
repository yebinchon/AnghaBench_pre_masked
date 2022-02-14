
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ ah_devid; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ieee80211_channel const* VAR_1 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;
 int FUNC_6 (struct ath_hal*,int ,int ) ;
 int FUNC_7 (struct ath_hal*,int) ;

HAL_BOOL
FUNC_8(struct ath_hal *VAR_20, const struct ieee80211_channel *VAR_21)
{
 if (!FUNC_6(VAR_20, VAR_19, VAR_2))
  return VAR_0;


 if (VAR_21 != VAR_1) {

  FUNC_5(VAR_20, VAR_14, FUNC_3(VAR_21) ?
      VAR_9 | VAR_10 : 0);
  if (FUNC_2(VAR_21)) {
   FUNC_5(VAR_20, VAR_4,
       VAR_5 | VAR_7);
   FUNC_5(VAR_20, VAR_11, VAR_13);

   FUNC_4(VAR_18);
  } else if (FUNC_0(VAR_20)->ah_devid == VAR_3) {
   FUNC_5(VAR_20, VAR_11, VAR_12);
   FUNC_4(VAR_18);
   FUNC_5(VAR_20, VAR_4,
       VAR_6 | (FUNC_1(VAR_21) ?
    VAR_7 :
    VAR_8));
  }
 }





 if (!FUNC_7(VAR_20, VAR_16 | VAR_15 | VAR_17))
  return VAR_0;
 FUNC_4(2100);


 if (!FUNC_6(VAR_20, VAR_19, VAR_2))
  return VAR_0;


 return FUNC_7(VAR_20, 0);
}
