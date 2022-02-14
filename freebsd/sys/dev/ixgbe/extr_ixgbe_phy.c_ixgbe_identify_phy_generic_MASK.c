
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ type; int nw_mng_if_sel; scalar_t__ addr; scalar_t__ phy_semaphore_mask; } ;
struct TYPE_3__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {TYPE_2__ phy; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int) ;

s32 FUNC_2(struct ixgbe_hw *VAR_8)
{
 s32 VAR_9 = VAR_0;
 u16 VAR_10;

 FUNC_0("ixgbe_identify_phy_generic");

 if (!VAR_8->phy.phy_semaphore_mask) {
  if (VAR_8->bus.lan_id)
   VAR_8->phy.phy_semaphore_mask = VAR_2;
  else
   VAR_8->phy.phy_semaphore_mask = VAR_1;
 }

 if (VAR_8->phy.type != VAR_7)
  return VAR_6;

 if (VAR_8->phy.nw_mng_if_sel) {
  VAR_10 = (VAR_8->phy.nw_mng_if_sel &
       VAR_4) >>
      VAR_5;
  if (FUNC_1(VAR_8, VAR_10))
   return VAR_6;
  else
   return VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (FUNC_1(VAR_8, VAR_10)) {
   VAR_9 = VAR_6;
   break;
  }
 }





 if (VAR_9 != VAR_6)
  VAR_8->phy.addr = 0;

 return VAR_9;
}
