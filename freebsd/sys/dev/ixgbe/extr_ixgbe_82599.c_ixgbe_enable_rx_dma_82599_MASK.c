
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* enable_sec_rx_path ) (struct ixgbe_hw*) ;int (* disable_sec_rx_path ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;

s32 FUNC_5(struct ixgbe_hw *VAR_2, u32 VAR_3)
{

 FUNC_0("ixgbe_enable_rx_dma_82599");
 VAR_2->mac.ops.disable_sec_rx_path(VAR_2);

 if (VAR_3 & VAR_0)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);

 VAR_2->mac.ops.enable_sec_rx_path(VAR_2);

 return VAR_1;
}
