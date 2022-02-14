
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_media_type ) (struct ixgbe_hw*) ;int setup_eee; int * setup_fc; int fc_autoneg; int release_swfw_sync; int acquire_swfw_sync; int write_iosf_sb_reg; int read_iosf_sb_reg; } ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct TYPE_4__ {int eee_speeds_supported; int eee_speeds_advertised; } ;
struct ixgbe_hw {int device_id; TYPE_2__ phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*) ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct ixgbe_hw*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_16)
{
 struct ixgbe_mac_info *VAR_17 = &VAR_16->mac;
 s32 VAR_18;

 FUNC_0("ixgbe_init_ops_X550EM_a");


 VAR_18 = FUNC_1(VAR_16);

 if (VAR_16->device_id == VAR_0 ||
     VAR_16->device_id == VAR_1) {
  VAR_17->ops.read_iosf_sb_reg = VAR_9;
  VAR_17->ops.write_iosf_sb_reg = VAR_14;
 } else {
  VAR_17->ops.read_iosf_sb_reg = VAR_10;
  VAR_17->ops.write_iosf_sb_reg = VAR_15;
 }
 VAR_17->ops.acquire_swfw_sync = VAR_4;
 VAR_17->ops.release_swfw_sync = VAR_11;

 switch (VAR_17->ops.get_media_type(VAR_16)) {
 case 128:
  VAR_17->ops.setup_fc = ((void*)0);
  VAR_17->ops.fc_autoneg = VAR_6;
  break;
 case 129:
  VAR_17->ops.fc_autoneg = VAR_5;
  VAR_17->ops.setup_fc = VAR_13;
  break;
 default:
  break;
 }

 switch (VAR_16->device_id) {
 case 131:
 case 130:
  VAR_17->ops.fc_autoneg = VAR_8;
  VAR_17->ops.setup_fc = VAR_7;
  VAR_17->ops.setup_eee = VAR_12;
  VAR_16->phy.eee_speeds_supported = VAR_2 |
            VAR_3;
  VAR_16->phy.eee_speeds_advertised = VAR_16->phy.eee_speeds_supported;
  break;
 default:
  break;
 }

 return VAR_18;
}
