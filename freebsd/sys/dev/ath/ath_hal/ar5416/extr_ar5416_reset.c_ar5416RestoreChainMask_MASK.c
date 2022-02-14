
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_rx_chainmask; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;

void
FUNC_3(struct ath_hal *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2)->ah_rx_chainmask;

 if (FUNC_1(VAR_2) && (VAR_3 == 0x5 || VAR_3 == 0x3)) {
  FUNC_2(VAR_2, VAR_1, VAR_3);
  FUNC_2(VAR_2, VAR_0, VAR_3);
 }
}
