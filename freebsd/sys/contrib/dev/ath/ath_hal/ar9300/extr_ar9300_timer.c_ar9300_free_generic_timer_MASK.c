
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int ah_avail_gen_timers; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath_hal*,int) ;

void
FUNC_3(struct ath_hal *VAR_0, int VAR_1)
{
    struct ath_hal_9300 *VAR_2 = FUNC_0(VAR_0);

    FUNC_2(VAR_0, VAR_1);
    VAR_2->ah_avail_gen_timers |= FUNC_1(VAR_1);
}
