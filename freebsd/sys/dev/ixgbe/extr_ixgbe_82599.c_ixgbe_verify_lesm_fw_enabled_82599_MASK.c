
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,scalar_t__,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,scalar_t__,int*) ;

bool FUNC_4(struct ixgbe_hw *VAR_7)
{
 bool VAR_8 = VAR_0;
 u16 VAR_9, VAR_10, VAR_11;
 s32 VAR_12;

 FUNC_0("ixgbe_verify_lesm_fw_enabled_82599");


 VAR_12 = VAR_7->eeprom.ops.read(VAR_7, VAR_4, &VAR_9);

 if ((VAR_12 != VAR_5) ||
     (VAR_9 == 0) || (VAR_9 == 0xFFFF))
  goto out;


 VAR_12 = VAR_7->eeprom.ops.read(VAR_7, (VAR_9 +
         VAR_1),
         &VAR_10);

 if ((VAR_12 != VAR_5) ||
     (VAR_10 == 0) || (VAR_10 == 0xFFFF))
  goto out;


 VAR_12 = VAR_7->eeprom.ops.read(VAR_7, (VAR_10 +
         VAR_2),
         &VAR_11);

 if ((VAR_12 == VAR_5) &&
     (VAR_11 & VAR_3))
  VAR_8 = VAR_6;

out:
 return VAR_8;
}
