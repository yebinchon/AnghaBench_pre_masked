
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_ring {struct ixl_tx_queue* tx_rsq; } ;
struct ixl_vsi {struct ixl_tx_queue* rx_queues; struct ixl_tx_queue* tx_queues; TYPE_1__* shared; int enable_head_writeback; } ;
struct ixl_tx_queue {struct tx_ring txr; } ;
struct iavf_sc {struct ixl_vsi vsi; } ;
typedef int if_ctx_t ;
struct TYPE_2__ {int isc_ntxqsets; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixl_tx_queue*,int ) ;
 struct iavf_sc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_1)
{
 struct iavf_sc *VAR_2 = FUNC_1(VAR_1);
 struct ixl_vsi *VAR_3 = &VAR_2->vsi;

 if (!VAR_3->enable_head_writeback) {
  struct ixl_tx_queue *VAR_4;
  int VAR_5 = 0;

  for (VAR_5 = 0, VAR_4 = VAR_3->tx_queues; VAR_5 < VAR_3->shared->isc_ntxqsets; VAR_5++, VAR_4++) {
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
