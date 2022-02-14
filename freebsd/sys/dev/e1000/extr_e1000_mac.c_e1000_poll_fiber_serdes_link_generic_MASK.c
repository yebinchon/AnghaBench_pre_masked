
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ (* check_for_link ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {void* autoneg_failed; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;

s32 FUNC_5(struct e1000_hw *VAR_6)
{
 struct e1000_mac_info *VAR_7 = &VAR_6->mac;
 u32 VAR_8, VAR_9;
 s32 VAR_10;

 FUNC_0("e1000_poll_fiber_serdes_link_generic");







 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_3(10);
  VAR_9 = FUNC_2(VAR_6, VAR_0);
  if (VAR_9 & VAR_1)
   break;
 }
 if (VAR_8 == VAR_4) {
  FUNC_1("Never got a valid link from auto-neg!!!\n");
  VAR_7->autoneg_failed = VAR_5;





  VAR_10 = VAR_7->ops.check_for_link(VAR_6);
  if (VAR_10) {
   FUNC_1("Error while checking for link\n");
   return VAR_10;
  }
  VAR_7->autoneg_failed = VAR_3;
 } else {
  VAR_7->autoneg_failed = VAR_3;
  FUNC_1("Valid Link Found\n");
 }

 return VAR_2;
}
