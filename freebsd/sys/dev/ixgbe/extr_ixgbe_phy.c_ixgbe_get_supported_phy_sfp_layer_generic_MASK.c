
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_3__ {int (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,int*) ;int (* identify_sfp ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {scalar_t__ sfp_type; int type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int*) ;

u64 FUNC_5(struct ixgbe_hw *VAR_15)
{
 u64 VAR_16 = VAR_6;
 u8 VAR_17 = 0;
 u8 VAR_18 = 0;

 FUNC_0("ixgbe_get_supported_phy_sfp_layer_generic");

 VAR_15->phy.ops.identify_sfp(VAR_15);
 if (VAR_15->phy.sfp_type == VAR_14)
  return VAR_16;

 switch (VAR_15->phy.type) {
 case 130:
 case 129:
 case 137:
  VAR_16 = VAR_5;
  break;
 case 132:
 case 135:
 case 139:
  VAR_16 = VAR_4;
  break;
 case 134:
 case 133:
 case 131:
 case 128:
  VAR_15->phy.ops.read_i2c_eeprom(VAR_15,
        VAR_12, &VAR_18);
  VAR_15->phy.ops.read_i2c_eeprom(VAR_15,
        VAR_9, &VAR_17);
  if (VAR_17 & VAR_8)
   VAR_16 = VAR_3;
  else if (VAR_17 & VAR_7)
   VAR_16 = VAR_2;
  else if (VAR_18 & VAR_11)
   VAR_16 = VAR_1;
  else if (VAR_18 & VAR_10)
   VAR_16 = VAR_0;
  break;
 case 138:
 case 136:
  VAR_15->phy.ops.read_i2c_eeprom(VAR_15,
        VAR_13, &VAR_17);
  if (VAR_17 & VAR_8)
   VAR_16 = VAR_3;
  else if (VAR_17 & VAR_7)
   VAR_16 = VAR_2;
  break;
 default:
  break;
 }

 return VAR_16;
}
