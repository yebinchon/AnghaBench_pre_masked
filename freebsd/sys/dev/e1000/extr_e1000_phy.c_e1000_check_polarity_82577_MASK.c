
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {int cable_polarity; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;

s32 FUNC_2(struct e1000_hw *VAR_4)
{
 struct e1000_phy_info *VAR_5 = &VAR_4->phy;
 s32 VAR_6;
 u16 VAR_7;

 FUNC_0("e1000_check_polarity_82577");

 VAR_6 = VAR_5->ops.read_reg(VAR_4, VAR_1, &VAR_7);

 if (!VAR_6)
  VAR_5->cable_polarity = ((VAR_7 & VAR_0)
           ? VAR_3
           : VAR_2);

 return VAR_6;
}
