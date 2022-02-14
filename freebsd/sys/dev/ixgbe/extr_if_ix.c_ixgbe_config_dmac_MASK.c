
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* dmac_config ) (struct ixgbe_hw*) ;} ;
struct ixgbe_dmac_config {int watchdog_timer; int link_speed; int num_tcs; int fcoe_en; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; struct ixgbe_dmac_config dmac_config; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct adapter {int dmac; int link_speed; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ixgbe_hw*) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 struct ixgbe_dmac_config *VAR_4 = &VAR_3->mac.dmac_config;

 if (VAR_3->mac.type < VAR_1 || !VAR_3->mac.ops.dmac_config)
  return;

 if (VAR_4->watchdog_timer ^ VAR_2->dmac ||
     VAR_4->link_speed ^ VAR_2->link_speed) {
  VAR_4->watchdog_timer = VAR_2->dmac;
  VAR_4->fcoe_en = VAR_0;
  VAR_4->link_speed = VAR_2->link_speed;
  VAR_4->num_tcs = 1;

  FUNC_0("dmac settings: watchdog %d, link speed %d\n",
      VAR_4->watchdog_timer, VAR_4->link_speed);

  VAR_3->mac.ops.dmac_config(VAR_3);
 }
}
