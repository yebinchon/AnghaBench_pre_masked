
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ath_hal_9300 {int ah_tx_chainmask; int ah_tx_chainmaskopt; } ;
struct ath_hal {int dummy; } ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,char*,int,int) ;

void
FUNC_2(struct ath_hal *VAR_0, u_int8_t VAR_1)
{
    struct ath_hal_9300 *VAR_2 = FUNC_0(VAR_0);


    if ((VAR_1 & VAR_2->ah_tx_chainmask) != VAR_1) {
        VAR_2->ah_tx_chainmaskopt = 0;
        FUNC_1(VAR_0, "Error: ah_tx_chainmask=%d, mask=%d\n", VAR_2->ah_tx_chainmask, VAR_1);
        return;
    }

    VAR_2->ah_tx_chainmaskopt = VAR_1;
}
