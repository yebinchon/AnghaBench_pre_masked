
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* read_reg ) (struct e1000_hw*,int,int*) ;} ;
struct e1000_phy_info {int type; int speed_downgraded; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct e1000_hw*,int,int*) ;

s32 FUNC_2(struct e1000_hw *VAR_6)
{
 struct e1000_phy_info *VAR_7 = &VAR_6->phy;
 s32 VAR_8;
 u16 VAR_9, VAR_10, VAR_11;

 FUNC_0("e1000_check_downshift_generic");

 switch (VAR_7->type) {
 case 132:
 case 128:
 case 133:
 case 134:
 case 135:
  VAR_10 = VAR_4;
  VAR_11 = VAR_5;
  break;
 case 131:
 case 130:
 case 129:
  VAR_10 = VAR_2;
  VAR_11 = VAR_3;
  break;
 default:

  VAR_7->speed_downgraded = VAR_1;
  return VAR_0;
 }

 VAR_8 = VAR_7->ops.read_reg(VAR_6, VAR_10, &VAR_9);

 if (!VAR_8)
  VAR_7->speed_downgraded = !!(VAR_9 & VAR_11);

 return VAR_8;
}
