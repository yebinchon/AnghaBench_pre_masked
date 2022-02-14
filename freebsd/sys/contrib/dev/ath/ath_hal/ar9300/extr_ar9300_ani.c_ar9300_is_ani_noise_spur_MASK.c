
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {struct ar9300_ani_state* ah_curani; } ;
struct ath_hal {int dummy; } ;
struct ar9300_ani_state {int phy_noise_spur; } ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_0)
{
    struct ath_hal_9300 *VAR_1 = FUNC_0(VAR_0);
    struct ar9300_ani_state *VAR_2;

    VAR_2 = VAR_1->ah_curani;

    return VAR_2->phy_noise_spur;
}
