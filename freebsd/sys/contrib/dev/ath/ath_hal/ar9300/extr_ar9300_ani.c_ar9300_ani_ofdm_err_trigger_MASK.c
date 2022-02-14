
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {struct ar9300_ani_state* ah_curani; } ;
struct ath_hal {int dummy; } ;
struct ar9300_ani_state {scalar_t__ ofdm_noise_immunity_level; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ath_hal*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_1)
{
    struct ath_hal_9300 *VAR_2 = FUNC_0(VAR_1);
    struct ar9300_ani_state *VAR_3;

    if (!FUNC_1(VAR_1)) {
        return;
    }

    VAR_3 = VAR_2->ah_curani;

    if (VAR_3->ofdm_noise_immunity_level < VAR_0) {
        FUNC_2(
            VAR_1, VAR_3->ofdm_noise_immunity_level + 1);
    }
}
