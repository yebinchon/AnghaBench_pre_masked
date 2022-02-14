
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int set_fw_drv_ver; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ,struct ixgbe_hw*,int ) ;

s32 FUNC_1(struct ixgbe_hw *VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4,
    u8 VAR_5, u16 VAR_6, char *VAR_7)
{
 return FUNC_0(VAR_1, VAR_1->mac.ops.set_fw_drv_ver, (VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5, VAR_6, VAR_7),
          VAR_0);
}
