
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_udma_q_params {scalar_t__ cdesc_phy_base; int * cdesc_base; int cdesc_phy_base_map; int cdesc_phy_base_tag; int * desc_base; int desc_phy_base_map; int desc_phy_base_tag; } ;
struct al_eth_ring {int sw_count; int lro; TYPE_1__* rx_buffer_info; int dma_buf_tag; int enqueue_tq; int enqueue_task; struct al_udma_q_params q_params; } ;
struct al_eth_adapter {struct al_eth_ring* rx_ring; } ;
struct TYPE_2__ {int dma_map; int * m; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct al_eth_adapter *VAR_1, unsigned int VAR_2)
{
 struct al_eth_ring *VAR_3 = &VAR_1->rx_ring[VAR_2];
 struct al_udma_q_params *VAR_4 = &VAR_3->q_params;
 int VAR_5;


 while (FUNC_6(VAR_3->enqueue_tq,
     &VAR_3->enqueue_task, ((void*)0))) {
  FUNC_7(VAR_3->enqueue_tq, &VAR_3->enqueue_task);
 }

 FUNC_8(VAR_3->enqueue_tq);

 for (VAR_5 = 0; VAR_5 < VAR_3->sw_count; VAR_5++) {
  FUNC_5(VAR_3->rx_buffer_info[VAR_5].m);
  VAR_3->rx_buffer_info[VAR_5].m = ((void*)0);
  FUNC_3(VAR_3->dma_buf_tag,
      VAR_3->rx_buffer_info[VAR_5].dma_map);
  FUNC_2(VAR_3->dma_buf_tag,
      VAR_3->rx_buffer_info[VAR_5].dma_map);
 }
 FUNC_1(VAR_3->dma_buf_tag);

 FUNC_4(VAR_3->rx_buffer_info, VAR_0);
 VAR_3->rx_buffer_info = ((void*)0);


 if (VAR_4->desc_base == ((void*)0))
  return;

 FUNC_0(VAR_4->desc_phy_base_tag,
     VAR_4->desc_phy_base_map, VAR_4->desc_base);

 VAR_4->desc_base = ((void*)0);


 if (VAR_4->cdesc_base == ((void*)0))
  return;

 FUNC_0(VAR_4->cdesc_phy_base_tag,
     VAR_4->cdesc_phy_base_map, VAR_4->cdesc_base);

 VAR_4->cdesc_phy_base = 0;


 FUNC_9(&VAR_3->lro);
}
