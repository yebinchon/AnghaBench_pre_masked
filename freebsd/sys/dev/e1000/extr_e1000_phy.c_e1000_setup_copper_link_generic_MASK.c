
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; scalar_t__ autoneg; } ;
struct TYPE_7__ {scalar_t__ (* force_speed_duplex ) (struct e1000_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct e1000_hw {TYPE_2__ mac; TYPE_4__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;

s32 FUNC_7(struct e1000_hw *VAR_1)
{
 s32 VAR_2;
 bool VAR_3;

 FUNC_0("e1000_setup_copper_link_generic");

 if (VAR_1->mac.autoneg) {



  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2)
   return VAR_2;
 } else {



  FUNC_1("Forcing Speed and Duplex\n");
  VAR_2 = VAR_1->phy.ops.force_speed_duplex(VAR_1);
  if (VAR_2) {
   FUNC_1("Error Forcing Speed and Duplex\n");
   return VAR_2;
  }
 }




 VAR_2 = FUNC_4(VAR_1, VAR_0, 10,
          &VAR_3);
 if (VAR_2)
  return VAR_2;

 if (VAR_3) {
  FUNC_1("Valid link established!!!\n");
  VAR_1->mac.ops.config_collision_dist(VAR_1);
  VAR_2 = FUNC_2(VAR_1);
 } else {
  FUNC_1("Unable to establish link!!!\n");
 }

 return VAR_2;
}
