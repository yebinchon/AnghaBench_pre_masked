
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,scalar_t__*) ;} ;
struct TYPE_10__ {int sfp_type; scalar_t__ type; scalar_t__ id; TYPE_4__ ops; void* multispeed_fiber; void* sfp_setup_needed; } ;
struct TYPE_8__ {scalar_t__ lan_id; } ;
struct TYPE_6__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct ixgbe_hw {void* allow_unsupported_sfp; TYPE_5__ phy; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef enum ixgbe_sfp_type { ____Placeholder_ixgbe_sfp_type } ixgbe_sfp_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 void* VAR_28 ;
 int FUNC_3 (struct ixgbe_hw*,int*) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 void* VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 void* VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_14 (struct ixgbe_hw*,int ,scalar_t__*) ;

s32 FUNC_15(struct ixgbe_hw *VAR_43)
{
 s32 VAR_44 = VAR_2;
 u32 VAR_45 = 0;
 enum ixgbe_sfp_type VAR_46 = VAR_43->phy.sfp_type;
 u8 VAR_47 = 0;
 u8 VAR_48 = 0;
 u8 VAR_49 = 0;
 u8 VAR_50[3] = {0, 0, 0};
 u16 VAR_51 = 0;
 u8 VAR_52 = 0;
 u8 VAR_53 = 0;
 u8 VAR_54 = 0;
 bool VAR_55 = VAR_0;

 FUNC_0("ixgbe_identify_qsfp_module_generic");

 if (VAR_43->mac.ops.get_media_type(VAR_43) != VAR_29) {
  VAR_43->phy.sfp_type = VAR_40;
  VAR_44 = VAR_3;
  goto out;
 }


 VAR_43->mac.ops.set_lan_id(VAR_43);

 VAR_44 = VAR_43->phy.ops.read_i2c_eeprom(VAR_43, VAR_9,
          &VAR_47);

 if (VAR_44 != VAR_27)
  goto err_read_i2c_eeprom;

 if (VAR_47 != VAR_10) {
  VAR_43->phy.type = VAR_34;
  VAR_44 = VAR_4;
  goto out;
 }

 VAR_43->phy.id = VAR_47;

 VAR_44 = VAR_43->phy.ops.read_i2c_eeprom(VAR_43, VAR_11,
          &VAR_49);

 if (VAR_44 != VAR_27)
  goto err_read_i2c_eeprom;

 VAR_44 = VAR_43->phy.ops.read_i2c_eeprom(VAR_43, VAR_12,
          &VAR_48);

 if (VAR_44 != VAR_27)
  goto err_read_i2c_eeprom;

 if (VAR_49 & VAR_17) {
  VAR_43->phy.type = VAR_32;
  if (VAR_43->bus.lan_id == 0)
   VAR_43->phy.sfp_type = VAR_38;
  else
   VAR_43->phy.sfp_type = VAR_39;
 } else if (VAR_49 & (VAR_6 |
         VAR_5)) {
  if (VAR_43->bus.lan_id == 0)
   VAR_43->phy.sfp_type = VAR_41;
  else
   VAR_43->phy.sfp_type = VAR_42;
 } else {
  if (VAR_49 & VAR_16)
   VAR_55 = VAR_28;

  if (!VAR_55) {


   VAR_43->phy.ops.read_i2c_eeprom(VAR_43,
     VAR_14,
     &VAR_52);

   VAR_43->phy.ops.read_i2c_eeprom(VAR_43,
     VAR_13,
     &VAR_53);

   VAR_43->phy.ops.read_i2c_eeprom(VAR_43,
     VAR_18,
     &VAR_54);

   if ((VAR_52 ==
         VAR_15) &&
       (VAR_53 > 0) &&
       ((VAR_54 >> 4) ==
         VAR_19))
    VAR_55 = VAR_28;
  }

  if (VAR_55) {
   VAR_43->phy.type = VAR_30;
   if (VAR_43->bus.lan_id == 0)
    VAR_43->phy.sfp_type =
      VAR_36;
   else
    VAR_43->phy.sfp_type =
      VAR_37;
  } else {

   VAR_43->phy.type = VAR_34;
   VAR_44 = VAR_4;
   goto out;
  }
 }

 if (VAR_43->phy.sfp_type != VAR_46)
  VAR_43->phy.sfp_setup_needed = VAR_28;


 VAR_43->phy.multispeed_fiber = VAR_0;
 if (((VAR_48 & VAR_8) &&
    (VAR_49 & VAR_6)) ||
    ((VAR_48 & VAR_7) &&
    (VAR_49 & VAR_5)))
  VAR_43->phy.multispeed_fiber = VAR_28;


 if (VAR_49 & (VAR_6 |
         VAR_5)) {
  VAR_44 = VAR_43->phy.ops.read_i2c_eeprom(VAR_43,
         VAR_20,
         &VAR_50[0]);

  if (VAR_44 != VAR_27)
   goto err_read_i2c_eeprom;

  VAR_44 = VAR_43->phy.ops.read_i2c_eeprom(VAR_43,
         VAR_21,
         &VAR_50[1]);

  if (VAR_44 != VAR_27)
   goto err_read_i2c_eeprom;

  VAR_44 = VAR_43->phy.ops.read_i2c_eeprom(VAR_43,
         VAR_22,
         &VAR_50[2]);

  if (VAR_44 != VAR_27)
   goto err_read_i2c_eeprom;

  VAR_45 =
    ((VAR_50[0] << VAR_23) |
     (VAR_50[1] << VAR_24) |
     (VAR_50[2] << VAR_25));

  if (VAR_45 == VAR_26)
   VAR_43->phy.type = VAR_31;
  else
   VAR_43->phy.type = VAR_33;

  FUNC_3(VAR_43, &VAR_51);
  if (!(VAR_51 & VAR_1)) {

   if (VAR_43->phy.type == VAR_31) {
    VAR_44 = VAR_27;
   } else {
    if (VAR_43->allow_unsupported_sfp == VAR_28) {
     FUNC_2(VAR_43, "WARNING: Intel (R) Network Connections are quality tested using Intel (R) Ethernet Optics. Using untested modules is not supported and may cause unstable operation or damage to the module or the adapter. Intel Corporation is not responsible for any harm caused by using untested modules.\n");
     VAR_44 = VAR_27;
    } else {
     FUNC_1("QSFP module not supported\n");
     VAR_43->phy.type =
      VAR_34;
     VAR_44 = VAR_4;
    }
   }
  } else {
   VAR_44 = VAR_27;
  }
 }

out:
 return VAR_44;

err_read_i2c_eeprom:
 VAR_43->phy.sfp_type = VAR_40;
 VAR_43->phy.id = 0;
 VAR_43->phy.type = VAR_35;

 return VAR_3;
}
