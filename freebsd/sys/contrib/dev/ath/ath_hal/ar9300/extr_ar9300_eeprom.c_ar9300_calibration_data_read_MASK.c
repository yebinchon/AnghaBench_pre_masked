
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int calibration_data_source; } ;
typedef int HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_hal*,long,int *,int) ;
 int FUNC_2 (struct ath_hal*,long,int *,int) ;
 int FUNC_3 (struct ath_hal*,long,int *,int) ;
 int FUNC_4 (struct ath_hal*,long,int *,int,int) ;





HAL_BOOL
FUNC_5(struct ath_hal *VAR_1, long VAR_2,
    u_int8_t *VAR_3, int VAR_4)
{
    switch (FUNC_0(VAR_1)->calibration_data_source) {
    case 130:
        return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
    case 131:
        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
    case 128:
        return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, 1);





    }
    return VAR_0;
}
