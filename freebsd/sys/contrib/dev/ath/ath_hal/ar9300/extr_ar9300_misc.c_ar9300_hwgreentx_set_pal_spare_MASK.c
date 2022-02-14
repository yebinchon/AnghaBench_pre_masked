
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {scalar_t__ ah_hw_green_tx_enable; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,int ,int ,int) ;

void FUNC_3(struct ath_hal *VAR_2, int VAR_3)
{
    struct ath_hal_9300 *VAR_4 = FUNC_0(VAR_2);

    if (FUNC_1(VAR_2) && VAR_4->ah_hw_green_tx_enable) {
        if ((VAR_3 == 0) || (VAR_3 == 1)) {
            FUNC_2(VAR_2, VAR_0,
                             VAR_1, VAR_3);
        }
    }
}
