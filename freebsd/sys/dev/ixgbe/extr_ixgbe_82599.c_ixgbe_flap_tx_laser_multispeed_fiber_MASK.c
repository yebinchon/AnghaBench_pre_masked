
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ autotry_restart; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;

void FUNC_4(struct ixgbe_hw *VAR_1)
{
 FUNC_0("ixgbe_flap_tx_laser_multispeed_fiber");


 if (FUNC_1(VAR_1))
  return;

 if (VAR_1->mac.autotry_restart) {
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
  VAR_1->mac.autotry_restart = VAR_0;
 }
}
