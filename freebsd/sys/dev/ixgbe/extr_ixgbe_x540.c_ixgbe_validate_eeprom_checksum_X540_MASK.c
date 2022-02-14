
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_7__ {int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int (* read ) (struct ixgbe_hw*,int ,scalar_t__*) ;int (* calc_checksum ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ eeprom; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*,int ) ;

s32 FUNC_8(struct ixgbe_hw *VAR_5,
     u16 *VAR_6)
{
 s32 VAR_7;
 u16 VAR_8;
 u16 VAR_9 = 0;

 FUNC_0("ixgbe_validate_eeprom_checksum_X540");





 VAR_7 = VAR_5->eeprom.ops.read(VAR_5, 0, &VAR_8);
 if (VAR_7) {
  FUNC_1("EEPROM read failed\n");
  return VAR_7;
 }

 if (VAR_5->mac.ops.acquire_swfw_sync(VAR_5, VAR_4))
  return VAR_3;

 VAR_7 = VAR_5->eeprom.ops.calc_checksum(VAR_5);
 if (VAR_7 < 0)
  goto out;

 VAR_8 = (u16)(VAR_7 & 0xffff);




 VAR_7 = FUNC_3(VAR_5, VAR_0,
      &VAR_9);
 if (VAR_7)
  goto out;




 if (VAR_9 != VAR_8) {
  FUNC_2(VAR_1,
        "Invalid EEPROM checksum");
  VAR_7 = VAR_2;
 }


 if (VAR_6)
  *VAR_6 = VAR_8;

out:
 VAR_5->mac.ops.release_swfw_sync(VAR_5, VAR_4);

 return VAR_7;
}
