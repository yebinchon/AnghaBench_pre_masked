
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int tx_free_q; int ntb_tx_free_q_lock; int tx_lock; int tx_err_no_buf; int link_is_up; } ;
struct ntb_queue_entry {unsigned int len; scalar_t__ flags; void* buf; void* cb_data; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,struct ntb_queue_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ntb_queue_entry*,int *) ;
 struct ntb_queue_entry* FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ntb_transport_qp*,struct ntb_queue_entry*) ;

int
FUNC_7(struct ntb_transport_qp *VAR_3, void *VAR_4, void *VAR_5,
    unsigned int VAR_6)
{
 struct ntb_queue_entry *VAR_7;
 int VAR_8;

 if (!VAR_3->link_is_up || VAR_6 == 0) {
  FUNC_0(VAR_2, "TX: link not up");
  return (VAR_1);
 }

 VAR_7 = FUNC_5(&VAR_3->ntb_tx_free_q_lock, &VAR_3->tx_free_q);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_2, "TX: could not get entry from tx_free_q");
  VAR_3->tx_err_no_buf++;
  return (VAR_0);
 }
 FUNC_1(VAR_2, "TX: got entry %p from tx_free_q", VAR_7);

 VAR_7->cb_data = VAR_4;
 VAR_7->buf = VAR_5;
 VAR_7->len = VAR_6;
 VAR_7->flags = 0;

 FUNC_2(&VAR_3->tx_lock);
 VAR_8 = FUNC_6(VAR_3, VAR_7);
 FUNC_3(&VAR_3->tx_lock);
 if (VAR_8 != 0) {
  FUNC_4(&VAR_3->ntb_tx_free_q_lock, VAR_7, &VAR_3->tx_free_q);
  FUNC_1(VAR_2,
      "TX: process_tx failed. Returning entry %p to tx_free_q",
      VAR_7);
 }
 return (VAR_8);
}
