
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ixgbe_nvm_version {int oem_major; int oem_minor; int oem_release; int oem_valid; } ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;


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
 int FUNC_0 (struct ixgbe_hw*,int,int*) ;
 int FUNC_1 (struct ixgbe_hw*,int,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int,int*) ;
 int FUNC_4 (struct ixgbe_hw*,int,int*) ;

void FUNC_5(struct ixgbe_hw *VAR_12,
    struct ixgbe_nvm_version *VAR_13)
{
 u16 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_13->oem_valid = VAR_0;
 VAR_12->eeprom.ops.read(VAR_12, VAR_7, &VAR_18);


 if (VAR_18 == 0x0 && VAR_18 == VAR_1)
  return;


 VAR_12->eeprom.ops.read(VAR_12, VAR_18, &VAR_16);
 VAR_12->eeprom.ops.read(VAR_12, VAR_18 + VAR_3, &VAR_17);


 if (VAR_16 != VAR_4 ||
     (VAR_17 & VAR_2) != 0x0)
  return;

 VAR_12->eeprom.ops.read(VAR_12, VAR_18 + VAR_6, &VAR_15);
 VAR_12->eeprom.ops.read(VAR_12, VAR_18 + VAR_5, &VAR_14);


 if ((VAR_14 | VAR_15) == 0x0 ||
     VAR_14 == VAR_8 || VAR_15 == VAR_8)
  return;

 VAR_13->oem_major = VAR_15 >> VAR_10;
 VAR_13->oem_minor = VAR_15 & VAR_9;
 VAR_13->oem_release = VAR_14;
 VAR_13->oem_valid = VAR_11;
}
