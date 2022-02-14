
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {struct ar9300_ani_state* ah_curani; } ;
struct ath_hal {int dummy; } ;
struct ar9300_ani_state {scalar_t__ ofdm_noise_immunity_level; scalar_t__ cck_noise_immunity_level; scalar_t__ ofdms_turn; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,scalar_t__) ;
 int FUNC_2 (struct ath_hal*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_0)
{
    struct ath_hal_9300 *VAR_1 = FUNC_0(VAR_0);
    struct ar9300_ani_state *VAR_2 = VAR_1->ah_curani;

    if (VAR_2->ofdm_noise_immunity_level > 0 &&
        (VAR_2->ofdms_turn || VAR_2->cck_noise_immunity_level == 0)) {



        FUNC_2(
            VAR_0, VAR_2->ofdm_noise_immunity_level - 1);





        return;
    }

    if (VAR_2->cck_noise_immunity_level > 0) {



        FUNC_1(
            VAR_0, VAR_2->cck_noise_immunity_level - 1);
    }
}
