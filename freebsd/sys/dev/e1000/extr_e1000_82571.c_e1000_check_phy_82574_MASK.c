
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__*) ;

bool FUNC_3(struct e1000_hw *VAR_6)
{
 u16 VAR_7 = 0;
 u16 VAR_8 = 0;
 s32 VAR_9;

 FUNC_0("e1000_check_phy_82574");




 VAR_9 = VAR_6->phy.ops.read_reg(VAR_6, VAR_2,
           &VAR_8);
 if (VAR_9)
  return VAR_4;
 if (VAR_8 == VAR_3) {
  VAR_9 = VAR_6->phy.ops.read_reg(VAR_6, VAR_0,
            &VAR_7);
  if (VAR_9)
   return VAR_4;
  if ((VAR_7 & VAR_1) ==
      VAR_1)
   return VAR_5;
 }

 return VAR_4;
}
