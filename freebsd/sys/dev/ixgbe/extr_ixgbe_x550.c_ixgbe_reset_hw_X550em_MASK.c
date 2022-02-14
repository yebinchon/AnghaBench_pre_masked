
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;scalar_t__ (* setup_sfp ) (struct ixgbe_hw*) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;int (* check_link ) (struct ixgbe_hw*,int *,int*,void*) ;} ;
struct TYPE_8__ {int flags; int num_rar_entries; TYPE_3__ ops; int perm_addr; } ;
struct TYPE_5__ {scalar_t__ (* init ) (struct ixgbe_hw*) ;scalar_t__ (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int phy_semaphore_mask; scalar_t__ type; int sfp_setup_needed; TYPE_1__ ops; int reset_disable; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_4__ mac; int force_full_reset; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*) ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (struct ixgbe_hw*) ;
 int FUNC_10 (struct ixgbe_hw*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_14 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_15 (struct ixgbe_hw*) ;
 int FUNC_16 (struct ixgbe_hw*,int *,int*,void*) ;
 scalar_t__ FUNC_17 (struct ixgbe_hw*,int) ;
 int FUNC_18 (struct ixgbe_hw*,int) ;
 int FUNC_19 (struct ixgbe_hw*,int ) ;
 int FUNC_20 (struct ixgbe_hw*) ;
 int FUNC_21 (int) ;

s32 FUNC_22(struct ixgbe_hw *VAR_15)
{
 ixgbe_link_speed VAR_16;
 s32 VAR_17;
 u32 VAR_18 = 0;
 u32 VAR_19;
 bool VAR_20 = VAR_0;
 u32 VAR_21 = VAR_15->phy.phy_semaphore_mask;

 FUNC_0("ixgbe_reset_hw_X550em");


 VAR_17 = VAR_15->mac.ops.stop_adapter(VAR_15);
 if (VAR_17 != VAR_13) {
  FUNC_2("Failed to stop adapter, STATUS = %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_7(VAR_15);

 FUNC_9(VAR_15);


 VAR_17 = VAR_15->phy.ops.init(VAR_15);

 if (VAR_17)
  FUNC_2("Failed to initialize PHY ops, STATUS = %d\n",
     VAR_17);

 if (VAR_17 == VAR_10 ||
     VAR_17 == VAR_8) {
  FUNC_1("Returning from reset HW due to PHY init failure\n");
  return VAR_17;
 }


 if (VAR_15->phy.type == VAR_14) {
  VAR_17 = FUNC_8(VAR_15);
  if (VAR_17) {
   FUNC_2("Failed to start the external PHY, STATUS = %d\n",
      VAR_17);
   return VAR_17;
  }
 }


 if (VAR_15->phy.sfp_setup_needed) {
  VAR_17 = VAR_15->mac.ops.setup_sfp(VAR_15);
  VAR_15->phy.sfp_setup_needed = VAR_0;
 }

 if (VAR_17 == VAR_10)
  return VAR_17;


 if (!VAR_15->phy.reset_disable && VAR_15->phy.ops.reset) {
  if (VAR_15->phy.ops.reset(VAR_15) == VAR_7)
   return VAR_7;
 }

mac_reset_top:





 VAR_18 = VAR_2;
 if (!VAR_15->force_full_reset) {
  VAR_15->mac.ops.check_link(VAR_15, &VAR_16, &VAR_20, VAR_0);
  if (VAR_20)
   VAR_18 = VAR_3;
 }

 VAR_17 = VAR_15->mac.ops.acquire_swfw_sync(VAR_15, VAR_21);
 if (VAR_17 != VAR_13) {
  FUNC_3(VAR_6,
   "semaphore failed with %d", VAR_17);
  return VAR_11;
 }
 VAR_18 |= FUNC_4(VAR_15, VAR_1);
 FUNC_6(VAR_15, VAR_1, VAR_18);
 FUNC_5(VAR_15);
 VAR_15->mac.ops.release_swfw_sync(VAR_15, VAR_21);


 for (VAR_19 = 0; VAR_19 < 10; VAR_19++) {
  FUNC_21(1);
  VAR_18 = FUNC_4(VAR_15, VAR_1);
  if (!(VAR_18 & VAR_4))
   break;
 }

 if (VAR_18 & VAR_4) {
  VAR_17 = VAR_9;
  FUNC_1("Reset polling failed to complete.\n");
 }

 FUNC_11(50);





 if (VAR_15->mac.flags & VAR_12) {
  VAR_15->mac.flags &= ~VAR_12;
  goto mac_reset_top;
 }


 VAR_15->mac.ops.get_mac_addr(VAR_15, VAR_15->mac.perm_addr);





 VAR_15->mac.num_rar_entries = 128;
 VAR_15->mac.ops.init_rx_addrs(VAR_15);

 FUNC_9(VAR_15);

 if (VAR_15->device_id == VAR_5)
  FUNC_10(VAR_15);

 if (VAR_17 != VAR_13)
  FUNC_2("Reset HW failed, STATUS = %d\n", VAR_17);

 return VAR_17;
}
