
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_2 (int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_9, ixgbe_link_speed *VAR_10,
        bool *VAR_11)
{
 s32 VAR_12 = VAR_7;
 u32 VAR_13;
 u32 VAR_14 = 10;
 u16 VAR_15 = 0;
 u16 VAR_16 = 0;
 u16 VAR_17 = 0;

 FUNC_0("ixgbe_check_phy_link_tnx");


 *VAR_11 = VAR_0;
 *VAR_10 = VAR_1;






 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  FUNC_2(10);
  VAR_12 = VAR_9->phy.ops.read_reg(VAR_9,
     VAR_6,
     VAR_3,
     &VAR_17);
  VAR_15 = VAR_17 & VAR_4;
  VAR_16 = VAR_17 &
     VAR_5;
  if (VAR_15 == VAR_4) {
   *VAR_11 = VAR_8;
   if (VAR_16 ==
       VAR_5)
    *VAR_10 = VAR_2;
   break;
  }
 }

 return VAR_12;
}
