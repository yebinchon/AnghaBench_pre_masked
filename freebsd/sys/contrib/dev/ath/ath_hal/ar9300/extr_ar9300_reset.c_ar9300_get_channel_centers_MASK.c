
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal_9300 {scalar_t__ ah_ext_prot_spacing; } ;
struct ath_hal {int dummy; } ;
typedef int int8_t ;
struct TYPE_6__ {scalar_t__ synth_center; scalar_t__ ext_center; scalar_t__ ctl_center; } ;
struct TYPE_5__ {scalar_t__ channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;
typedef TYPE_2__ CHAN_CENTERS ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 TYPE_1__* FUNC_4 (struct ath_hal*,struct ieee80211_channel const*) ;

void
FUNC_5(struct ath_hal *VAR_2, const struct ieee80211_channel *VAR_3,
    CHAN_CENTERS *VAR_4)
{
    int8_t VAR_5;
    struct ath_hal_9300 *VAR_6 = FUNC_0(VAR_2);
    HAL_CHANNEL_INTERNAL *VAR_7 = FUNC_4(VAR_2, VAR_3);

    if (!FUNC_2(VAR_3)) {
        VAR_4->ctl_center = VAR_4->ext_center =
        VAR_4->synth_center = VAR_7->channel;
        return;
    }

    FUNC_1(FUNC_2(VAR_3));





    if (FUNC_3(VAR_3)) {
        VAR_4->synth_center = VAR_7->channel + VAR_1;
        VAR_5 = 1;
    } else {
        VAR_4->synth_center = VAR_7->channel - VAR_1;
        VAR_5 = -1;
    }

    VAR_4->ctl_center =
        VAR_4->synth_center - (VAR_5 * VAR_1);
    VAR_4->ext_center =
        VAR_4->synth_center +
        (VAR_5 * ((VAR_6->ah_ext_prot_spacing == VAR_0) ?
            VAR_1 : 15));
}
