
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reset; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ,struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ VAR_3 ;

s32 FUNC_2(struct ixgbe_hw *VAR_4)
{
 s32 VAR_5 = VAR_2;

 if (VAR_4->phy.type == VAR_3) {
  if (FUNC_1(VAR_4) != VAR_2)
   VAR_5 = VAR_0;
 }

 if (VAR_5 == VAR_2) {
  VAR_5 = FUNC_0(VAR_4, VAR_4->phy.ops.reset, (VAR_4),
      VAR_1);
 }
 return VAR_5;
}
