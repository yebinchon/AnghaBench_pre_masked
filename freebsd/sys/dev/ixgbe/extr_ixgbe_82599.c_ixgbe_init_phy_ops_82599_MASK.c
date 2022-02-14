
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ (* identify ) (struct ixgbe_hw*) ;int get_firmware_version; int check_link; int setup_link; int * reset; int write_i2c_byte; int read_i2c_byte; } ;
struct ixgbe_phy_info {scalar_t__ sfp_type; int type; TYPE_2__ ops; int qsfp_shared_i2c_bus; } ;
struct TYPE_3__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int get_link_capabilities; int setup_link; } ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*) ;

s32 FUNC_7(struct ixgbe_hw *VAR_19)
{
 struct ixgbe_mac_info *VAR_20 = &VAR_19->mac;
 struct ixgbe_phy_info *VAR_21 = &VAR_19->phy;
 s32 VAR_22 = VAR_8;
 u32 VAR_23;

 FUNC_0("ixgbe_init_phy_ops_82599");

 if (VAR_19->device_id == VAR_0) {

  VAR_19->phy.qsfp_shared_i2c_bus = VAR_9;


  VAR_23 = FUNC_1(VAR_19, VAR_2);
  VAR_23 |= VAR_4;
  VAR_23 &= ~VAR_6;
  VAR_23 &= ~VAR_3;
  VAR_23 &= ~VAR_5;
  VAR_23 &= ~VAR_7;
  FUNC_3(VAR_19, VAR_2, VAR_23);
  FUNC_2(VAR_19);

  VAR_21->ops.read_i2c_byte = VAR_14;
  VAR_21->ops.write_i2c_byte = VAR_18;
 }

 VAR_22 = VAR_21->ops.identify(VAR_19);
 if (VAR_22 == VAR_1)
  goto init_phy_ops_out;


 FUNC_4(VAR_19);
 if (VAR_19->phy.sfp_type != VAR_17)
  VAR_19->phy.ops.reset = ((void*)0);


 if (VAR_20->ops.get_media_type(VAR_19) == VAR_13) {
  VAR_20->ops.setup_link = VAR_15;
  VAR_20->ops.get_link_capabilities =
      VAR_11;
 }


 switch (VAR_19->phy.type) {
 case 128:
  VAR_21->ops.setup_link = VAR_16;
  VAR_21->ops.check_link = VAR_10;
  VAR_21->ops.get_firmware_version =
        VAR_12;
  break;
 default:
  break;
 }
init_phy_ops_out:
 return VAR_22;
}
