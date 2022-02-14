
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int paprd_rate_mask_ht20; int paprd_rate_mask_ht40; } ;
struct TYPE_6__ {int paprd_rate_mask_ht20; int paprd_rate_mask_ht40; } ;
struct TYPE_8__ {TYPE_2__ modal_header_5g; TYPE_1__ modal_header_2g; } ;
struct ath_hal_9300 {int ah_5g_paprd_rate_mask_ht20; int ah_5g_paprd_rate_mask_ht40; int ah_2g_paprd_rate_mask_ht20; int ah_2g_paprd_rate_mask_ht40; TYPE_3__ ah_eeprom; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_3__ ar9300_eeprom_t ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*,TYPE_3__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;

HAL_BOOL
FUNC_5(struct ath_hal *VAR_2)
{
    struct ath_hal_9300 *VAR_3 = FUNC_0(VAR_2);
    ar9300_eeprom_t *VAR_4;
    int VAR_5;
    HAL_BOOL VAR_6 = VAR_0;

    VAR_4 = &VAR_3->ah_eeprom;
    VAR_5 = FUNC_2();

    if (VAR_4 != 0 && VAR_5 > 0) {

        FUNC_3();
        FUNC_4(VAR_4);






        if (FUNC_1(VAR_2, VAR_4, VAR_5) >= 0) {
            VAR_6 = VAR_1;
        }



        FUNC_3();
        FUNC_4(VAR_4);


    }
    VAR_3->ah_2g_paprd_rate_mask_ht40 =
        VAR_4->modal_header_2g.paprd_rate_mask_ht40;
    VAR_3->ah_2g_paprd_rate_mask_ht20 =
        VAR_4->modal_header_2g.paprd_rate_mask_ht20;
    VAR_3->ah_5g_paprd_rate_mask_ht40 =
        VAR_4->modal_header_5g.paprd_rate_mask_ht40;
    VAR_3->ah_5g_paprd_rate_mask_ht20 =
        VAR_4->modal_header_5g.paprd_rate_mask_ht20;
    return VAR_6;
}
