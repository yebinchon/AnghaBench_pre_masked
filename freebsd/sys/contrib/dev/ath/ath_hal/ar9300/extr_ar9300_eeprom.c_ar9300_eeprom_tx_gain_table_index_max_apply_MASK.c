
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct TYPE_7__ {unsigned int tx_gain_cap; } ;
struct TYPE_6__ {unsigned int tx_gain_cap; } ;
struct TYPE_5__ {scalar_t__ misc_enable; } ;
struct TYPE_8__ {TYPE_3__ modal_header_5g; TYPE_2__ modal_header_2g; TYPE_1__ base_ext1; } ;
struct ath_hal_9300 {TYPE_4__ ah_eeprom; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_4__ ar9300_eeprom_t ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ,int ,unsigned int) ;

u_int8_t FUNC_2(struct ath_hal *VAR_4, u_int16_t VAR_5)
{
    unsigned int VAR_6;
    ar9300_eeprom_t *VAR_7;
    struct ath_hal_9300 *VAR_8 = FUNC_0(VAR_4);

    VAR_7 = &VAR_8->ah_eeprom;

    if (VAR_7->base_ext1.misc_enable == 0)
        return VAR_0;

    if (VAR_5 < 4000)
    {
        VAR_6 = VAR_7->modal_header_2g.tx_gain_cap;
    }
    else
    {
        VAR_6 = VAR_7->modal_header_5g.tx_gain_cap;
    }

    FUNC_1(VAR_4,
        VAR_2, VAR_3, VAR_6);
    return VAR_1;
}
