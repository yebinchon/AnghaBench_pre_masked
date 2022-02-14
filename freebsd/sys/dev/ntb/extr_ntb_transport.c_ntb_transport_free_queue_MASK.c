
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {unsigned long long qp_num; int tx_free_q; int ntb_tx_free_q_lock; int rx_post_q; int ntb_rx_q_lock; int rx_pend_q; int * event_handler; int * tx_handler; int * rx_handler; int * cb_data; int rxc_tq; int dev; int link_work; struct ntb_transport_ctx* transport; } ;
struct ntb_transport_ctx {int qp_bitmap; } ;
struct ntb_queue_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ntb_queue_entry*,int ) ;
 int FUNC_2 (int ,unsigned long long) ;
 struct ntb_queue_entry* FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct ntb_transport_qp *VAR_1)
{
 struct ntb_transport_ctx *VAR_2 = VAR_1->transport;
 struct ntb_queue_entry *VAR_3;

 FUNC_0(&VAR_1->link_work);

 FUNC_2(VAR_1->dev, 1ull << VAR_1->qp_num);
 FUNC_4(VAR_1->rxc_tq);
 FUNC_5(VAR_1->rxc_tq);

 VAR_1->cb_data = ((void*)0);
 VAR_1->rx_handler = ((void*)0);
 VAR_1->tx_handler = ((void*)0);
 VAR_1->event_handler = ((void*)0);

 while ((VAR_3 = FUNC_3(&VAR_1->ntb_rx_q_lock, &VAR_1->rx_pend_q)))
  FUNC_1(VAR_3, VAR_0);

 while ((VAR_3 = FUNC_3(&VAR_1->ntb_rx_q_lock, &VAR_1->rx_post_q)))
  FUNC_1(VAR_3, VAR_0);

 while ((VAR_3 = FUNC_3(&VAR_1->ntb_tx_free_q_lock, &VAR_1->tx_free_q)))
  FUNC_1(VAR_3, VAR_0);

 VAR_2->qp_bitmap &= ~(1 << VAR_1->qp_num);
}
