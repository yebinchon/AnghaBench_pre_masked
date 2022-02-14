
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_posted; int read_posted; } ;
struct ixgbe_mbx_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct ixgbe_hw *VAR_2)
{
 struct ixgbe_mbx_info *VAR_3 = &VAR_2->mbx;

 VAR_3->ops.read_posted = VAR_0;
 VAR_3->ops.write_posted = VAR_1;
}
