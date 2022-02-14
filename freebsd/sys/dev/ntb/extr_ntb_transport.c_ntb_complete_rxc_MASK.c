
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_transport_qp {int ntb_rx_q_lock; int cb_data; int (* rx_handler ) (struct ntb_transport_qp*,int ,struct mbuf*,unsigned int) ;scalar_t__ client_ready; int rx_pend_q; int rx_post_q; TYPE_2__* rx_info; } ;
struct ntb_queue_entry {int flags; unsigned int len; int cb_data; struct mbuf* buf; int index; TYPE_1__* x_hdr; } ;
struct mbuf {int dummy; } ;
struct TYPE_4__ {int entry; } ;
struct TYPE_3__ {scalar_t__ flags; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,struct ntb_queue_entry*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 struct ntb_queue_entry* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ntb_queue_entry*,struct ntb_queue_entry*) ;
 int FUNC_5 (int *,struct ntb_queue_entry*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ntb_transport_qp*,int ,struct mbuf*,unsigned int) ;
 unsigned int VAR_2 ;

__attribute__((used)) static void
FUNC_11(struct ntb_transport_qp *VAR_3)
{
 struct ntb_queue_entry *VAR_4;
 struct mbuf *VAR_5;
 unsigned VAR_6;

 FUNC_0(VAR_0, "RX: rx_completion_task");

 FUNC_8(&VAR_3->ntb_rx_q_lock);

 while (!FUNC_2(&VAR_3->rx_post_q)) {
  VAR_4 = FUNC_3(&VAR_3->rx_post_q);
  if ((VAR_4->flags & VAR_1) == 0)
   break;

  VAR_4->x_hdr->flags = 0;
  FUNC_6(VAR_4->index, &VAR_3->rx_info->entry);

  FUNC_5(&VAR_3->rx_post_q, VAR_4);

  VAR_6 = VAR_4->len;
  VAR_5 = VAR_4->buf;





  VAR_4->buf = ((void*)0);
  VAR_4->len = VAR_2;
  VAR_4->cb_data = VAR_3->cb_data;

  FUNC_4(&VAR_3->rx_pend_q, VAR_4, VAR_4);

  FUNC_9(&VAR_3->ntb_rx_q_lock);

  FUNC_1(VAR_0, "RX: completing entry %p, mbuf %p", VAR_4, VAR_5);
  if (VAR_3->rx_handler != ((void*)0) && VAR_3->client_ready)
   VAR_3->rx_handler(VAR_3, VAR_3->cb_data, VAR_5, VAR_6);
  else
   FUNC_7(VAR_5);

  FUNC_8(&VAR_3->ntb_rx_q_lock);
 }

 FUNC_9(&VAR_3->ntb_rx_q_lock);
}
