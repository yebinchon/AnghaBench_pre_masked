
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;


 int FUNC_0 (struct e1000_hw*) ;

void FUNC_1(struct e1000_hw *VAR_0)
{
 if (VAR_0->mac.ops.config_collision_dist)
  VAR_0->mac.ops.config_collision_dist(VAR_0);
}
