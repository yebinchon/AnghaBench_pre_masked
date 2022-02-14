
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal_9300 {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ halNumAntCfg2GHz; scalar_t__ halNumAntCfg5GHz; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; struct ieee80211_channel* ah_curchan; } ;
typedef scalar_t__ HAL_STATUS ;
typedef int HAL_CHANNEL_INTERNAL ;
typedef TYPE_1__ HAL_CAPABILITIES ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 scalar_t__ FUNC_4 (struct ath_hal_9300*,struct ieee80211_channel const*,scalar_t__,int *) ;
 int * FUNC_5 (struct ath_hal*,struct ieee80211_channel const*) ;

HAL_STATUS
FUNC_6(struct ath_hal *VAR_3, u_int32_t VAR_4)
{
    struct ath_hal_9300 *VAR_5 = FUNC_0(VAR_3);
    const struct ieee80211_channel *VAR_6 = FUNC_1(VAR_3)->ah_curchan;
    HAL_CHANNEL_INTERNAL *VAR_7 = FUNC_5(VAR_3, VAR_6);
    const HAL_CAPABILITIES *VAR_8 = &FUNC_1(VAR_3)->ah_caps;
    u_int16_t VAR_9;
    u_int32_t VAR_10;

    VAR_10 = FUNC_2(VAR_7) ?
        VAR_8->halNumAntCfg2GHz: VAR_8->halNumAntCfg5GHz;

    if (VAR_4 < VAR_10) {
        if (VAR_2 == FUNC_4(VAR_5, VAR_6, VAR_4, &VAR_9)) {
            FUNC_3(VAR_3, VAR_0, VAR_9);
            return VAR_2;
        }
    }

    return VAR_1;
}
