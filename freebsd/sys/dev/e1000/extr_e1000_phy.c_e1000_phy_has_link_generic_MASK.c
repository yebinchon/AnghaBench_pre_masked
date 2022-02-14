
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;

s32 FUNC_5(struct e1000_hw *VAR_3, u32 VAR_4,
          u32 VAR_5, bool *VAR_6)
{
 s32 VAR_7 = VAR_0;
 u16 VAR_8, VAR_9;

 FUNC_0("e1000_phy_has_link_generic");

 if (!VAR_3->phy.ops.read_reg)
  return VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {




  VAR_7 = VAR_3->phy.ops.read_reg(VAR_3, VAR_2, &VAR_9);
  if (VAR_7) {




   if (VAR_5 >= 1000)
    FUNC_1(VAR_5/1000);
   else
    FUNC_4(VAR_5);
  }
  VAR_7 = VAR_3->phy.ops.read_reg(VAR_3, VAR_2, &VAR_9);
  if (VAR_7)
   break;
  if (VAR_9 & VAR_1)
   break;
  if (VAR_5 >= 1000)
   FUNC_1(VAR_5/1000);
  else
   FUNC_4(VAR_5);
 }

 *VAR_6 = (VAR_8 < VAR_4);

 return VAR_7;
}
