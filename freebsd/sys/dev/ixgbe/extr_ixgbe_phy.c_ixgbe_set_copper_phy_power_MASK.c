
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* write_reg ) (struct ixgbe_hw*,int ,int ,int ) ;scalar_t__ (* read_reg ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_3, bool VAR_4)
{
 u32 VAR_5;
 u16 VAR_6;

 if (!VAR_4 && FUNC_1(VAR_3))
  return 0;

 VAR_5 = VAR_3->phy.ops.read_reg(VAR_3, VAR_1,
          VAR_2,
          &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (VAR_4) {
  VAR_6 &= ~VAR_0;
 } else {
  if (FUNC_0(VAR_3))
   return 0;
  VAR_6 |= VAR_0;
 }

 VAR_5 = VAR_3->phy.ops.write_reg(VAR_3, VAR_1,
           VAR_2,
           VAR_6);
 return VAR_5;
}
