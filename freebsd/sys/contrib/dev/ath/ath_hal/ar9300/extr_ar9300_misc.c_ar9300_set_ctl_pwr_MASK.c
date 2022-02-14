
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct TYPE_2__ {int * ctl_index_5g; int * ctl_index_2g; } ;
struct ath_hal_9300 {TYPE_1__ ah_eeprom; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_1__ ar9300_eeprom_t ;
typedef int OSP_CAL_CTL_DATA_5G ;
typedef int OSP_CAL_CTL_DATA_2G ;
typedef int HAL_BOOL ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_5, u_int8_t *VAR_6)
{
    struct ath_hal_9300 *VAR_7 = FUNC_0(VAR_5);
    ar9300_eeprom_t *VAR_8 = &VAR_7->ah_eeprom;
    u_int8_t *VAR_9;
    u_int32_t VAR_10 = 0;

    if (!VAR_6)
        return VAR_0;


    VAR_9 = VAR_8->ctl_index_2g;
    FUNC_1(VAR_9 + VAR_3, VAR_6,
                VAR_3 * VAR_1 +
                VAR_3 * sizeof(OSP_CAL_CTL_DATA_2G));
    VAR_10 = (VAR_3 * VAR_1) +
            ( VAR_3 * sizeof(OSP_CAL_CTL_DATA_2G));



    VAR_9 = VAR_8->ctl_index_5g;
    FUNC_1(VAR_9 + VAR_4, VAR_6 + VAR_10,
                VAR_4 * VAR_2 +
                VAR_4 * sizeof(OSP_CAL_CTL_DATA_5G));

    return VAR_0;
}
