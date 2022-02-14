
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;void* setup_link; int set_rate_select_speed; void* setup_mac_link; int * flap_tx_laser; int * enable_tx_laser; int * disable_tx_laser; } ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ smart_speed; scalar_t__ multispeed_fiber; } ;
struct ixgbe_hw {TYPE_1__ phy; struct ixgbe_mac_info mac; } ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;

void FUNC_5(struct ixgbe_hw *VAR_13)
{
 struct ixgbe_mac_info *VAR_14 = &VAR_13->mac;

 FUNC_0("ixgbe_init_mac_link_ops_82599");





 if ((VAR_14->ops.get_media_type(VAR_13) == VAR_4) &&
     !FUNC_2(VAR_13)) {
  VAR_14->ops.disable_tx_laser =
           VAR_0;
  VAR_14->ops.enable_tx_laser =
     VAR_1;
  VAR_14->ops.flap_tx_laser = VAR_2;

 } else {
  VAR_14->ops.disable_tx_laser = ((void*)0);
  VAR_14->ops.enable_tx_laser = ((void*)0);
  VAR_14->ops.flap_tx_laser = ((void*)0);
 }

 if (VAR_13->phy.multispeed_fiber) {

  VAR_14->ops.setup_link = VAR_9;
  VAR_14->ops.setup_mac_link = VAR_8;
  VAR_14->ops.set_rate_select_speed =
            VAR_6;
  if (FUNC_1(VAR_13) == VAR_5)
   VAR_14->ops.set_rate_select_speed =
            VAR_7;
 } else {
  if ((FUNC_1(VAR_13) == VAR_3) &&
       (VAR_13->phy.smart_speed == VAR_11 ||
        VAR_13->phy.smart_speed == VAR_12) &&
        !FUNC_3(VAR_13)) {
   VAR_14->ops.setup_link = VAR_10;
  } else {
   VAR_14->ops.setup_link = VAR_8;
  }
 }
}
