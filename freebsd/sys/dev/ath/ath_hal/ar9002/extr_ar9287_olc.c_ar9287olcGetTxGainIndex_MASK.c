
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct cal_data_op_loop_ar9287 {scalar_t__** pwrPdg; } ;
struct ath_hal {int dummy; } ;
typedef int int8_t ;
struct TYPE_3__ {int synth_center; } ;
typedef scalar_t__ HAL_BOOL ;
typedef TYPE_1__ CHAN_CENTERS ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (struct ath_hal*,struct ieee80211_channel const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*,size_t,size_t*,size_t*) ;

void
FUNC_4(struct ath_hal *VAR_1,
    const struct ieee80211_channel *VAR_2,
    struct cal_data_op_loop_ar9287 *VAR_3,
    uint8_t *VAR_4, uint16_t VAR_5, int8_t *VAR_6)
{
        uint16_t VAR_7 = 0, VAR_8 = 0, VAR_9;
        HAL_BOOL VAR_10;
        CHAN_CENTERS VAR_11;

        FUNC_2(VAR_1, VAR_2, &VAR_11);

        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
                if (VAR_4[VAR_9] == VAR_0)
                        break;
        }

        VAR_10 = FUNC_3(
                (uint8_t)FUNC_0(VAR_11.synth_center, FUNC_1(VAR_2)),
                VAR_4, VAR_9, &VAR_7, &VAR_8);

        if (VAR_10) {
                *VAR_6 = (int8_t) VAR_3[VAR_7].pwrPdg[0][0];
        } else {
                *VAR_6 = ((int8_t) VAR_3[VAR_7].pwrPdg[0][0] +
                         (int8_t) VAR_3[VAR_8].pwrPdg[0][0])/2;
        }
}
