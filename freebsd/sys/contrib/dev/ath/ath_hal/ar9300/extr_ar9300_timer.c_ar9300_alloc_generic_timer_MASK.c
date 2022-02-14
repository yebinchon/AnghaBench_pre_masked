
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_9300 {int ah_avail_gen_timers; scalar_t__ ah_enable_tsf2; } ;
struct ath_hal {int dummy; } ;
typedef scalar_t__ HAL_GEN_TIMER_DOMAIN ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ath_hal*) ;

int
FUNC_3(struct ath_hal *VAR_6, HAL_GEN_TIMER_DOMAIN VAR_7)
{
    struct ath_hal_9300 *VAR_8 = FUNC_0(VAR_6);
    u_int32_t VAR_9, VAR_10;
    u_int32_t VAR_11, VAR_12;

    if (VAR_7 == VAR_4) {
        VAR_11 = VAR_1;
        VAR_12 = VAR_2;
    } else {
        VAR_11 = VAR_2;
        VAR_12 = VAR_3;
    }


    VAR_9 = VAR_11;
    VAR_10 = VAR_8->ah_avail_gen_timers >> VAR_9;
    for ( ; VAR_10 && (VAR_9 < VAR_12) ; VAR_10 >>= 1, VAR_9++ ) {
        if (VAR_10 & 0x1) {
            VAR_8->ah_avail_gen_timers &= ~(FUNC_1(VAR_9));

            if ((VAR_7 == VAR_5) && !VAR_8->ah_enable_tsf2) {
                VAR_8->ah_enable_tsf2 = VAR_0;
                FUNC_2(VAR_6);
            }
            return VAR_9;
        }
    }
    return -1;
}
