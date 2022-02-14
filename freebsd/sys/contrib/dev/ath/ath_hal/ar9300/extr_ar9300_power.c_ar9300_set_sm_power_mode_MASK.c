
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int ah_sm_power_mode; int ah_rx_chainmask; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_SMPS_MODE ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;




 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct ath_hal*,int ,int ,int ) ;

void
FUNC_4(struct ath_hal *VAR_10, HAL_SMPS_MODE VAR_11)
{
    int VAR_12;
    struct ath_hal_9300 *VAR_13 = FUNC_0(VAR_10);

    if (FUNC_3(VAR_10, VAR_8, 0, VAR_0) != VAR_9) {
        return;
    }


    VAR_12 = FUNC_2(VAR_5, VAR_4) |
             FUNC_2(VAR_13->ah_rx_chainmask, VAR_2) |
             VAR_6;


    switch (VAR_11) {
    case 128:
        FUNC_1(VAR_10, VAR_1, VAR_12);
        break;
    case 129:
        FUNC_1(VAR_10, VAR_1, VAR_12 | VAR_7);
        break;
    case 130:
        FUNC_1(VAR_10, VAR_1, VAR_12 | VAR_3);
        break;
    case 131:
        FUNC_1(VAR_10, VAR_1, 0);
        break;
    default:
        break;
    }
    VAR_13->ah_sm_power_mode = VAR_11;
}
