
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ int16_t ;
struct TYPE_10__ {scalar_t__* tPow2x; } ;
struct TYPE_9__ {scalar_t__* tPow2x; } ;
typedef TYPE_1__ CAL_TARGET_POWER_LEG ;
typedef TYPE_2__ CAL_TARGET_POWER_HT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (scalar_t__*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;

void
FUNC_3(struct ath_hal *VAR_23,
    const struct ieee80211_channel *VAR_24,
    int16_t *VAR_25,
    const CAL_TARGET_POWER_LEG *VAR_26,
    const CAL_TARGET_POWER_LEG *VAR_27,
    const CAL_TARGET_POWER_LEG *VAR_28,
    const CAL_TARGET_POWER_LEG *VAR_29,
    const CAL_TARGET_POWER_HT *VAR_30,
    const CAL_TARGET_POWER_HT *VAR_31)
{

 int VAR_32;


 for (VAR_32 = 0; VAR_32 < VAR_0; VAR_32++)
  VAR_25[VAR_32] = 0;


 VAR_25[VAR_14] = VAR_25[VAR_15] = VAR_25[VAR_3] =
 VAR_25[VAR_4] = VAR_25[VAR_6] =
     VAR_28->tPow2x[0];
 VAR_25[VAR_9] = VAR_28->tPow2x[1];
 VAR_25[VAR_10] = VAR_28->tPow2x[2];
 VAR_25[VAR_11] = VAR_28->tPow2x[3];
 VAR_25[VAR_22] = VAR_28->tPow2x[0];

 for (VAR_32 = 0; VAR_32 < (sizeof(VAR_30->tPow2x)/sizeof(VAR_30->tPow2x[0])); VAR_32++) {
  VAR_25[VAR_20 + VAR_32] = VAR_30->tPow2x[VAR_32];
 }

 if (FUNC_0(VAR_24)) {
  VAR_25[VAR_5] = VAR_26->tPow2x[0];
  VAR_25[VAR_8] = VAR_25[VAR_7] = VAR_26->tPow2x[1];
  VAR_25[VAR_13] = VAR_25[VAR_12] = VAR_26->tPow2x[2];
  VAR_25[VAR_2] = VAR_25[VAR_1] = VAR_26->tPow2x[3];
 }
 if (FUNC_1(VAR_24)) {
  for (VAR_32 = 0; VAR_32 < (sizeof(VAR_31->tPow2x)/sizeof(VAR_31->tPow2x[0])); VAR_32++) {
   VAR_25[VAR_21 + VAR_32] = VAR_31->tPow2x[VAR_32];
  }
  VAR_25[VAR_17] = VAR_31->tPow2x[0];
  VAR_25[VAR_16] = VAR_31->tPow2x[0];
  VAR_25[VAR_19] = VAR_29->tPow2x[0];
  if (FUNC_0(VAR_24)) {
   VAR_25[VAR_18] = VAR_27->tPow2x[0];
  }
 }

}
