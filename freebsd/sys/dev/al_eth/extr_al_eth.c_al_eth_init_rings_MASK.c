
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unit_regs {int dummy; } ;
struct al_eth_ring {int ring_id; int unmask_val; void* unmask_reg_offset; int hw_count; int sw_count; int dma_q; int netdev; struct al_eth_adapter* adapter; int dev; } ;
struct TYPE_2__ {int rx_udma; int tx_udma; } ;
struct al_eth_adapter {int num_tx_queues; int num_rx_queues; scalar_t__ udma_base; int rx_descs_count; int rx_ring_count; TYPE_1__ hal_adapter; int netdev; int dev; struct al_eth_ring* rx_ring; int tx_descs_count; int tx_ring_count; struct al_eth_ring* tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct unit_regs*,int ,int ) ;
 int FUNC_1 (int *,int,int *) ;

__attribute__((used)) static void
FUNC_2(struct al_eth_adapter *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_tx_queues; VAR_4++) {
  struct al_eth_ring *VAR_5 = &VAR_3->tx_ring[VAR_4];

  VAR_5->ring_id = VAR_4;
  VAR_5->dev = VAR_3->dev;
  VAR_5->adapter = VAR_3;
  VAR_5->netdev = VAR_3->netdev;
  FUNC_1(&VAR_3->hal_adapter.tx_udma, VAR_4,
      &VAR_5->dma_q);
  VAR_5->sw_count = VAR_3->tx_ring_count;
  VAR_5->hw_count = VAR_3->tx_descs_count;
  VAR_5->unmask_reg_offset = FUNC_0((struct unit_regs *)VAR_3->udma_base, VAR_2, VAR_1);
  VAR_5->unmask_val = ~(1 << VAR_4);
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->num_rx_queues; VAR_4++) {
  struct al_eth_ring *VAR_6 = &VAR_3->rx_ring[VAR_4];

  VAR_6->ring_id = VAR_4;
  VAR_6->dev = VAR_3->dev;
  VAR_6->adapter = VAR_3;
  VAR_6->netdev = VAR_3->netdev;
  FUNC_1(&VAR_3->hal_adapter.rx_udma, VAR_4, &VAR_6->dma_q);
  VAR_6->sw_count = VAR_3->rx_ring_count;
  VAR_6->hw_count = VAR_3->rx_descs_count;
  VAR_6->unmask_reg_offset = FUNC_0(
      (struct unit_regs *)VAR_3->udma_base,
      VAR_2, VAR_0);
  VAR_6->unmask_val = ~(1 << VAR_4);
 }
}
