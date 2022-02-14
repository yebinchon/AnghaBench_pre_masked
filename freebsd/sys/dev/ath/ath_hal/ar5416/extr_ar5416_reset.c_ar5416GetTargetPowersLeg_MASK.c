
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
struct TYPE_9__ {scalar_t__ bChannel; scalar_t__* tPow2x; } ;
struct TYPE_8__ {scalar_t__ ext_center; scalar_t__ ctl_center; } ;
typedef scalar_t__ HAL_BOOL ;
typedef TYPE_1__ CHAN_CENTERS ;
typedef TYPE_2__ CAL_TARGET_POWER_LEG ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (struct ath_hal*,struct ieee80211_channel const*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

void
FUNC_6(struct ath_hal *VAR_1,
                         const struct ieee80211_channel *VAR_2,
                         CAL_TARGET_POWER_LEG *VAR_3, uint16_t VAR_4,
                         CAL_TARGET_POWER_LEG *VAR_5, uint16_t VAR_6,
    HAL_BOOL VAR_7)
{
    uint16_t VAR_8, VAR_9;
    int VAR_10;
    int VAR_11 = -1, VAR_12 = -1;
    uint16_t VAR_13;
    CHAN_CENTERS VAR_14;

    FUNC_3(VAR_1, VAR_2, &VAR_14);
    VAR_13 = (VAR_7) ? VAR_14.ext_center :VAR_14.ctl_center;


    if (VAR_13 <= FUNC_5(VAR_3[0].bChannel, FUNC_1(VAR_2))) {
        VAR_11 = 0;
    } else {
        for (VAR_10 = 0; (VAR_10 < VAR_4) && (VAR_3[VAR_10].bChannel != VAR_0); VAR_10++) {
            if (VAR_13 == FUNC_5(VAR_3[VAR_10].bChannel, FUNC_1(VAR_2))) {
                VAR_11 = VAR_10;
                break;
            } else if ((VAR_13 < FUNC_5(VAR_3[VAR_10].bChannel, FUNC_1(VAR_2))) &&
                       (VAR_13 > FUNC_5(VAR_3[VAR_10 - 1].bChannel, FUNC_1(VAR_2))))
            {
                VAR_12 = VAR_10 - 1;
                break;
            }
        }
        if ((VAR_11 == -1) && (VAR_12 == -1)) {
            FUNC_0(VAR_13 > FUNC_5(VAR_3[VAR_10 - 1].bChannel, FUNC_1(VAR_2)));
            VAR_11 = VAR_10 - 1;
        }
    }

    if (VAR_11 != -1) {
        FUNC_2(VAR_5, &VAR_3[VAR_11], sizeof(*VAR_5));
    } else {
        FUNC_0(VAR_12 != -1);




        VAR_8 = FUNC_5(VAR_3[VAR_12].bChannel, FUNC_1(VAR_2));
        VAR_9 = FUNC_5(VAR_3[VAR_12 + 1].bChannel, FUNC_1(VAR_2));

        for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
            VAR_5->tPow2x[VAR_10] = (uint8_t)FUNC_4(VAR_13, VAR_8, VAR_9,
                                   VAR_3[VAR_12].tPow2x[VAR_10], VAR_3[VAR_12 + 1].tPow2x[VAR_10]);
        }
    }
}
