
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int watchdog_timer; int fcoe_tc; scalar_t__ fcoe_en; } ;
struct TYPE_4__ {TYPE_1__ dmac_config; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8, VAR_9;

 FUNC_0("ixgbe_dmac_config_X550");


 VAR_8 = FUNC_1(VAR_7, VAR_0);
 VAR_8 &= ~VAR_2;
 FUNC_2(VAR_7, VAR_0, VAR_8);


 if (!VAR_7->mac.dmac_config.watchdog_timer)
  goto out;

 FUNC_3(VAR_7);


 VAR_8 = FUNC_1(VAR_7, VAR_0);


 VAR_8 &= ~VAR_1;
 VAR_8 |= (VAR_7->mac.dmac_config.watchdog_timer * 100) / 4096;

 VAR_8 &= ~VAR_4;

 if (VAR_7->mac.dmac_config.fcoe_en) {
  VAR_9 = 1 << VAR_7->mac.dmac_config.fcoe_tc;
  VAR_8 |= ((VAR_9 << VAR_5) &
   VAR_4);
 }
 VAR_8 |= VAR_3;


 VAR_8 |= VAR_2;
 FUNC_2(VAR_7, VAR_0, VAR_8);

out:
 return VAR_6;
}
