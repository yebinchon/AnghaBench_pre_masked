
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* setup_link ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; scalar_t__ eee_speeds_advertised; scalar_t__ eee_speeds_supported; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_1, bool VAR_2)
{
 if (!!VAR_1->phy.eee_speeds_advertised == VAR_2)
  return VAR_0;
 if (VAR_2)
  VAR_1->phy.eee_speeds_advertised = VAR_1->phy.eee_speeds_supported;
 else
  VAR_1->phy.eee_speeds_advertised = 0;
 return VAR_1->phy.ops.setup_link(VAR_1);
}
