
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__ ops; scalar_t__ autoneg; } ;
struct TYPE_5__ {scalar_t__ (* reset ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 scalar_t__ FUNC_9 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_12(struct e1000_hw *VAR_7)
{
 u32 VAR_8;
 s32 VAR_9;
 bool VAR_10;

 FUNC_0("e1000_setup_copper_link_82543");

 VAR_8 = FUNC_2(VAR_7, VAR_1) | VAR_4;






 if (VAR_7->mac.type == VAR_5) {
  VAR_8 |= (VAR_3 | VAR_2);
  FUNC_3(VAR_7, VAR_1, VAR_8);
  VAR_9 = VAR_7->phy.ops.reset(VAR_7);
  if (VAR_9)
   goto out;
 } else {
  VAR_8 &= ~(VAR_3 | VAR_2);
  FUNC_3(VAR_7, VAR_1, VAR_8);
 }


 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9)
  goto out;

 if (VAR_7->mac.autoneg) {




  VAR_9 = FUNC_6(VAR_7);
  if (VAR_9)
   goto out;
 } else {




  FUNC_1("Forcing Speed and Duplex\n");
  VAR_9 = FUNC_8(VAR_7);
  if (VAR_9) {
   FUNC_1("Error Forcing Speed and Duplex\n");
   goto out;
  }
 }





 VAR_9 = FUNC_9(VAR_7, VAR_0, 10,
          &VAR_10);
 if (VAR_9)
  goto out;


 if (VAR_10) {
  FUNC_1("Valid link established!!!\n");

  if (VAR_7->mac.type == VAR_6) {
   VAR_7->mac.ops.config_collision_dist(VAR_7);
  } else {
   VAR_9 = FUNC_5(VAR_7);
   if (VAR_9)
    goto out;
  }
  VAR_9 = FUNC_4(VAR_7);
 } else {
  FUNC_1("Unable to establish link!!!\n");
 }

out:
 return VAR_9;
}
