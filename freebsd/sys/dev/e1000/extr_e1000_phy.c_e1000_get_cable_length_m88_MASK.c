
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int min_cable_length; int max_cable_length; int cable_length; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void** VAR_6 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;

s32 FUNC_2(struct e1000_hw *VAR_7)
{
 struct e1000_phy_info *VAR_8 = &VAR_7->phy;
 s32 VAR_9;
 u16 VAR_10, VAR_11;

 FUNC_0("e1000_get_cable_length_m88");

 VAR_9 = VAR_8->ops.read_reg(VAR_7, VAR_3, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_11 = ((VAR_10 & VAR_4) >>
   VAR_5);

 if (VAR_11 >= VAR_2 - 1)
  return -VAR_0;

 VAR_8->min_cable_length = VAR_6[VAR_11];
 VAR_8->max_cable_length = VAR_6[VAR_11 + 1];

 VAR_8->cable_length = (VAR_8->min_cable_length + VAR_8->max_cable_length) / 2;

 return VAR_1;
}
