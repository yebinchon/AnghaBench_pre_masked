
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {scalar_t__ (* read ) (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ sfp_type; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_3__ eeprom; TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,scalar_t__,scalar_t__*) ;

s32 FUNC_7(struct ixgbe_hw *VAR_22,
     u16 *VAR_23,
     u16 *VAR_24)
{
 u16 VAR_25;
 u16 VAR_26 = VAR_22->phy.sfp_type;

 FUNC_0("ixgbe_get_sfp_init_sequence_offsets");

 if (VAR_22->phy.sfp_type == VAR_21)
  return VAR_4;

 if (VAR_22->phy.sfp_type == VAR_18)
  return VAR_3;

 if ((VAR_22->device_id == VAR_0) &&
     (VAR_22->phy.sfp_type == VAR_17))
  return VAR_4;





 if (VAR_26 == VAR_15 ||
     VAR_26 == VAR_11 ||
     VAR_26 == VAR_9 ||
     VAR_26 == VAR_13)
  VAR_26 = VAR_19;
 else if (VAR_26 == VAR_16 ||
   VAR_26 == VAR_12 ||
   VAR_26 == VAR_10 ||
   VAR_26 == VAR_14)
  VAR_26 = VAR_20;


 if (VAR_22->eeprom.ops.read(VAR_22, VAR_7, VAR_23)) {
  FUNC_2(VAR_1,
         "eeprom read at offset %d failed",
         VAR_7);
  return VAR_5;
 }

 if ((!*VAR_23) || (*VAR_23 == 0xFFFF))
  return VAR_5;


 (*VAR_23)++;





 if (VAR_22->eeprom.ops.read(VAR_22, *VAR_23, &VAR_25))
  goto err_phy;

 while (VAR_25 != VAR_6) {
  if (VAR_25 == VAR_26) {
   (*VAR_23)++;
   if (VAR_22->eeprom.ops.read(VAR_22, *VAR_23, VAR_24))
    goto err_phy;
   if ((!*VAR_24) || (*VAR_24 == 0xFFFF)) {
    FUNC_1("SFP+ module not supported\n");
    return VAR_4;
   } else {
    break;
   }
  } else {
   (*VAR_23) += 2;
   if (VAR_22->eeprom.ops.read(VAR_22, *VAR_23, &VAR_25))
    goto err_phy;
  }
 }

 if (VAR_25 == VAR_6) {
  FUNC_1("No matching SFP+ module found\n");
  return VAR_4;
 }

 return VAR_8;

err_phy:
 FUNC_2(VAR_1,
        "eeprom read at offset %d failed", *VAR_23);
 return VAR_2;
}
