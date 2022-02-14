
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* read ) (struct ixgbe_hw*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ eeprom; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int *) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_2,
      u16 *VAR_3)
{
 s32 VAR_4;

 FUNC_0("ixgbe_get_san_mac_addr_offset");





 VAR_4 = VAR_2->eeprom.ops.read(VAR_2, VAR_1,
          VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_0,
         "eeprom at offset %d failed",
         VAR_1);
 }

 return VAR_4;
}
