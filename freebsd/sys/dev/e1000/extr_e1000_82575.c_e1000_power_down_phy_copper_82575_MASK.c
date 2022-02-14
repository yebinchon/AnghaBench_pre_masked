
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* check_reset_block ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;


 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;

__attribute__((used)) static void FUNC_3(struct e1000_hw *VAR_0)
{
 struct e1000_phy_info *VAR_1 = &VAR_0->phy;

 if (!(VAR_1->ops.check_reset_block))
  return;


 if (!(FUNC_0(VAR_0) || VAR_1->ops.check_reset_block(VAR_0)))
  FUNC_1(VAR_0);

 return;
}
