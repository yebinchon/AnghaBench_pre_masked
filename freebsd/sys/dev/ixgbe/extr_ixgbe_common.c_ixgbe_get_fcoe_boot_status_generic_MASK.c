
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int,int*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_9, u16 *VAR_10)
{
 u16 VAR_11, VAR_12, VAR_13;
 s32 VAR_14;

 FUNC_0("ixgbe_get_fcoe_boot_status_generic");


 *VAR_10 = VAR_8;


 VAR_11 = VAR_0;
 VAR_14 = VAR_9->eeprom.ops.read(VAR_9, VAR_11, &VAR_12);
 if (VAR_14 != VAR_5)
  goto out;

 if (!(VAR_12 & VAR_1))
  goto out;


 VAR_14 = VAR_9->eeprom.ops.read(VAR_9, VAR_2, &VAR_11);
 if (VAR_14 != VAR_5)
  goto out;

 if ((VAR_11 == 0) || (VAR_11 == 0xFFFF))
  goto out;


 VAR_11 = VAR_11 + VAR_4;
 VAR_14 = VAR_9->eeprom.ops.read(VAR_9, VAR_11, &VAR_13);
 if (VAR_14 != VAR_5)
  goto out;

 if (VAR_13 & VAR_3)
  *VAR_10 = VAR_7;
 else
  *VAR_10 = VAR_6;

out:
 return VAR_14;
}
