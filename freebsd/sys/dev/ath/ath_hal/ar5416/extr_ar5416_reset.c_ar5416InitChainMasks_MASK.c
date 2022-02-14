
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_rx_chainmask; int ah_tx_chainmask; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int) ;

void
FUNC_6(struct ath_hal *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5)->ah_rx_chainmask;


 if (VAR_6 == 0x5)
  FUNC_4(VAR_5, VAR_0, VAR_3);





 if (FUNC_2(VAR_5) && (VAR_6 == 0x5 || VAR_6 == 0x3)) {
  FUNC_5(VAR_5, VAR_2, 0x7);
  FUNC_5(VAR_5, VAR_1, 0x7);
 } else {
  FUNC_5(VAR_5, VAR_2, FUNC_0(VAR_5)->ah_rx_chainmask);
  FUNC_5(VAR_5, VAR_1, FUNC_0(VAR_5)->ah_rx_chainmask);
 }
 FUNC_5(VAR_5, VAR_4, FUNC_0(VAR_5)->ah_tx_chainmask);

 if (FUNC_0(VAR_5)->ah_tx_chainmask == 0x5)
  FUNC_4(VAR_5, VAR_0, VAR_3);

 if (FUNC_1(VAR_5)) {
  FUNC_5(VAR_5, VAR_0,
  FUNC_3(VAR_5, VAR_0) | 0x00000001);
 }
}
