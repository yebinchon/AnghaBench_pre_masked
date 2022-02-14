
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,int ,scalar_t__*) ;int (* calc_checksum ) (struct ixgbe_hw*) ;int (* write ) (struct ixgbe_hw*,int ,scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;

s32 FUNC_5(struct ixgbe_hw *VAR_1)
{
 s32 VAR_2;
 u16 VAR_3;

 FUNC_0("ixgbe_update_eeprom_checksum_generic");





 VAR_2 = VAR_1->eeprom.ops.read(VAR_1, 0, &VAR_3);
 if (VAR_2) {
  FUNC_1("EEPROM read failed\n");
  return VAR_2;
 }

 VAR_2 = VAR_1->eeprom.ops.calc_checksum(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = (u16)(VAR_2 & 0xffff);

 VAR_2 = VAR_1->eeprom.ops.write(VAR_1, VAR_0, VAR_3);

 return VAR_2;
}
