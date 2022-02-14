
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_2__ {int halLow5GhzChan; int halHigh5GhzChan; int halLow2GhzChan; int halHigh2GhzChan; } ;
struct ath_hal_private {TYPE_1__ ah_caps; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 struct ath_hal_private* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_4,
    u_int16_t VAR_5, u_int16_t *VAR_6, u_int16_t *VAR_7)
{
    struct ath_hal_private *VAR_8 = FUNC_0(VAR_4);
    HAL_CAPABILITIES *VAR_9 = &VAR_8->ah_caps;

    if (VAR_5 & VAR_3) {
        *VAR_6 = VAR_9->halLow5GhzChan;
        *VAR_7 = VAR_9->halHigh5GhzChan;
        return VAR_1;
    }
    if ((VAR_5 & VAR_2)) {
        *VAR_6 = VAR_9->halLow2GhzChan;
        *VAR_7 = VAR_9->halHigh2GhzChan;

        return VAR_1;
    }
    return VAR_0;
}
