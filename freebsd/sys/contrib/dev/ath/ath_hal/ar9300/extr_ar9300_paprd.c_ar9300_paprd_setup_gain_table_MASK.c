
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {int paprd_training_power; int ah_tx_chainmask; unsigned int* paprd_gain_table_index; } ;
typedef int HAL_STATUS ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ath_hal*,int ,int ,int ) ;
 unsigned int FUNC_4 (struct ath_hal*,int,int) ;
 int FUNC_5 (struct ath_hal*,unsigned int) ;

HAL_STATUS FUNC_6(struct ath_hal *VAR_5, int VAR_6)
{
    unsigned int VAR_7, VAR_8, VAR_9;
    FUNC_2(VAR_5, VAR_3,
        "Run papredistortion single table algorithm:: Training power = %d\n",
        FUNC_0(VAR_5)->paprd_training_power / 2);

    if (FUNC_0(VAR_5)->ah_tx_chainmask & (1 << VAR_6)) {

        VAR_8 = FUNC_4(
            VAR_5, VAR_6, FUNC_0(VAR_5)->paprd_training_power);

        VAR_9 = 0;

        for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
            if (FUNC_0(VAR_5)->paprd_gain_table_index[VAR_7] < VAR_8) {
                VAR_9 = VAR_9 + 1;
            } else {
                break;
            }
        }



        FUNC_5(VAR_5, VAR_9);
        if (FUNC_1(VAR_5)) {
            FUNC_3(VAR_5, VAR_2,
                VAR_1, 0);
        } else {
            FUNC_3(VAR_5, VAR_0,
                VAR_1, 0);
        }
    }

    return VAR_4;
}
