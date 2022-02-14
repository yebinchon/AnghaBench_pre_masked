
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
struct TYPE_9__ {int (* write ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_10__ {TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ func; } ;
struct TYPE_6__ {int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_7__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_5__ eeprom; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int,int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_4, u8 *VAR_5)
{
 s32 VAR_6;
 u16 VAR_7, VAR_8;
 u8 VAR_9;

 FUNC_0("ixgbe_set_san_mac_addr_generic");


 VAR_6 = FUNC_1(VAR_4, &VAR_8);
 if (VAR_6 || VAR_8 == 0 || VAR_8 == 0xFFFF)
  return VAR_0;


 VAR_4->mac.ops.set_lan_id(VAR_4);

 (VAR_4->bus.func) ? (VAR_8 += VAR_2) :
    (VAR_8 += VAR_1);

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  VAR_7 = (u16)((u16)(VAR_5[VAR_9 * 2 + 1]) << 8);
  VAR_7 |= (u16)(VAR_5[VAR_9 * 2]);
  VAR_4->eeprom.ops.write(VAR_4, VAR_8, VAR_7);
  VAR_8++;
 }

 return VAR_3;
}
