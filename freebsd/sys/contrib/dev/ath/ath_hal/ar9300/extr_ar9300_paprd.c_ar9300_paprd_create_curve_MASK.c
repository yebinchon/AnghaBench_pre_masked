
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_tx_chainmask; int * small_signal_gain; int ** pa_table; } ;
typedef int HAL_STATUS ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ath_hal*,int *,int *,int*) ;
 scalar_t__ FUNC_6 (struct ath_hal*,int*) ;
 int FUNC_7 (struct ath_hal*,char*,int) ;

HAL_STATUS FUNC_8(struct ath_hal * VAR_3,
  struct ieee80211_channel * VAR_4, int VAR_5)
{
    int VAR_6 = 0;
    u_int32_t *VAR_7, VAR_8;
    int VAR_9[VAR_2 + 1];

    if (FUNC_0(VAR_3)->ah_tx_chainmask & (1 << VAR_5)) {
        VAR_7 = &FUNC_0(VAR_3)->pa_table[VAR_5][0];

        VAR_6 = FUNC_5(VAR_3, &VAR_7[0], &VAR_8,
                    &VAR_9[0]);

  if (FUNC_3(VAR_3)) {
   FUNC_4(1000);
  }

        if (VAR_6 != 0) {
            FUNC_7(VAR_3, "ERROR:: paprd failed with error code = %d\n",
                VAR_6);
            return -1;
        }
        FUNC_0(VAR_3)->small_signal_gain[VAR_5] = VAR_8;

        if (FUNC_2(VAR_3) || FUNC_1(VAR_3)) {
            if (FUNC_6(VAR_3, VAR_9)) {

                return VAR_0;
      }
        }
    }
    return VAR_1;
}
