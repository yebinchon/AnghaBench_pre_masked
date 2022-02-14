
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int check_link; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ,struct ixgbe_hw*,int ) ;

s32 FUNC_1(struct ixgbe_hw *VAR_1, ixgbe_link_speed *VAR_2,
    bool *VAR_3)
{
 return FUNC_0(VAR_1, VAR_1->phy.ops.check_link, (VAR_1, VAR_2,
          VAR_3), VAR_0);
}
