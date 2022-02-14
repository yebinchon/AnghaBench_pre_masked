
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
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,scalar_t__*) ;} ;
struct TYPE_10__ {int sfp_type; scalar_t__ type; scalar_t__ id; TYPE_4__ ops; scalar_t__ multispeed_fiber; scalar_t__ sfp_setup_needed; } ;
struct TYPE_7__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_6__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {scalar_t__ allow_unsupported_sfp; TYPE_5__ phy; TYPE_3__ mac; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;
typedef enum ixgbe_sfp_type { ____Placeholder_ixgbe_sfp_type } ixgbe_sfp_type ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;

 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;



 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_3 (struct ixgbe_hw*,int*) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 void* VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 void* VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 void* VAR_56 ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*,int ,scalar_t__*) ;

s32 FUNC_14(struct ixgbe_hw *VAR_57)
{
 s32 VAR_58 = VAR_2;
 u32 VAR_59 = 0;
 enum ixgbe_sfp_type VAR_60 = VAR_57->phy.sfp_type;
 u8 VAR_61 = 0;
 u8 VAR_62 = 0;
 u8 VAR_63 = 0;
 u8 VAR_64[3] = {0, 0, 0};
 u8 VAR_65 = 0;
 u8 VAR_66 = 0;
 u16 VAR_67 = 0;

 FUNC_0("ixgbe_identify_sfp_module_generic");

 if (VAR_57->mac.ops.get_media_type(VAR_57) != VAR_28) {
  VAR_57->phy.sfp_type = VAR_52;
  VAR_58 = VAR_3;
  goto out;
 }


 VAR_57->mac.ops.set_lan_id(VAR_57);

 VAR_58 = VAR_57->phy.ops.read_i2c_eeprom(VAR_57,
          VAR_17,
          &VAR_61);

 if (VAR_58 != VAR_25)
  goto err_read_i2c_eeprom;

 if (VAR_61 != VAR_18) {
  VAR_57->phy.type = VAR_38;
  VAR_58 = VAR_4;
 } else {
  VAR_58 = VAR_57->phy.ops.read_i2c_eeprom(VAR_57,
           VAR_11,
           &VAR_62);

  if (VAR_58 != VAR_25)
   goto err_read_i2c_eeprom;

  VAR_58 = VAR_57->phy.ops.read_i2c_eeprom(VAR_57,
           VAR_7,
           &VAR_63);

  if (VAR_58 != VAR_25)
   goto err_read_i2c_eeprom;
  VAR_58 = VAR_57->phy.ops.read_i2c_eeprom(VAR_57,
           VAR_13,
           &VAR_65);

  if (VAR_58 != VAR_25)
   goto err_read_i2c_eeprom;
  if (VAR_57->mac.type == VAR_27) {
   if (VAR_65 & VAR_15)
    VAR_57->phy.sfp_type = VAR_48;
   else if (VAR_63 & VAR_6)
    VAR_57->phy.sfp_type = VAR_53;
   else if (VAR_63 & VAR_5)
    VAR_57->phy.sfp_type = VAR_51;
   else
    VAR_57->phy.sfp_type = VAR_56;
  } else {
   if (VAR_65 & VAR_15) {
    if (VAR_57->bus.lan_id == 0)
     VAR_57->phy.sfp_type =
           VAR_49;
    else
     VAR_57->phy.sfp_type =
           VAR_50;
   } else if (VAR_65 & VAR_14) {
    VAR_57->phy.ops.read_i2c_eeprom(
      VAR_57, VAR_12,
      &VAR_66);
    if (VAR_66 &
        VAR_16) {
     if (VAR_57->bus.lan_id == 0)
      VAR_57->phy.sfp_type =
      VAR_46;
     else
      VAR_57->phy.sfp_type =
      VAR_47;
    } else {
     VAR_57->phy.sfp_type =
       VAR_56;
    }
   } else if (VAR_63 &
       (VAR_6 |
        VAR_5)) {
    if (VAR_57->bus.lan_id == 0)
     VAR_57->phy.sfp_type =
            VAR_54;
    else
     VAR_57->phy.sfp_type =
            VAR_55;
   } else if (VAR_62 & VAR_10) {
    if (VAR_57->bus.lan_id == 0)
     VAR_57->phy.sfp_type =
      VAR_40;
    else
     VAR_57->phy.sfp_type =
      VAR_41;
   } else if (VAR_62 & VAR_9) {
    if (VAR_57->bus.lan_id == 0)
     VAR_57->phy.sfp_type =
      VAR_44;
    else
     VAR_57->phy.sfp_type =
      VAR_45;
   } else if (VAR_62 & VAR_8) {
    if (VAR_57->bus.lan_id == 0)
     VAR_57->phy.sfp_type =
      VAR_42;
    else
     VAR_57->phy.sfp_type =
      VAR_43;
   } else {
    VAR_57->phy.sfp_type = VAR_56;
   }
  }

  if (VAR_57->phy.sfp_type != VAR_60)
   VAR_57->phy.sfp_setup_needed = VAR_26;


  VAR_57->phy.multispeed_fiber = VAR_0;
  if (((VAR_62 & VAR_9) &&
     (VAR_63 & VAR_6)) ||
     ((VAR_62 & VAR_8) &&
     (VAR_63 & VAR_5)))
   VAR_57->phy.multispeed_fiber = VAR_26;


  if (VAR_57->phy.type != VAR_29) {
   VAR_57->phy.id = VAR_61;
   VAR_58 = VAR_57->phy.ops.read_i2c_eeprom(VAR_57,
          VAR_19,
          &VAR_64[0]);

   if (VAR_58 != VAR_25)
    goto err_read_i2c_eeprom;

   VAR_58 = VAR_57->phy.ops.read_i2c_eeprom(VAR_57,
          VAR_21,
          &VAR_64[1]);

   if (VAR_58 != VAR_25)
    goto err_read_i2c_eeprom;

   VAR_58 = VAR_57->phy.ops.read_i2c_eeprom(VAR_57,
          VAR_23,
          &VAR_64[2]);

   if (VAR_58 != VAR_25)
    goto err_read_i2c_eeprom;

   VAR_59 =
     ((VAR_64[0] << VAR_20) |
      (VAR_64[1] << VAR_22) |
      (VAR_64[2] << VAR_24));

   switch (VAR_59) {
   case 128:
    if (VAR_65 & VAR_15)
     VAR_57->phy.type =
          VAR_35;
    break;
   case 130:
    if (VAR_65 & VAR_14)
     VAR_57->phy.type = VAR_33;
    else
     VAR_57->phy.type = VAR_32;
    break;
   case 131:
    VAR_57->phy.type = VAR_31;
    break;
   case 129:
    VAR_57->phy.type = VAR_34;
    break;
   default:
    VAR_57->phy.type = VAR_37;
    break;
   }
  }


  if (VAR_65 & (VAR_15 |
   VAR_14)) {
   if (VAR_65 & VAR_15)
    VAR_57->phy.type = VAR_36;
   else if (VAR_65 & VAR_14)
    VAR_57->phy.type = VAR_30;
   VAR_58 = VAR_25;
   goto out;
  }


  if (VAR_63 == 0 &&
      !(VAR_57->phy.sfp_type == VAR_41 ||
        VAR_57->phy.sfp_type == VAR_40 ||
        VAR_57->phy.sfp_type == VAR_42 ||
        VAR_57->phy.sfp_type == VAR_43 ||
        VAR_57->phy.sfp_type == VAR_44 ||
        VAR_57->phy.sfp_type == VAR_45)) {
   VAR_57->phy.type = VAR_38;
   VAR_58 = VAR_4;
   goto out;
  }


  if (VAR_57->mac.type == VAR_27) {
   VAR_58 = VAR_25;
   goto out;
  }

  FUNC_3(VAR_57, &VAR_67);
  if (!(VAR_67 & VAR_1) &&
      !(VAR_57->phy.sfp_type == VAR_40 ||
        VAR_57->phy.sfp_type == VAR_41 ||
        VAR_57->phy.sfp_type == VAR_42 ||
        VAR_57->phy.sfp_type == VAR_43 ||
        VAR_57->phy.sfp_type == VAR_44 ||
        VAR_57->phy.sfp_type == VAR_45)) {

   if (VAR_57->phy.type == VAR_34) {
    VAR_58 = VAR_25;
   } else {
    if (VAR_57->allow_unsupported_sfp == VAR_26) {
     FUNC_2(VAR_57, "WARNING: Intel (R) Network Connections are quality tested using Intel (R) Ethernet Optics. Using untested modules is not supported and may cause unstable operation or damage to the module or the adapter. Intel Corporation is not responsible for any harm caused by using untested modules.\n");
     VAR_58 = VAR_25;
    } else {
     FUNC_1("SFP+ module not supported\n");
     VAR_57->phy.type =
      VAR_38;
     VAR_58 = VAR_4;
    }
   }
  } else {
   VAR_58 = VAR_25;
  }
 }

out:
 return VAR_58;

err_read_i2c_eeprom:
 VAR_57->phy.sfp_type = VAR_52;
 if (VAR_57->phy.type != VAR_29) {
  VAR_57->phy.id = 0;
  VAR_57->phy.type = VAR_39;
 }
 return VAR_3;
}
