
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ix_rx_queue {int msix; } ;
struct adapter {int num_rx_queues; struct ix_rx_queue* rx_queues; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 struct adapter* FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,int ) ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_6)
{
 struct adapter *VAR_7 = FUNC_2(VAR_6);
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 struct ix_rx_queue *VAR_9 = VAR_7->rx_queues;
 u32 VAR_10 = (VAR_0 & ~VAR_3);

 FUNC_1(VAR_8, VAR_5, VAR_10);

 VAR_10 = VAR_0;
 VAR_10 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_8, VAR_4, VAR_10);

 for (int VAR_11 = 0; VAR_11 < VAR_7->num_rx_queues; VAR_11++, VAR_9++)
  FUNC_3(VAR_7, VAR_9->msix);

 FUNC_0(VAR_8);
}
