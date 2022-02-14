
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* restore_mdd_vf ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;

void FUNC_1(struct ixgbe_hw *VAR_0, u32 VAR_1)
{
 if (VAR_0->mac.ops.restore_mdd_vf)
  VAR_0->mac.ops.restore_mdd_vf(VAR_0, VAR_1);
}
