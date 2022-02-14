
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* enable_relaxed_ordering ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;


 int FUNC_0 (struct ixgbe_hw*) ;

void FUNC_1(struct ixgbe_hw *VAR_0)
{
 if (VAR_0->mac.ops.enable_relaxed_ordering)
  VAR_0->mac.ops.enable_relaxed_ordering(VAR_0);
}
