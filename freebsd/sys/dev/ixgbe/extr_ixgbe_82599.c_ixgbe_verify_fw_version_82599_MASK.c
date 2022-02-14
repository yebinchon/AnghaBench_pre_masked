
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {scalar_t__ (* read ) (struct ixgbe_hw*,scalar_t__,int*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct ixgbe_hw {TYPE_3__ eeprom; TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,scalar_t__,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,scalar_t__,int*) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_7)
{
 s32 VAR_8 = VAR_1;
 u16 VAR_9, VAR_10;
 u16 VAR_11;

 FUNC_0("ixgbe_verify_fw_version_82599");


 if (VAR_7->phy.media_type != VAR_6) {
  VAR_8 = VAR_5;
  goto fw_version_out;
 }


 if (VAR_7->eeprom.ops.read(VAR_7, VAR_4, &VAR_9)) {
  FUNC_1(VAR_0,
         "eeprom read at offset %d failed", VAR_4);
  return VAR_1;
 }

 if ((VAR_9 == 0) || (VAR_9 == 0xFFFF))
  goto fw_version_out;


 if (VAR_7->eeprom.ops.read(VAR_7, (VAR_9 +
     VAR_2),
     &VAR_10)) {
  FUNC_1(VAR_0,
         "eeprom read at offset %d failed",
         VAR_9 +
         VAR_2);
  return VAR_1;
 }

 if ((VAR_10 == 0) || (VAR_10 == 0xFFFF))
  goto fw_version_out;


 if (VAR_7->eeprom.ops.read(VAR_7, (VAR_10 +
       VAR_3), &VAR_11)) {
  FUNC_1(VAR_0,
         "eeprom read at offset %d failed",
         VAR_10 + VAR_3);
  return VAR_1;
 }

 if (VAR_11 > 0x5)
  VAR_8 = VAR_5;

fw_version_out:
 return VAR_8;
}
