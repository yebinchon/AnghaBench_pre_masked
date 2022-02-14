
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* write_analog_reg8 ) (struct ixgbe_hw*,int ,int) ;int (* read_analog_reg8 ) (struct ixgbe_hw*,int ,int*) ;} ;
struct TYPE_8__ {int flags; scalar_t__ orig_link_settings_stored; int orig_autoc; TYPE_3__ ops; int perm_addr; } ;
struct TYPE_5__ {scalar_t__ (* init ) (struct ixgbe_hw*) ;int (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {scalar_t__ reset_disable; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*) ;
 int FUNC_9 (struct ixgbe_hw*) ;
 int FUNC_10 (struct ixgbe_hw*,int ) ;
 int FUNC_11 (struct ixgbe_hw*) ;
 int FUNC_12 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_13 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_14 (struct ixgbe_hw*,int ,int) ;
 int FUNC_15 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_16 (struct ixgbe_hw*,int ,int) ;
 int FUNC_17 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_18 (struct ixgbe_hw*,int ,int) ;
 int FUNC_19 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_20 (int) ;

__attribute__((used)) static s32 FUNC_21(struct ixgbe_hw *VAR_19)
{
 s32 VAR_20 = VAR_17;
 s32 VAR_21 = VAR_17;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u8 VAR_26;

 FUNC_0("ixgbe_reset_hw_82598");


 VAR_20 = VAR_19->mac.ops.stop_adapter(VAR_19);
 if (VAR_20 != VAR_17)
  goto reset_hw_out;






 VAR_19->mac.ops.read_analog_reg8(VAR_19, VAR_4, &VAR_26);
 if (VAR_26 & VAR_8) {

  VAR_19->mac.ops.read_analog_reg8(VAR_19, VAR_4,
          &VAR_26);
  VAR_26 &= ~VAR_8;
  VAR_19->mac.ops.write_analog_reg8(VAR_19, VAR_4,
           VAR_26);

  VAR_19->mac.ops.read_analog_reg8(VAR_19, VAR_1,
          &VAR_26);
  VAR_26 &= ~VAR_5;
  VAR_19->mac.ops.write_analog_reg8(VAR_19, VAR_1,
           VAR_26);

  VAR_19->mac.ops.read_analog_reg8(VAR_19, VAR_2,
          &VAR_26);
  VAR_26 &= ~VAR_6;
  VAR_19->mac.ops.write_analog_reg8(VAR_19, VAR_2,
           VAR_26);

  VAR_19->mac.ops.read_analog_reg8(VAR_19, VAR_3,
          &VAR_26);
  VAR_26 &= ~VAR_7;
  VAR_19->mac.ops.write_analog_reg8(VAR_19, VAR_3,
           VAR_26);
 }


 if (VAR_19->phy.reset_disable == VAR_0) {



  VAR_21 = VAR_19->phy.ops.init(VAR_19);
  if (VAR_21 == VAR_14)
   goto reset_hw_out;
  if (VAR_21 == VAR_13)
   goto mac_reset_top;

  VAR_19->phy.ops.reset(VAR_19);
 }

mac_reset_top:




 VAR_22 = FUNC_2(VAR_19, VAR_10) | VAR_11;
 FUNC_4(VAR_19, VAR_10, VAR_22);
 FUNC_3(VAR_19);


 for (VAR_24 = 0; VAR_24 < 10; VAR_24++) {
  FUNC_20(1);
  VAR_22 = FUNC_2(VAR_19, VAR_10);
  if (!(VAR_22 & VAR_11))
   break;
 }
 if (VAR_22 & VAR_11) {
  VAR_20 = VAR_12;
  FUNC_1("Reset polling failed to complete.\n");
 }

 FUNC_5(50);






 if (VAR_19->mac.flags & VAR_15) {
  VAR_19->mac.flags &= ~VAR_15;
  goto mac_reset_top;
 }

 VAR_23 = FUNC_2(VAR_19, VAR_16);
 VAR_23 &= ~((1 << 21) | (1 << 18) | (1 << 9) | (1 << 6));
 FUNC_4(VAR_19, VAR_16, VAR_23);






 VAR_25 = FUNC_2(VAR_19, VAR_9);
 if (VAR_19->mac.orig_link_settings_stored == VAR_0) {
  VAR_19->mac.orig_autoc = VAR_25;
  VAR_19->mac.orig_link_settings_stored = VAR_18;
 } else if (VAR_25 != VAR_19->mac.orig_autoc) {
  FUNC_4(VAR_19, VAR_9, VAR_19->mac.orig_autoc);
 }


 VAR_19->mac.ops.get_mac_addr(VAR_19, VAR_19->mac.perm_addr);





 VAR_19->mac.ops.init_rx_addrs(VAR_19);

reset_hw_out:
 if (VAR_21 != VAR_17)
  VAR_20 = VAR_21;

 return VAR_20;
}
