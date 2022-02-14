
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int nf_pwr ;
typedef int nf_cal ;
typedef int int8_t ;
struct TYPE_4__ {int channel; } ;
typedef TYPE_1__ HAL_CHANNEL_INTERNAL ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct ath_hal*,int ,int,int) ;
 TYPE_1__* FUNC_3 (struct ath_hal*,struct ieee80211_channel*) ;

int FUNC_4(struct ath_hal *VAR_2, struct ieee80211_channel *VAR_3, int8_t *VAR_4, int8_t *VAR_5) {
    HAL_CHANNEL_INTERNAL *VAR_6 = FUNC_3(VAR_2, VAR_3);
    int8_t VAR_7, VAR_8;
    int VAR_9;



    if (VAR_6 == VAR_0) {
        FUNC_1(VAR_4, sizeof(VAR_4[0])*VAR_1);
        FUNC_1(VAR_5, sizeof(VAR_5[0])*VAR_1);
        return -1;
    }

    for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
     if ((VAR_7 = FUNC_2(VAR_2, VAR_6->channel, VAR_9, 0)) == 1) {
         VAR_4[VAR_9] = 0;
     } else {

            VAR_4[VAR_9] = FUNC_0(VAR_7);
     }

     if ((VAR_8 = FUNC_2(VAR_2, VAR_6->channel, VAR_9, 1)) == 1) {
         VAR_5[VAR_9] = 0;
     } else {

            VAR_5[VAR_9] = FUNC_0(VAR_8);
     }
    }

    return 0;
}
