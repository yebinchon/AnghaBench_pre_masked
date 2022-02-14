
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int (* read ) (struct ixgbe_hw*,int ,scalar_t__*) ;int (* calc_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_5 (struct ixgbe_hw*) ;

s32 FUNC_6(struct ixgbe_hw *VAR_3, u16 *VAR_4)
{
 s32 VAR_5;
 u16 VAR_6;
 u16 VAR_7 = 0;

 FUNC_0("ixgbe_validate_eeprom_checksum_X550");





 VAR_5 = VAR_3->eeprom.ops.read(VAR_3, 0, &VAR_6);
 if (VAR_5) {
  FUNC_1("EEPROM read failed\n");
  return VAR_5;
 }

 VAR_5 = VAR_3->eeprom.ops.calc_checksum(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = (u16)(VAR_5 & 0xffff);

 VAR_5 = FUNC_3(VAR_3, VAR_0,
        &VAR_7);
 if (VAR_5)
  return VAR_5;




 if (VAR_7 != VAR_6) {
  VAR_5 = VAR_2;
  FUNC_2(VAR_1,
        "Invalid EEPROM checksum");
 }


 if (VAR_4)
  *VAR_4 = VAR_6;

 return VAR_5;
}
