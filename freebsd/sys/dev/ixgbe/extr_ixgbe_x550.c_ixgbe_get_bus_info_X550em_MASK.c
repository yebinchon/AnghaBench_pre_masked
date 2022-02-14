
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int speed; int width; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ bus; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*) ;

s32 FUNC_2(struct ixgbe_hw *VAR_3)
{

 FUNC_0("ixgbe_get_bus_info_x550em");

 VAR_3->bus.width = VAR_2;
 VAR_3->bus.speed = VAR_1;

 VAR_3->mac.ops.set_lan_id(VAR_3);

 return VAR_0;
}
