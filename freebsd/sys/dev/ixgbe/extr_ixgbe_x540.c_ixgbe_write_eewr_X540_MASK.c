
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_3, u16 VAR_4, u16 VAR_5)
{
 s32 VAR_6 = VAR_2;

 FUNC_0("ixgbe_write_eewr_X540");
 if (VAR_3->mac.ops.acquire_swfw_sync(VAR_3, VAR_1) ==
     VAR_2) {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
  VAR_3->mac.ops.release_swfw_sync(VAR_3, VAR_1);
 } else {
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
