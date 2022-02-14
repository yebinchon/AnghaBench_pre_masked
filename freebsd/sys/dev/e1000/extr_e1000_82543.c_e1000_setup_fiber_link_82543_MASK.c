
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_3)
{
 u32 VAR_4;
 s32 VAR_5;

 FUNC_0("e1000_setup_fiber_link_82543");

 VAR_4 = FUNC_2(VAR_3, VAR_0);


 VAR_4 &= ~VAR_1;

 VAR_3->mac.ops.config_collision_dist(VAR_3);

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  goto out;

 FUNC_1("Auto-negotiation enabled\n");

 FUNC_4(VAR_3, VAR_0, VAR_4);
 FUNC_3(VAR_3);
 FUNC_7(1);






 if (!(FUNC_2(VAR_3, VAR_0) & VAR_2))
  VAR_5 = FUNC_6(VAR_3);
 else
  FUNC_1("No signal detected\n");

out:
 return VAR_5;
}
