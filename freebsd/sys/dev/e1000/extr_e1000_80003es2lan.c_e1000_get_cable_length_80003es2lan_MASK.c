
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
 void** VAR_5 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_6)
{
 struct e1000_phy_info *VAR_7 = &VAR_6->phy;
 s32 VAR_8;
 u16 VAR_9, VAR_10;

 FUNC_0("e1000_get_cable_length_80003es2lan");

 if (!(VAR_6->phy.ops.read_reg))
  return VAR_1;

 VAR_8 = VAR_6->phy.ops.read_reg(VAR_6, VAR_4, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_10 = VAR_9 & VAR_3;

 if (VAR_10 >= VAR_2 - 5)
  return -VAR_0;

 VAR_7->min_cable_length = VAR_5[VAR_10];
 VAR_7->max_cable_length = VAR_5[VAR_10 + 5];

 VAR_7->cable_length = (VAR_7->min_cable_length + VAR_7->max_cable_length) / 2;

 return VAR_1;
}
