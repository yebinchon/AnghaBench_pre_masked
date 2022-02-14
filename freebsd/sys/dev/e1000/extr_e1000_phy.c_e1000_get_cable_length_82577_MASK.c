
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int cable_length; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;

s32 FUNC_2(struct e1000_hw *VAR_6)
{
 struct e1000_phy_info *VAR_7 = &VAR_6->phy;
 s32 VAR_8;
 u16 VAR_9, VAR_10;

 FUNC_0("e1000_get_cable_length_82577");

 VAR_8 = VAR_7->ops.read_reg(VAR_6, VAR_5, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_10 = ((VAR_9 & VAR_3) >>
    VAR_4);

 if (VAR_10 == VAR_0)
  return -VAR_1;

 VAR_7->cable_length = VAR_10;

 return VAR_2;
}
