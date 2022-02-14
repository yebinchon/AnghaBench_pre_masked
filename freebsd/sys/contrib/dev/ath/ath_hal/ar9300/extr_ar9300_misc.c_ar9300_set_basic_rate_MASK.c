
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_5__ {struct ieee80211_channel* ah_curchan; } ;
struct TYPE_4__ {int rs_count; int* rs_rates; } ;
typedef TYPE_1__ HAL_RATE_SET ;


 struct ieee80211_channel const* VAR_0 ;
 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;

void
FUNC_4(struct ath_hal *VAR_3, HAL_RATE_SET *VAR_4)
{
    const struct ieee80211_channel *VAR_5 = FUNC_0(VAR_3)->ah_curchan;
    u_int32_t VAR_6;
    u_int8_t VAR_7;
    int VAR_8;

    if (VAR_5 == VAR_0 || !FUNC_1(VAR_5)) {
        return;
    }
    VAR_7 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_4->rs_count; VAR_8++) {
        u_int8_t VAR_9 = VAR_4->rs_rates[VAR_8];

        if ((VAR_9 & 0x80) && (VAR_9 &= 0x7f) >= VAR_7) {
            VAR_7 = VAR_9;
        }
    }




    VAR_6 = FUNC_2(VAR_3, VAR_1);
    if (VAR_7 && VAR_7 / 2 <= 2) {
        FUNC_3(VAR_3, VAR_1, VAR_6 | VAR_2);
    } else {
        FUNC_3(VAR_3, VAR_1, VAR_6 &~ VAR_2);
    }
}
