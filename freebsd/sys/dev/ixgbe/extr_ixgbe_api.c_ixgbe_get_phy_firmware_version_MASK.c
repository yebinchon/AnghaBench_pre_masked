
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int get_firmware_version; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ,struct ixgbe_hw*,int ) ;

s32 FUNC_1(struct ixgbe_hw *VAR_2, u16 *VAR_3)
{
 s32 VAR_4 = VAR_1;

 VAR_4 = FUNC_0(VAR_2, VAR_2->phy.ops.get_firmware_version,
     (VAR_2, VAR_3),
     VAR_0);
 return VAR_4;
}
