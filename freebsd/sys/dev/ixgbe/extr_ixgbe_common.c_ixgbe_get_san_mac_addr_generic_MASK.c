
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_9__ {scalar_t__ (* read ) (struct ixgbe_hw*,int,int*) ;} ;
struct TYPE_10__ {TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ func; } ;
struct TYPE_6__ {int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_5__ eeprom; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int,int*) ;

s32 FUNC_5(struct ixgbe_hw *VAR_4, u8 *VAR_5)
{
 u16 VAR_6, VAR_7;
 u8 VAR_8;
 s32 VAR_9;

 FUNC_0("ixgbe_get_san_mac_addr_generic");





 VAR_9 = FUNC_2(VAR_4, &VAR_7);
 if (VAR_9 || VAR_7 == 0 || VAR_7 == 0xFFFF)
  goto san_mac_addr_out;


 VAR_4->mac.ops.set_lan_id(VAR_4);

 (VAR_4->bus.func) ? (VAR_7 += VAR_2) :
    (VAR_7 += VAR_1);
 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  VAR_9 = VAR_4->eeprom.ops.read(VAR_4, VAR_7,
           &VAR_6);
  if (VAR_9) {
   FUNC_1(VAR_0,
          "eeprom read at offset %d failed",
          VAR_7);
   goto san_mac_addr_out;
  }
  VAR_5[VAR_8 * 2] = (u8)(VAR_6);
  VAR_5[VAR_8 * 2 + 1] = (u8)(VAR_6 >> 8);
  VAR_7++;
 }
 return VAR_3;

san_mac_addr_out:




 for (VAR_8 = 0; VAR_8 < 6; VAR_8++)
  VAR_5[VAR_8] = 0xFF;
 return VAR_3;
}
