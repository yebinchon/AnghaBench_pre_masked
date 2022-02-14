
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int qp_num; int tx_free_q; int ntb_tx_free_q_lock; int rx_pend_q; int ntb_rx_q_lock; int event_handler; int tx_handler; int rx_handler; void* cb_data; } ;
struct ntb_transport_ctx {int qp_bitmap; struct ntb_transport_qp* qp_vec; } ;
struct ntb_transport_child {int qpcnt; int qpoff; } ;
struct ntb_queue_handlers {int event_handler; int tx_handler; int rx_handler; } ;
struct ntb_queue_entry {struct ntb_transport_qp* qp; int len; int * buf; void* cb_data; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ntb_transport_child* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ntb_transport_ctx* FUNC_2 (int ) ;
 struct ntb_queue_entry* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ,unsigned long long) ;
 int FUNC_5 (int *,struct ntb_queue_entry*,int *) ;
 int VAR_4 ;

struct ntb_transport_qp *
FUNC_6(device_t VAR_5, int VAR_6,
    const struct ntb_queue_handlers *VAR_7, void *VAR_8)
{
 struct ntb_transport_child *VAR_9 = FUNC_0(VAR_5);
 struct ntb_transport_ctx *VAR_10 = FUNC_2(FUNC_1(VAR_5));
 struct ntb_queue_entry *VAR_11;
 struct ntb_transport_qp *VAR_12;
 int VAR_13;

 if (VAR_6 < 0 || VAR_6 >= VAR_9->qpcnt)
  return (((void*)0));

 VAR_12 = &VAR_10->qp_vec[VAR_9->qpoff + VAR_6];
 VAR_10->qp_bitmap |= (1 << VAR_12->qp_num);
 VAR_12->cb_data = VAR_8;
 VAR_12->rx_handler = VAR_7->rx_handler;
 VAR_12->tx_handler = VAR_7->tx_handler;
 VAR_12->event_handler = VAR_7->event_handler;

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_0, VAR_1 | VAR_2);
  VAR_11->cb_data = VAR_8;
  VAR_11->buf = ((void*)0);
  VAR_11->len = VAR_4;
  VAR_11->qp = VAR_12;
  FUNC_5(&VAR_12->ntb_rx_q_lock, VAR_11, &VAR_12->rx_pend_q);
 }

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_0, VAR_1 | VAR_2);
  VAR_11->qp = VAR_12;
  FUNC_5(&VAR_12->ntb_tx_free_q_lock, VAR_11, &VAR_12->tx_free_q);
 }

 FUNC_4(VAR_5, 1ull << VAR_12->qp_num);
 return (VAR_12);
}
