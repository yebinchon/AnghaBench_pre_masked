
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_transport_qp {int tx_max_frame; int tx_pkts; int tx_max_entry; int tx_index; int tx_free_q; int ntb_tx_free_q_lock; int cb_data; int (* tx_handler ) (struct ntb_transport_qp*,int ,int *,int ) ;int tx_ring_full; TYPE_1__* remote_rx_info; } ;
struct ntb_queue_entry {int len; int * buf; } ;
struct ntb_payload_header {int dummy; } ;
struct TYPE_2__ {int entry; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,struct ntb_queue_entry*) ;
 int FUNC_2 (int ,char*,struct ntb_queue_entry*,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ntb_transport_qp*,struct ntb_queue_entry*) ;
 int FUNC_6 (int *,struct ntb_queue_entry*,int *) ;
 int FUNC_7 (struct ntb_transport_qp*,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct ntb_transport_qp *VAR_3, struct ntb_queue_entry *VAR_4)
{

 FUNC_3(VAR_2,
     "TX: process_tx: tx_pkts=%lu, tx_index=%u, remote entry=%u",
     VAR_3->tx_pkts, VAR_3->tx_index, VAR_3->remote_rx_info->entry);
 if (VAR_3->tx_index == VAR_3->remote_rx_info->entry) {
  FUNC_0(VAR_2, "TX: ring full");
  VAR_3->tx_ring_full++;
  return (VAR_0);
 }

 if (VAR_4->len > VAR_3->tx_max_frame - sizeof(struct ntb_payload_header)) {
  if (VAR_3->tx_handler != ((void*)0))
   VAR_3->tx_handler(VAR_3, VAR_3->cb_data, VAR_4->buf,
       VAR_1);
  else
   FUNC_4(VAR_4->buf);

  VAR_4->buf = ((void*)0);
  FUNC_6(&VAR_3->ntb_tx_free_q_lock, VAR_4, &VAR_3->tx_free_q);
  FUNC_1(VAR_2,
      "TX: frame too big. returning entry %p to tx_free_q",
      VAR_4);
  return (0);
 }
 FUNC_2(VAR_2, "TX: copying entry %p to index %u", VAR_4, VAR_3->tx_index);
 FUNC_5(VAR_3, VAR_4);

 VAR_3->tx_index++;
 VAR_3->tx_index %= VAR_3->tx_max_entry;

 VAR_3->tx_pkts++;

 return (0);
}
