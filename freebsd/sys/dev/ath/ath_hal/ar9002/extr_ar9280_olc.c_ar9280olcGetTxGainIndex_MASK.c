
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct calDataPerFreqOpLoop {scalar_t__** pcdac; scalar_t__** pwrPdg; } ;
struct ath_hal {int dummy; } ;
struct TYPE_5__ {scalar_t__* originalGain; } ;
struct TYPE_4__ {int synth_center; } ;
typedef scalar_t__ HAL_BOOL ;
typedef TYPE_1__ CHAN_CENTERS ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ieee80211_channel const*) ;
 int FUNC_3 (struct ath_hal*,struct ieee80211_channel const*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__*,size_t,size_t*,size_t*) ;

void
FUNC_5(struct ath_hal *VAR_2,
    const struct ieee80211_channel *VAR_3,
    struct calDataPerFreqOpLoop *VAR_4,
    uint8_t *VAR_5, uint16_t VAR_6, uint8_t *VAR_7, uint8_t *VAR_8)
{
 uint8_t VAR_9, VAR_10 = 0;
 uint16_t VAR_11 = 0, VAR_12 = 0, VAR_13;
 HAL_BOOL VAR_14;
 CHAN_CENTERS VAR_15;

 FUNC_3(VAR_2, VAR_3, &VAR_15);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  if (VAR_5[VAR_13] == VAR_0)
   break;

 VAR_14 = FUNC_4((uint8_t)FUNC_1(VAR_15.synth_center,
      FUNC_2(VAR_3)), VAR_5, VAR_13,
      &VAR_11, &VAR_12);
 if (VAR_14) {
  VAR_9 = VAR_4[VAR_11].pcdac[0][0];
  *VAR_7 = VAR_4[VAR_11].pwrPdg[0][0];
 } else {
  VAR_9 = VAR_4[VAR_12].pcdac[0][0];
  *VAR_7 = (VAR_4[VAR_11].pwrPdg[0][0] +
    VAR_4[VAR_12].pwrPdg[0][0])/2;
 }
 while (VAR_9 > FUNC_0(VAR_2)->originalGain[VAR_10] &&
   VAR_10 < (VAR_1 - 1))
  VAR_10++;

 *VAR_8 = VAR_10;
}
