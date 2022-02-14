
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {TYPE_1__ ops; int autoneg; scalar_t__ get_link_status; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_5 (struct e1000_hw*) ;

s32 FUNC_6(struct e1000_hw *VAR_3)
{
 struct e1000_mac_info *VAR_4 = &VAR_3->mac;
 s32 VAR_5;
 bool VAR_6;

 FUNC_0("e1000_check_for_copper_link");






 if (!VAR_4->get_link_status)
  return VAR_1;





 VAR_5 = FUNC_4(VAR_3, 1, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (!VAR_6)
  return VAR_1;

 VAR_4->get_link_status = VAR_2;




 FUNC_2(VAR_3);




 if (!VAR_4->autoneg)
  return -VAR_0;





 VAR_4->ops.config_collision_dist(VAR_3);






 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  FUNC_1("Error configuring flow control\n");

 return VAR_5;
}
