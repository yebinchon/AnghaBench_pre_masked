
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {TYPE_1__ ops; int autoneg; scalar_t__ get_link_status; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,scalar_t__) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_6 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_4)
{
 struct e1000_mac_info *VAR_5 = &VAR_4->mac;
 s32 VAR_6;
 bool VAR_7;

 FUNC_0("e1000_check_for_link_82541");







 if (!VAR_5->get_link_status) {
  VAR_6 = VAR_1;
  goto out;
 }






 VAR_6 = FUNC_5(VAR_4, 1, 0, &VAR_7);
 if (VAR_6)
  goto out;

 if (!VAR_7) {
  VAR_6 = FUNC_3(VAR_4, VAR_2);
  goto out;
 }

 VAR_5->get_link_status = VAR_2;





 FUNC_2(VAR_4);





 if (!VAR_5->autoneg) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_3);






 VAR_5->ops.config_collision_dist(VAR_4);







 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  FUNC_1("Error configuring flow control\n");

out:
 return VAR_6;
}
