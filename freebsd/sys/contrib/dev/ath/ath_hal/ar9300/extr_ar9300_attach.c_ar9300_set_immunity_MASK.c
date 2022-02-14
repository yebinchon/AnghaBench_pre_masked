
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_9300 {int* ah_immunity_vals; scalar_t__ ah_immunity_on; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int ,int) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;

void
FUNC_4(struct ath_hal *VAR_14, HAL_BOOL VAR_15)
{
    struct ath_hal_9300 *VAR_16 = FUNC_0(VAR_14);
    u_int32_t VAR_17 = VAR_15 ? 127 : VAR_16->ah_immunity_vals[0],
              VAR_18 = VAR_15 ? 127 : VAR_16->ah_immunity_vals[1],
              VAR_19 = VAR_15 ? 127 : VAR_16->ah_immunity_vals[2],
              VAR_20 = VAR_15 ? 127 : VAR_16->ah_immunity_vals[3],
              VAR_21 = VAR_15 ? 31 : VAR_16->ah_immunity_vals[4],
              VAR_22 = VAR_15 ? 63 : VAR_16->ah_immunity_vals[5];

    if (VAR_16->ah_immunity_on == VAR_15) {
        return;
    }

    VAR_16->ah_immunity_on = VAR_15;

    FUNC_2(VAR_14, VAR_6,
                     VAR_7, VAR_17);
    FUNC_2(VAR_14, VAR_6,
                     VAR_9, VAR_18);
    FUNC_2(VAR_14, VAR_0,
                     VAR_11, VAR_19);
    FUNC_2(VAR_14, VAR_0,
                     VAR_13, VAR_20);
    FUNC_2(VAR_14, VAR_0,
                     VAR_12, VAR_21);
    FUNC_2(VAR_14, VAR_6,
                     VAR_8, VAR_22);

    FUNC_2(VAR_14, VAR_1,
                     VAR_3, VAR_17);
    FUNC_2(VAR_14, VAR_1,
                     VAR_5, VAR_18);
    FUNC_2(VAR_14, VAR_1,
                     VAR_2, VAR_19);
    FUNC_2(VAR_14, VAR_1,
                     VAR_4, VAR_20);

    if (!VAR_15) {
        FUNC_3(VAR_14, VAR_6,
                       VAR_10);
    } else {
        FUNC_1(VAR_14, VAR_6,
                       VAR_10);
    }
}
