
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ieee80211_channel const*) ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*) ;
 int FUNC_7 (struct ath_hal*) ;
 int FUNC_8 (struct ath_hal*,int ) ;
 int FUNC_9 (struct ath_hal*) ;
 int FUNC_10 (struct ath_hal*) ;
 int FUNC_11 (struct ath_hal*,int ) ;
 int FUNC_12 (struct ath_hal*,int ) ;
 int FUNC_13 (struct ath_hal*,int ) ;
 int FUNC_14 (struct ath_hal*,int ) ;
 TYPE_1__* FUNC_15 (struct ath_hal*,struct ieee80211_channel const*) ;

HAL_BOOL
FUNC_16(struct ath_hal *VAR_1, const struct ieee80211_channel *VAR_2)
{
    HAL_CHANNEL_INTERNAL *VAR_3 = FUNC_15(VAR_1, VAR_2);

    FUNC_13(VAR_1, FUNC_3(VAR_2));

    FUNC_14(VAR_1, FUNC_3(VAR_2));

    FUNC_4(VAR_1, FUNC_3(VAR_2));
    FUNC_6(VAR_1);

    FUNC_12(VAR_1, FUNC_3(VAR_2));




    if (!FUNC_1(VAR_1) && !FUNC_2(VAR_1) && !FUNC_0(VAR_1)) {
        FUNC_7(VAR_1);
    }

    FUNC_5(VAR_1, VAR_3->channel);
    FUNC_8(VAR_1, VAR_3->channel);
    FUNC_9(VAR_1);
    if(!FUNC_2(VAR_1))
    {
        FUNC_10(VAR_1);
    }

    FUNC_11(VAR_1, VAR_3->channel);

    return VAR_0;
}
