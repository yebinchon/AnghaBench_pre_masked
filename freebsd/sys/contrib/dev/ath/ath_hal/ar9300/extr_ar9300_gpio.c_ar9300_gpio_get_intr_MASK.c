
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int32_t ;
struct ath_hal_9300 {unsigned int ah_gpio_cause; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;

u_int32_t
FUNC_1(struct ath_hal *VAR_0)
{
    unsigned int VAR_1 = 0;
    struct ath_hal_9300 *VAR_2 = FUNC_0(VAR_0);

    VAR_1 = VAR_2->ah_gpio_cause;
    return VAR_1;
}
