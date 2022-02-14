
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
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct adapter *VAR_5)
{
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;
 struct rx_ring *VAR_7;
 u32 VAR_8;

 for (int VAR_9 = 0; VAR_9 < VAR_5->num_rx_queues; VAR_9++) {
  VAR_7 = &VAR_5->rx_queues[VAR_9].rxr;
  VAR_8 = FUNC_0(VAR_6, FUNC_1(VAR_7->me));
  VAR_8 |= VAR_4;
  FUNC_2(VAR_6, FUNC_1(VAR_7->me), VAR_8);
 }


 for (int VAR_10 = 0; VAR_10 < VAR_5->num_vfs; VAR_10++) {
  FUNC_2(VAR_6, VAR_0,
                  (VAR_3 | (VAR_10 << VAR_2) |
                  VAR_1));
 }
}
