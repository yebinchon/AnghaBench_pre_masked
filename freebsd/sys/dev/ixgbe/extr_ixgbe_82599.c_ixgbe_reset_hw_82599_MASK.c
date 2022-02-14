
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;scalar_t__ (* setup_sfp ) (struct ixgbe_hw*) ;scalar_t__ (* prot_autoc_write ) (struct ixgbe_hw*,int,void*) ;int (* get_wwn_prefix ) (struct ixgbe_hw*,int *,int *) ;int (* clear_vmdq ) (struct ixgbe_hw*,int,int ) ;int (* set_rar ) (struct ixgbe_hw*,int,int ,int ,int ) ;int (* get_san_mac_addr ) (struct ixgbe_hw*,int ) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* check_link ) (struct ixgbe_hw*,int *,int*,void*) ;} ;
struct TYPE_8__ {int flags; void* orig_link_settings_stored; int orig_autoc; int orig_autoc2; int num_rar_entries; int san_mac_rar_index; int wwpn_prefix; int wwnn_prefix; TYPE_3__ ops; int san_addr; int perm_addr; } ;
struct TYPE_5__ {scalar_t__ (* init ) (struct ixgbe_hw*) ;int (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int sfp_setup_needed; void* reset_disable; scalar_t__ multispeed_fiber; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; scalar_t__ wol_enabled; TYPE_2__ phy; int force_full_reset; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 void* VAR_0 ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 void* VAR_16 ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*) ;
 int FUNC_10 (struct ixgbe_hw*,int,int ,int ,int ) ;
 int FUNC_11 (struct ixgbe_hw*,int,int ) ;
 int FUNC_12 (struct ixgbe_hw*,int *,int *) ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_14 (struct ixgbe_hw*) ;
 int FUNC_15 (struct ixgbe_hw*) ;
 int FUNC_16 (struct ixgbe_hw*,int *,int*,void*) ;
 scalar_t__ FUNC_17 (struct ixgbe_hw*,int,void*) ;
 int FUNC_18 (struct ixgbe_hw*,int ) ;
 int FUNC_19 (struct ixgbe_hw*) ;
 int FUNC_20 (struct ixgbe_hw*,int ) ;
 int FUNC_21 (int) ;

s32 FUNC_22(struct ixgbe_hw *VAR_17)
{
 ixgbe_link_speed VAR_18;
 s32 VAR_19;
 u32 VAR_20 = 0;
 u32 VAR_21, VAR_22, VAR_23;
 u32 VAR_24;
 bool VAR_25 = VAR_0;

 FUNC_0("ixgbe_reset_hw_82599");


 VAR_19 = VAR_17->mac.ops.stop_adapter(VAR_17);
 if (VAR_19 != VAR_15)
  goto reset_hw_out;


 FUNC_5(VAR_17);




 VAR_19 = VAR_17->phy.ops.init(VAR_17);

 if (VAR_19 == VAR_12)
  goto reset_hw_out;


 if (VAR_17->phy.sfp_setup_needed) {
  VAR_19 = VAR_17->mac.ops.setup_sfp(VAR_17);
  VAR_17->phy.sfp_setup_needed = VAR_0;
 }

 if (VAR_19 == VAR_12)
  goto reset_hw_out;


 if (VAR_17->phy.reset_disable == VAR_0 && VAR_17->phy.ops.reset != ((void*)0))
  VAR_17->phy.ops.reset(VAR_17);


 VAR_24 = FUNC_2(VAR_17, VAR_1) & VAR_5;

mac_reset_top:






 VAR_20 = VAR_8;
 if (!VAR_17->force_full_reset) {
  VAR_17->mac.ops.check_link(VAR_17, &VAR_18, &VAR_25, VAR_0);
  if (VAR_25)
   VAR_20 = VAR_9;
 }

 VAR_20 |= FUNC_2(VAR_17, VAR_7);
 FUNC_4(VAR_17, VAR_7, VAR_20);
 FUNC_3(VAR_17);


 for (VAR_21 = 0; VAR_21 < 10; VAR_21++) {
  FUNC_21(1);
  VAR_20 = FUNC_2(VAR_17, VAR_7);
  if (!(VAR_20 & VAR_10))
   break;
 }

 if (VAR_20 & VAR_10) {
  VAR_19 = VAR_11;
  FUNC_1("Reset polling failed to complete.\n");
 }

 FUNC_8(50);






 if (VAR_17->mac.flags & VAR_13) {
  VAR_17->mac.flags &= ~VAR_13;
  goto mac_reset_top;
 }






 VAR_22 = FUNC_2(VAR_17, VAR_1);
 VAR_23 = FUNC_2(VAR_17, VAR_2);


 if (VAR_23 & VAR_3) {
  VAR_23 &= ~VAR_3;
  FUNC_4(VAR_17, VAR_2, VAR_23);
  FUNC_3(VAR_17);
 }

 if (VAR_17->mac.orig_link_settings_stored == VAR_0) {
  VAR_17->mac.orig_autoc = VAR_22;
  VAR_17->mac.orig_autoc2 = VAR_23;
  VAR_17->mac.orig_link_settings_stored = VAR_16;
 } else {







  if ((VAR_17->phy.multispeed_fiber && FUNC_6(VAR_17)) ||
      VAR_17->wol_enabled)
   VAR_17->mac.orig_autoc =
    (VAR_17->mac.orig_autoc & ~VAR_5) |
    VAR_24;

  if (VAR_22 != VAR_17->mac.orig_autoc) {
   VAR_19 = VAR_17->mac.ops.prot_autoc_write(VAR_17,
       VAR_17->mac.orig_autoc,
       VAR_0);
   if (VAR_19 != VAR_15)
    goto reset_hw_out;
  }

  if ((VAR_23 & VAR_4) !=
      (VAR_17->mac.orig_autoc2 & VAR_4)) {
   VAR_23 &= ~VAR_4;
   VAR_23 |= (VAR_17->mac.orig_autoc2 &
       VAR_4);
   FUNC_4(VAR_17, VAR_2, VAR_23);
  }
 }


 VAR_17->mac.ops.get_mac_addr(VAR_17, VAR_17->mac.perm_addr);






 VAR_17->mac.num_rar_entries = 128;
 VAR_17->mac.ops.init_rx_addrs(VAR_17);


 VAR_17->mac.ops.get_san_mac_addr(VAR_17, VAR_17->mac.san_addr);


 if (FUNC_7(VAR_17->mac.san_addr) == 0) {

  VAR_17->mac.san_mac_rar_index = VAR_17->mac.num_rar_entries - 1;

  VAR_17->mac.ops.set_rar(VAR_17, VAR_17->mac.san_mac_rar_index,
        VAR_17->mac.san_addr, 0, VAR_14);


  VAR_17->mac.ops.clear_vmdq(VAR_17, VAR_17->mac.san_mac_rar_index,
           VAR_6);


  VAR_17->mac.num_rar_entries--;
 }


 VAR_17->mac.ops.get_wwn_prefix(VAR_17, &VAR_17->mac.wwnn_prefix,
       &VAR_17->mac.wwpn_prefix);

reset_hw_out:
 return VAR_19;
}
