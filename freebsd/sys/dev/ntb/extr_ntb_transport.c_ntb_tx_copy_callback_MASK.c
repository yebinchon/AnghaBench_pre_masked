
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {unsigned long long qp_num; int tx_free_q; int ntb_tx_free_q_lock; int cb_data; int (* tx_handler ) (struct ntb_transport_qp*,int ,int *,scalar_t__) ;int tx_bytes; int dev; } ;
struct ntb_queue_entry {int flags; scalar_t__ len; int * buf; struct ntb_payload_header* x_hdr; struct ntb_transport_qp* qp; } ;
struct ntb_payload_header {int flags; int ver; } ;


 int FUNC_0 (int ,char*,struct ntb_payload_header*) ;
 int FUNC_1 (int ,char*,struct ntb_queue_entry*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ntb_queue_entry*,int *) ;
 int FUNC_5 (int ,unsigned long long) ;
 int FUNC_6 (struct ntb_transport_qp*,int ,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct ntb_queue_entry *VAR_3 = VAR_2;
 struct ntb_transport_qp *VAR_4 = VAR_3->qp;
 struct ntb_payload_header *VAR_5 = VAR_3->x_hdr;

 FUNC_2(VAR_3->flags | VAR_1, &VAR_5->flags);
 FUNC_0(VAR_0, "TX: hdr %p set DESC_DONE", VAR_5);

 FUNC_5(VAR_4->dev, 1ull << VAR_4->qp_num);






 if (VAR_3->len > 0) {
  VAR_4->tx_bytes += VAR_3->len;

  if (VAR_4->tx_handler)
   VAR_4->tx_handler(VAR_4, VAR_4->cb_data, VAR_3->buf,
       VAR_3->len);
  else
   FUNC_3(VAR_3->buf);
  VAR_3->buf = ((void*)0);
 }

 FUNC_1(VAR_0,
     "TX: entry %p sent. hdr->ver = %u, hdr->flags = 0x%x, Returning "
     "to tx_free_q", VAR_3, VAR_5->ver, VAR_5->flags);
 FUNC_4(&VAR_4->ntb_tx_free_q_lock, VAR_3, &VAR_4->tx_free_q);
}
