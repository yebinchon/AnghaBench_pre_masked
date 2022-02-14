
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* init_params ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct e1000_hw*) ;

s32 FUNC_2(struct e1000_hw *VAR_2)
{
 s32 VAR_3 = VAR_1;

 if (VAR_2->phy.ops.init_params) {
  VAR_3 = VAR_2->phy.ops.init_params(VAR_2);
  if (VAR_3) {
   FUNC_0("PHY Initialization Error\n");
   goto out;
  }
 } else {
  FUNC_0("phy.init_phy_params was NULL\n");
  VAR_3 = -VAR_0;
 }

out:
 return VAR_3;
}
