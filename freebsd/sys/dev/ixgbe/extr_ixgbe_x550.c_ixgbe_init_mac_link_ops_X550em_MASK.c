
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* get_media_type ) (struct ixgbe_hw*) ;void* setup_link; int check_link; int setup_mac_link; int set_rate_select_speed; int * flap_tx_laser; int * enable_tx_laser; int * disable_tx_laser; } ;
struct ixgbe_mac_info {TYPE_1__ ops; int type; } ;
struct ixgbe_hw {int device_id; struct ixgbe_mac_info mac; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_1 (struct ixgbe_hw*) ;

void FUNC_2(struct ixgbe_hw *VAR_17)
{
 struct ixgbe_mac_info *VAR_18 = &VAR_17->mac;

 FUNC_0("ixgbe_init_mac_link_ops_X550em");

 switch (VAR_17->mac.ops.get_media_type(VAR_17)) {
 case 128:



  VAR_18->ops.disable_tx_laser = ((void*)0);
  VAR_18->ops.enable_tx_laser = ((void*)0);
  VAR_18->ops.flap_tx_laser = ((void*)0);
  VAR_18->ops.setup_link = VAR_11;
  VAR_18->ops.set_rate_select_speed =
     VAR_10;

  if ((VAR_17->device_id == VAR_3) ||
      (VAR_17->device_id == VAR_2))
   VAR_18->ops.setup_mac_link =
      VAR_12;
  else
   VAR_18->ops.setup_mac_link =
      VAR_13;
  break;
 case 129:
  if (VAR_17->device_id == VAR_6)
   break;
  if (VAR_17->mac.type == VAR_9) {
   if (VAR_17->device_id == VAR_0 ||
       VAR_17->device_id == VAR_1) {
    VAR_18->ops.setup_link = VAR_16;
    VAR_18->ops.check_link =
         VAR_8;
   } else {
    VAR_18->ops.setup_link =
        VAR_14;
   }
  } else {
   VAR_18->ops.setup_link = VAR_14;
   VAR_18->ops.check_link = VAR_7;
  }
  break;
 case 130:
  if (VAR_17->device_id == VAR_4 ||
      VAR_17->device_id == VAR_5)
   VAR_18->ops.setup_link = VAR_15;
  break;
 default:
  break;
 }
}
