
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_udma_q_params {int * desc_base; int desc_phy_base_map; int desc_phy_base_tag; } ;
struct al_eth_ring {int sw_count; int br_mtx; TYPE_1__* tx_buffer_info; int dma_buf_tag; int * br; int enqueue_tq; int enqueue_task; int cmpl_tq; int cmpl_task; struct al_udma_q_params q_params; } ;
struct al_eth_adapter {int netdev; struct al_eth_ring* tx_ring; } ;
struct TYPE_2__ {int dma_map; int * m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct al_eth_adapter *VAR_2, int VAR_3)
{
 struct al_eth_ring *VAR_4 = &VAR_2->tx_ring[VAR_3];
 struct al_udma_q_params *VAR_5 = &VAR_4->q_params;
 int VAR_6;


 while (FUNC_9(VAR_4->cmpl_tq, &VAR_4->cmpl_task, ((void*)0)))
  FUNC_10(VAR_4->cmpl_tq, &VAR_4->cmpl_task);

 FUNC_11(VAR_4->cmpl_tq);
 while (FUNC_9(VAR_4->enqueue_tq,
     &VAR_4->enqueue_task, ((void*)0))) {
  FUNC_10(VAR_4->enqueue_tq, &VAR_4->enqueue_task);
 }

 FUNC_11(VAR_4->enqueue_tq);

 if (VAR_4->br != ((void*)0)) {
  FUNC_5(VAR_2->netdev, VAR_4->br);
  FUNC_1(VAR_4->br, VAR_0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->sw_count; VAR_6++) {
  FUNC_7(VAR_4->tx_buffer_info[VAR_6].m);
  VAR_4->tx_buffer_info[VAR_6].m = ((void*)0);

  FUNC_4(VAR_4->dma_buf_tag,
      VAR_4->tx_buffer_info[VAR_6].dma_map);
  FUNC_3(VAR_4->dma_buf_tag,
      VAR_4->tx_buffer_info[VAR_6].dma_map);
 }
 FUNC_2(VAR_4->dma_buf_tag);

 FUNC_6(VAR_4->tx_buffer_info, VAR_1);
 VAR_4->tx_buffer_info = ((void*)0);

 FUNC_8(&VAR_4->br_mtx);


 if (VAR_5->desc_base == ((void*)0))
  return;

 FUNC_0(VAR_5->desc_phy_base_tag,
     VAR_5->desc_phy_base_map, VAR_5->desc_base);

 VAR_5->desc_base = ((void*)0);
}
