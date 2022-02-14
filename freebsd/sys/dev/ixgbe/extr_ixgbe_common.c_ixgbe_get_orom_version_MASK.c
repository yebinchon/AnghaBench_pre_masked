
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ixgbe_nvm_version {int or_major; int or_build; int or_patch; int or_valid; } ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,scalar_t__,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ixgbe_hw*,scalar_t__,int*) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__,int*) ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__,int*) ;

void FUNC_3(struct ixgbe_hw *VAR_9,
       struct ixgbe_nvm_version *VAR_10)
{
 u16 VAR_11, VAR_12, VAR_13;

 VAR_10->or_valid = VAR_0;

 VAR_9->eeprom.ops.read(VAR_9, VAR_4, &VAR_11);


 if ((VAR_11 == 0x0) || (VAR_11 == VAR_1))
  return;

 VAR_9->eeprom.ops.read(VAR_9, VAR_11 + VAR_2, &VAR_12);
 VAR_9->eeprom.ops.read(VAR_9, VAR_11 + VAR_3, &VAR_13);


 if ((VAR_13 | VAR_12) == 0x0 ||
     VAR_13 == VAR_7 ||
     VAR_12 == VAR_7)
  return;

 VAR_10->or_valid = VAR_8;
 VAR_10->or_major = VAR_13 >> VAR_6;
 VAR_10->or_build = (VAR_13 << VAR_6) |
       (VAR_12 >> VAR_6);
 VAR_10->or_patch = VAR_12 & VAR_5;
}
