
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int arc_subsystem_valid; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct e1000_hw *VAR_6)
{
 u32 VAR_7;
 u8 VAR_8;

 FUNC_0("e1000_mng_enable_host_if_generic");

 if (!VAR_6->mac.arc_subsystem_valid) {
  FUNC_1("ARC subsystem not valid.\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (!(VAR_7 & VAR_3)) {
  FUNC_1("E1000_HOST_EN bit disabled.\n");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7 = FUNC_2(VAR_6, VAR_1);
  if (!(VAR_7 & VAR_2))
   break;
  FUNC_3(1);
 }

 if (VAR_8 == VAR_4) {
  FUNC_1("Previous command timeout failed .\n");
  return -VAR_0;
 }

 return VAR_5;
}
