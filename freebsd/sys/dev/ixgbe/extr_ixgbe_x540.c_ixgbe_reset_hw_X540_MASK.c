
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;int (* get_wwn_prefix ) (struct ixgbe_hw*,int *,int *) ;int (* clear_vmdq ) (struct ixgbe_hw*,int,int ) ;int (* set_rar ) (struct ixgbe_hw*,int,int ,int ,int ) ;int (* get_san_mac_addr ) (struct ixgbe_hw*,int ) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_6__ {int flags; int num_rar_entries; int san_mac_rar_index; int wwpn_prefix; int wwnn_prefix; TYPE_2__ ops; int san_addr; int perm_addr; } ;
struct TYPE_4__ {int phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int) ;
 int FUNC_12 (struct ixgbe_hw*,int) ;
 int FUNC_13 (struct ixgbe_hw*,int ) ;
 int FUNC_14 (struct ixgbe_hw*) ;
 int FUNC_15 (struct ixgbe_hw*,int ) ;
 int FUNC_16 (struct ixgbe_hw*,int,int ,int ,int ) ;
 int FUNC_17 (struct ixgbe_hw*,int,int ) ;
 int FUNC_18 (struct ixgbe_hw*,int *,int *) ;
 int FUNC_19 (int) ;

s32 FUNC_20(struct ixgbe_hw *VAR_12)
{
 s32 VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16 = VAR_12->phy.phy_semaphore_mask;

 FUNC_0("ixgbe_reset_hw_X540");


 VAR_13 = VAR_12->mac.ops.stop_adapter(VAR_12);
 if (VAR_13 != VAR_11)
  goto reset_hw_out;


 FUNC_7(VAR_12);

mac_reset_top:
 VAR_13 = VAR_12->mac.ops.acquire_swfw_sync(VAR_12, VAR_16);
 if (VAR_13 != VAR_11) {
  FUNC_2(VAR_4,
   "semaphore failed with %d", VAR_13);
  return VAR_7;
 }
 VAR_14 = VAR_2;
 VAR_14 |= FUNC_3(VAR_12, VAR_1);
 FUNC_6(VAR_12, VAR_1, VAR_14);
 FUNC_5(VAR_12);
 VAR_12->mac.ops.release_swfw_sync(VAR_12, VAR_16);


 for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
  FUNC_19(1);
  VAR_14 = FUNC_3(VAR_12, VAR_1);
  if (!(VAR_14 & VAR_3))
   break;
 }

 if (VAR_14 & VAR_3) {
  VAR_13 = VAR_6;
  FUNC_1(VAR_5,
        "Reset polling failed to complete.\n");
 }
 FUNC_9(100);






 if (VAR_12->mac.flags & VAR_8) {
  VAR_12->mac.flags &= ~VAR_8;
  goto mac_reset_top;
 }


 FUNC_6(VAR_12, FUNC_4(0), 384 << VAR_10);


 VAR_12->mac.ops.get_mac_addr(VAR_12, VAR_12->mac.perm_addr);






 VAR_12->mac.num_rar_entries = 128;
 VAR_12->mac.ops.init_rx_addrs(VAR_12);


 VAR_12->mac.ops.get_san_mac_addr(VAR_12, VAR_12->mac.san_addr);


 if (FUNC_8(VAR_12->mac.san_addr) == 0) {

  VAR_12->mac.san_mac_rar_index = VAR_12->mac.num_rar_entries - 1;

  VAR_12->mac.ops.set_rar(VAR_12, VAR_12->mac.san_mac_rar_index,
        VAR_12->mac.san_addr, 0, VAR_9);


  VAR_12->mac.ops.clear_vmdq(VAR_12, VAR_12->mac.san_mac_rar_index,
           VAR_0);


  VAR_12->mac.num_rar_entries--;
 }


 VAR_12->mac.ops.get_wwn_prefix(VAR_12, &VAR_12->mac.wwnn_prefix,
       &VAR_12->mac.wwpn_prefix);

reset_hw_out:
 return VAR_13;
}
