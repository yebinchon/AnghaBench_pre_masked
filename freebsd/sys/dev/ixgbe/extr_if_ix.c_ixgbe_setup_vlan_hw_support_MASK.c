
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rx_ring {int vtag_strip; int me; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ifnet {int if_capenable; } ;
struct adapter {scalar_t__ num_vlans; int num_rx_queues; int * shadow_vfta; TYPE_1__* rx_queues; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
struct TYPE_3__ {struct rx_ring rxr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int VAR_8 ;
 struct ifnet* FUNC_4 (int ) ;
 struct adapter* FUNC_5 (int ) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_6(if_ctx_t VAR_10)
{
 struct ifnet *VAR_11 = FUNC_4(VAR_10);
 struct adapter *VAR_12 = FUNC_5(VAR_10);
 struct ixgbe_hw *VAR_13 = &VAR_12->hw;
 struct rx_ring *VAR_14;
 int VAR_15;
 u32 VAR_16;
 if (VAR_12->num_vlans == 0)
  return;


 if (VAR_11->if_capenable & VAR_1) {
  for (VAR_15 = 0; VAR_15 < VAR_12->num_rx_queues; VAR_15++) {
   VAR_14 = &VAR_12->rx_queues[VAR_15].rxr;

   if (VAR_13->mac.type != VAR_9) {
    VAR_16 = FUNC_0(VAR_13, FUNC_1(VAR_14->me));
    VAR_16 |= VAR_2;
    FUNC_3(VAR_13, FUNC_1(VAR_14->me), VAR_16);
   }
   VAR_14->vtag_strip = VAR_8;
  }
 }

 if ((VAR_11->if_capenable & VAR_0) == 0)
  return;




 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
  if (VAR_12->shadow_vfta[VAR_15] != 0)
   FUNC_3(VAR_13, FUNC_2(VAR_15),
       VAR_12->shadow_vfta[VAR_15]);

 VAR_16 = FUNC_0(VAR_13, VAR_4);

 if (VAR_11->if_capenable & VAR_0) {
  VAR_16 &= ~VAR_5;
  VAR_16 |= VAR_6;
 }
 if (VAR_13->mac.type == VAR_9)
  VAR_16 |= VAR_7;
 FUNC_3(VAR_13, VAR_4, VAR_16);
}
