
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int paprd_gain_table_index; int paprd_gain_table_entries; } ;
typedef int HAL_CHANNEL_INTERNAL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (struct ath_hal*,struct ieee80211_channel*) ;
 int * FUNC_6 (struct ath_hal*,struct ieee80211_channel*) ;

int FUNC_7(struct ath_hal *VAR_0, struct ieee80211_channel * VAR_1)
{
    HAL_CHANNEL_INTERNAL *VAR_2 = FUNC_6(VAR_0, VAR_1);

    if ((FUNC_1(VAR_0) && FUNC_2(VAR_2)) ||
         FUNC_5(VAR_0, VAR_1)) {
        goto FAIL;
    }
    FUNC_3(FUNC_0(VAR_0)->paprd_gain_table_entries,
        sizeof(FUNC_0(VAR_0)->paprd_gain_table_entries));
    FUNC_3(FUNC_0(VAR_0)->paprd_gain_table_index,
        sizeof(FUNC_0(VAR_0)->paprd_gain_table_index));

    FUNC_4(VAR_0);
    return 0;
FAIL:
    return -1;
}
