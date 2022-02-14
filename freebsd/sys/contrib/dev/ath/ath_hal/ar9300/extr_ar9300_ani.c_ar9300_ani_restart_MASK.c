
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {struct ar9300_ani_state* ah_curani; } ;
struct ath_hal {int dummy; } ;
struct ar9300_ani_state {scalar_t__ cck_phy_err_count; scalar_t__ ofdm_phy_err_count; scalar_t__ listen_time; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*) ;

__attribute__((used)) static void
FUNC_4(struct ath_hal *VAR_6)
{
    struct ath_hal_9300 *VAR_7 = FUNC_0(VAR_6);
    struct ar9300_ani_state *VAR_8;

    if (!FUNC_1(VAR_6)) {
        return;
    }

    VAR_8 = VAR_7->ah_curani;

    VAR_8->listen_time = 0;

    FUNC_2(VAR_6, VAR_0, 0);
    FUNC_2(VAR_6, VAR_1, 0);
    FUNC_2(VAR_6, VAR_3, VAR_5);
    FUNC_2(VAR_6, VAR_4, VAR_2);


    FUNC_3(VAR_6);

    VAR_8->ofdm_phy_err_count = 0;
    VAR_8->cck_phy_err_count = 0;
}
