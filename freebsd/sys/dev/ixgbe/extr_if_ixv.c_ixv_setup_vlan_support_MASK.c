
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ (* set_vfta ) (struct ixgbe_hw*,int,int ,int ,int ) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; } ;
struct ifnet {int if_capenable; } ;
struct adapter {scalar_t__ num_vlans; int num_rx_queues; TYPE_2__* rx_queues; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
struct TYPE_5__ {int vtag_strip; } ;
struct TYPE_6__ {TYPE_1__ rxr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_5 ;
 struct ifnet* FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 scalar_t__* VAR_6 ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(if_ctx_t VAR_7)
{
 struct ifnet *VAR_8 = FUNC_3(VAR_7);
 struct adapter *VAR_9 = FUNC_4(VAR_7);
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;







 if (VAR_9->num_vlans == 0)
  return;

 if (VAR_8->if_capenable & VAR_2) {

  for (int VAR_15 = 0; VAR_15 < VAR_9->num_rx_queues; VAR_15++) {
   VAR_11 = FUNC_0(VAR_10, FUNC_1(VAR_15));
   VAR_11 |= VAR_3;
   FUNC_2(VAR_10, FUNC_1(VAR_15), VAR_11);




   VAR_9->rx_queues[VAR_15].rxr.vtag_strip = VAR_5;
  }
 }





 if ((VAR_8->if_capenable & VAR_1) == 0)
  return;





 for (int VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  if (VAR_6[VAR_16] == 0)
   continue;
  VAR_13 = VAR_6[VAR_16];





  for (int VAR_17 = 0; VAR_17 < 32; VAR_17++) {
   VAR_14 = 0;
   if ((VAR_13 & (1 << VAR_17)) == 0)
    continue;
   VAR_12 = (VAR_16 * 32) + VAR_17;

   while (VAR_10->mac.ops.set_vfta(VAR_10, VAR_12, 0, VAR_5, VAR_0)) {
    if (++VAR_14 > 5)
     break;
   }
  }
 }
}
