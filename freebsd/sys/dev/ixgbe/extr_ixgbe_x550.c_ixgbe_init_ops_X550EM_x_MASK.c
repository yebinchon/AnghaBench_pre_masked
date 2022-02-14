
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * init_led_link_act; int * setup_eee; int * setup_fc; int release_swfw_sync; int acquire_swfw_sync; int write_iosf_sb_reg; int read_iosf_sb_reg; } ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_3__ {int write_link_unlocked; int write_link; int read_link_unlocked; int read_link; } ;
struct ixgbe_link_info {int addr; TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; struct ixgbe_link_info link; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

s32 FUNC_2(struct ixgbe_hw *VAR_10)
{
 struct ixgbe_mac_info *VAR_11 = &VAR_10->mac;
 struct ixgbe_link_info *VAR_12 = &VAR_10->link;
 s32 VAR_13;

 FUNC_0("ixgbe_init_ops_X550EM_x");


 VAR_13 = FUNC_1(VAR_10);

 VAR_11->ops.read_iosf_sb_reg = VAR_5;
 VAR_11->ops.write_iosf_sb_reg = VAR_9;
 VAR_11->ops.acquire_swfw_sync = VAR_2;
 VAR_11->ops.release_swfw_sync = VAR_6;
 VAR_12->ops.read_link = VAR_3;
 VAR_12->ops.read_link_unlocked = VAR_4;
 VAR_12->ops.write_link = VAR_7;
 VAR_12->ops.write_link_unlocked =
          VAR_8;
 VAR_12->addr = VAR_0;

 if (VAR_10->device_id == VAR_1) {
  VAR_11->ops.setup_fc = ((void*)0);
  VAR_11->ops.setup_eee = ((void*)0);
  VAR_11->ops.init_led_link_act = ((void*)0);
 }

 return VAR_13;
}
