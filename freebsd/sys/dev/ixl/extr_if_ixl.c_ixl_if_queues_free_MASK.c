
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring {struct ixl_tx_queue* tx_rsq; } ;
struct ixl_vsi {int num_tx_queues; struct ixl_tx_queue* rx_queues; struct ixl_tx_queue* tx_queues; int enable_head_writeback; } ;
struct ixl_tx_queue {struct tx_ring txr; } ;
struct ixl_pf {struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (struct ixl_tx_queue*,int ) ;
 struct ixl_pf* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_1)
{
 struct ixl_pf *VAR_2 = FUNC_1(VAR_1);
 struct ixl_vsi *VAR_3 = &VAR_2->vsi;

 if (!VAR_3->enable_head_writeback) {
  struct ixl_tx_queue *VAR_4;
  int VAR_5 = 0;

  for (VAR_5 = 0, VAR_4 = VAR_3->tx_queues; VAR_5 < VAR_3->num_tx_queues; VAR_5++, VAR_4++) {
   struct tx_ring *VAR_6 = &VAR_4->txr;
   if (VAR_6->tx_rsq != ((void*)0)) {
    FUNC_0(VAR_6->tx_rsq, VAR_0);
    VAR_6->tx_rsq = ((void*)0);
   }
  }
 }

 if (VAR_3->tx_queues != ((void*)0)) {
  FUNC_0(VAR_3->tx_queues, VAR_0);
  VAR_3->tx_queues = ((void*)0);
 }
 if (VAR_3->rx_queues != ((void*)0)) {
  FUNC_0(VAR_3->rx_queues, VAR_0);
  VAR_3->rx_queues = ((void*)0);
 }
}
