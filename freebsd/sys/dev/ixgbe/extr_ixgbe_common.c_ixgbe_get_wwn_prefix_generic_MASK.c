
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
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int,int*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int,int*) ;

s32 FUNC_6(struct ixgbe_hw *VAR_7, u16 *VAR_8,
     u16 *VAR_9)
{
 u16 VAR_10, VAR_11;
 u16 VAR_12;

 FUNC_0("ixgbe_get_wwn_prefix_generic");


 *VAR_8 = 0xFFFF;
 *VAR_9 = 0xFFFF;


 VAR_10 = VAR_0;
 if (VAR_7->eeprom.ops.read(VAR_7, VAR_10, &VAR_12))
  goto wwn_prefix_err;

 if ((VAR_12 == 0) ||
     (VAR_12 == 0xFFFF))
  goto wwn_prefix_out;


 VAR_10 = VAR_12 + VAR_2;
 if (VAR_7->eeprom.ops.read(VAR_7, VAR_10, &VAR_11))
  goto wwn_prefix_err;
 if (!(VAR_11 & VAR_1))
  goto wwn_prefix_out;


 VAR_10 = VAR_12 + VAR_3;
 if (VAR_7->eeprom.ops.read(VAR_7, VAR_10, VAR_8)) {
  FUNC_1(VAR_5,
         "eeprom read at offset %d failed", VAR_10);
 }

 VAR_10 = VAR_12 + VAR_4;
 if (VAR_7->eeprom.ops.read(VAR_7, VAR_10, VAR_9))
  goto wwn_prefix_err;

wwn_prefix_out:
 return VAR_6;

wwn_prefix_err:
 FUNC_1(VAR_5,
        "eeprom read at offset %d failed", VAR_10);
 return VAR_6;
}
