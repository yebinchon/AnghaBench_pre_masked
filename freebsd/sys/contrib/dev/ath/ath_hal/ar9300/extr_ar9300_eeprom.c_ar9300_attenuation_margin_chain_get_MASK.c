
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
struct TYPE_8__ {int* xatten1_margin; } ;
struct TYPE_7__ {scalar_t__* xatten1_margin_low; int* xatten1_margin_high; } ;
struct TYPE_6__ {int* xatten1_margin; } ;
struct TYPE_9__ {TYPE_3__ modal_header_5g; TYPE_2__ base_ext2; TYPE_1__ modal_header_2g; } ;
typedef TYPE_4__ ar9300_eeprom_t ;
struct TYPE_10__ {TYPE_4__ ah_eeprom; } ;


 TYPE_5__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int,int*,int*,int) ;

__attribute__((used)) static u_int16_t
FUNC_2(struct ath_hal *VAR_1, int VAR_2,
    u_int16_t VAR_3)
{
    int32_t VAR_4[3], VAR_5[3];
    u_int16_t VAR_6;
    ar9300_eeprom_t *VAR_7 = &FUNC_0(VAR_1)->ah_eeprom;
    if (VAR_2 >= 0 && VAR_2 < VAR_0) {
        if (VAR_3 < 4000) {
            return VAR_7->modal_header_2g.xatten1_margin[VAR_2];
        } else {
            if (VAR_7->base_ext2.xatten1_margin_low[VAR_2] != 0) {
                VAR_5[0] = VAR_7->base_ext2.xatten1_margin_low[VAR_2];
                VAR_4[0] = 5180;
                VAR_5[1] = VAR_7->modal_header_5g.xatten1_margin[VAR_2];
                VAR_4[1] = 5500;
                VAR_5[2] = VAR_7->base_ext2.xatten1_margin_high[VAR_2];
                VAR_4[2] = 5785;
                VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, 3);
                return VAR_6;
            } else {
                return VAR_7->modal_header_5g.xatten1_margin[VAR_2];
            }
        }
    }
    return 0;
}
