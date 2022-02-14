
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ (* setup_link ) (struct ixgbe_hw*,scalar_t__,int ) ;scalar_t__ (* get_link_capabilities ) (struct ixgbe_hw*,scalar_t__*,int*) ;scalar_t__ check_link; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ autoneg_advertised; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct adapter {int link_up; int link_speed; int task_requests; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct adapter* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int *,int *,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,scalar_t__*,int*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_6(if_ctx_t VAR_2)
{
 struct adapter *VAR_3 = FUNC_1(VAR_2);
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5, VAR_6 = 0;
 bool VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_4);

 if (VAR_7) {
  VAR_3->task_requests |= VAR_1;
  FUNC_0(VAR_2);
 } else {
  if (VAR_4->mac.ops.check_link)
   VAR_6 = FUNC_2(VAR_4, &VAR_3->link_speed,
       &VAR_3->link_up, VAR_0);
  if (VAR_6)
   return;
  VAR_5 = VAR_4->phy.autoneg_advertised;
  if ((!VAR_5) && (VAR_4->mac.ops.get_link_capabilities))
   VAR_6 = VAR_4->mac.ops.get_link_capabilities(VAR_4, &VAR_5,
       &VAR_8);
  if (VAR_6)
   return;
  if (VAR_4->mac.ops.setup_link)
   VAR_6 = VAR_4->mac.ops.setup_link(VAR_4, VAR_5,
       VAR_3->link_up);
 }
}
