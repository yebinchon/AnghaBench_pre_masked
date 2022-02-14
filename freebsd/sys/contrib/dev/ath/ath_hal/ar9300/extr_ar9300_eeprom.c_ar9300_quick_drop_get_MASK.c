
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int16_t ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;
struct TYPE_8__ {int quick_drop_low; int quick_drop_high; } ;
struct TYPE_7__ {int quick_drop; } ;
struct TYPE_6__ {int quick_drop; } ;
struct TYPE_9__ {TYPE_3__ base_ext1; TYPE_2__ modal_header_5g; TYPE_1__ modal_header_2g; } ;
typedef TYPE_4__ ar9300_eeprom_t ;
struct TYPE_10__ {TYPE_4__ ah_eeprom; } ;


 TYPE_5__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int,int*,int*,int) ;

__attribute__((used)) static u_int16_t FUNC_2(struct ath_hal *VAR_0,
        int VAR_1, u_int16_t VAR_2)
{
    int32_t VAR_3[3], VAR_4[3];
    u_int16_t VAR_5;
    ar9300_eeprom_t *VAR_6 = &FUNC_0(VAR_0)->ah_eeprom;

    if (VAR_2 < 4000) {
        return VAR_6->modal_header_2g.quick_drop;
    } else {
        VAR_4[0] = VAR_6->base_ext1.quick_drop_low;
        VAR_3[0] = 5180;
        VAR_4[1] = VAR_6->modal_header_5g.quick_drop;
        VAR_3[1] = 5500;
        VAR_4[2] = VAR_6->base_ext1.quick_drop_high;
        VAR_3[2] = 5785;
        VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4, 3);
        return VAR_5;
    }
}
