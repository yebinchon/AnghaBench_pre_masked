
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_2__ {int ath_hal_cwm_ignore_ext_cca; } ;
struct ath_hal {TYPE_1__ ah_config; } ;
typedef scalar_t__ HAL_HT_MACMODE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath_hal*,int ,scalar_t__) ;

void
FUNC_1(struct ath_hal *VAR_3, HAL_HT_MACMODE VAR_4)
{
    u_int32_t VAR_5;


    if (VAR_4 == VAR_2 &&
        !VAR_3->ah_config.ath_hal_cwm_ignore_ext_cca) {
        VAR_5 = VAR_0;
    } else {
        VAR_5 = 0;
    }
    FUNC_0(VAR_3, VAR_1, VAR_5);
}
