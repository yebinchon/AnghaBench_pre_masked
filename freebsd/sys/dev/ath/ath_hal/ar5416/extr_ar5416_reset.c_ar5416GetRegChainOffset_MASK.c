
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_rx_chainmask; int ah_tx_chainmask; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;

int
FUNC_2(struct ath_hal *VAR_0, int VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_0) &&
     (FUNC_0(VAR_0)->ah_rx_chainmask == 0x5 ||
     FUNC_0(VAR_0)->ah_tx_chainmask == 0x5) && (VAR_1 != 0)) {



  VAR_2 = (VAR_1 == 1) ? 0x2000 : 0x1000;
 } else {
  VAR_2 = VAR_1 * 0x1000;
 }

 return VAR_2;
}
