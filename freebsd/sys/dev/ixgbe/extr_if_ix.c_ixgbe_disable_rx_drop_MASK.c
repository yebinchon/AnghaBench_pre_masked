
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rx_ring {int me; } ;
struct ixgbe_hw {int dummy; } ;
struct adapter {int num_rx_queues; int num_vfs; TYPE_1__* rx_queues; struct ixgbe_hw hw; } ;
struct TYPE_2__ {struct rx_ring rxr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 struct rx_ring *VAR_6;
 u32 VAR_7;

 for (int VAR_8 = 0; VAR_8 < VAR_4->num_rx_queues; VAR_8++) {
  VAR_6 = &VAR_4->rx_queues[VAR_8].rxr;
  VAR_7 = FUNC_0(VAR_5, FUNC_1(VAR_6->me));
  VAR_7 &= ~VAR_3;
  FUNC_2(VAR_5, FUNC_1(VAR_6->me), VAR_7);
 }


 for (int VAR_9 = 0; VAR_9 < VAR_4->num_vfs; VAR_9++) {
  FUNC_2(VAR_5, VAR_0,
      (VAR_2 | (VAR_9 << VAR_1)));
 }
}
