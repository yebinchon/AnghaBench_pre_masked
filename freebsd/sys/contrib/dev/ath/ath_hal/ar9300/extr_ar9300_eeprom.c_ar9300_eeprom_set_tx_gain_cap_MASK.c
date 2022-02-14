
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_7__ {int tx_gain_cap; } ;
struct TYPE_6__ {int tx_gain_cap; } ;
struct TYPE_5__ {scalar_t__ misc_enable; } ;
struct TYPE_8__ {TYPE_3__ modal_header_5g; TYPE_2__ modal_header_2g; TYPE_1__ base_ext1; } ;
struct ath_hal_9300 {TYPE_4__ ah_eeprom; } ;
struct ath_hal {scalar_t__ ah_reset; } ;
typedef TYPE_4__ ar9300_eeprom_t ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,int,int*) ;
 int FUNC_2 (struct ath_hal*) ;

u_int8_t FUNC_3(struct ath_hal *VAR_2,
                                               int *VAR_3)
{
    int VAR_4 = 0, VAR_5, VAR_6 = 0;
    u_int8_t VAR_7 = 0;
    u_int8_t VAR_8;
    ar9300_eeprom_t *VAR_9;
    struct ath_hal_9300 *VAR_10 = FUNC_0(VAR_2);

    VAR_9 = &VAR_10->ah_eeprom;

    if (VAR_9->base_ext1.misc_enable == 0)
        return VAR_0;

    VAR_8 = FUNC_2(VAR_2);

    for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
        if (VAR_3[VAR_4]>-100) {
            if ( VAR_4== 0) {
                if (VAR_3[1]>-100) {
                    continue;

                }
            }
            for (VAR_5 = 1; VAR_5 <= VAR_8; VAR_5++) {
                if (VAR_2 != 0 && VAR_2->ah_reset != 0)
                {
                    FUNC_1(VAR_2, VAR_5, &VAR_7);
                    if (VAR_7 >= VAR_3[VAR_4])
                        break;
                }
            }
            if (VAR_5+1 <= VAR_8) {
                if (VAR_7 == VAR_3[VAR_4])
                    VAR_6 = VAR_5;
                else
                    VAR_6 = VAR_5 + 1;
                if (VAR_4 == 0) {
                    VAR_9->modal_header_2g.tx_gain_cap = VAR_6;
                } else {
                    VAR_9->modal_header_5g.tx_gain_cap = VAR_6;
                }
            } else {
                if (VAR_4 == 0) {
                    VAR_9->modal_header_2g.tx_gain_cap = VAR_5;
                } else {
                    VAR_9->modal_header_5g.tx_gain_cap = VAR_5;
                }
            }
        }
    }
    return VAR_1;
}
