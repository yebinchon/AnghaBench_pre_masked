
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ath_hal_9300 {int ah_intr_gen_timer_thresh; int ah_intr_gen_timer_trigger; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;

void
FUNC_1(
    struct ath_hal *VAR_0,
    u_int32_t *VAR_1,
    u_int32_t *VAR_2)
{
    struct ath_hal_9300 *VAR_3 = FUNC_0(VAR_0);
    *VAR_1 = VAR_3->ah_intr_gen_timer_trigger;
    *VAR_2 = VAR_3->ah_intr_gen_timer_thresh;
}
