
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int (* identify_sfp ) (struct ixgbe_hw*) ;int reset; int get_firmware_version; int check_link; int setup_link; int (* identify ) (struct ixgbe_hw*) ;} ;
struct ixgbe_phy_info {int type; int sfp_type; TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int get_link_capabilities; int setup_link; } ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int *,int *) ;
 scalar_t__ VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;

s32 FUNC_5(struct ixgbe_hw *VAR_10)
{
 struct ixgbe_mac_info *VAR_11 = &VAR_10->mac;
 struct ixgbe_phy_info *VAR_12 = &VAR_10->phy;
 s32 VAR_13 = VAR_1;
 u16 VAR_14, VAR_15;

 FUNC_0("ixgbe_init_phy_ops_82598");


 VAR_12->ops.identify(VAR_10);


 if (VAR_11->ops.get_media_type(VAR_10) == VAR_5) {
  VAR_11->ops.setup_link = VAR_7;
  VAR_11->ops.get_link_capabilities =
    VAR_3;
 }

 switch (VAR_10->phy.type) {
 case 128:
  VAR_12->ops.setup_link = VAR_8;
  VAR_12->ops.check_link = VAR_2;
  VAR_12->ops.get_firmware_version =
     VAR_4;
  break;
 case 129:
  VAR_12->ops.reset = VAR_6;


  VAR_13 = VAR_12->ops.identify_sfp(VAR_10);
  if (VAR_13 != VAR_1)
   goto out;
  else if (VAR_10->phy.sfp_type == VAR_9) {
   VAR_13 = VAR_0;
   goto out;
  }


  VAR_13 = FUNC_1(VAR_10,
             &VAR_14,
             &VAR_15);
  if (VAR_13 != VAR_1) {
   VAR_13 = VAR_0;
   goto out;
  }
  break;
 default:
  break;
 }

out:
 return VAR_13;
}
