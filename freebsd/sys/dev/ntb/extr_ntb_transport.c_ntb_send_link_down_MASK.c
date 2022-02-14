
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int tx_lock; int tx_free_q; int ntb_tx_free_q_lock; int link_is_up; } ;
struct ntb_queue_entry {int flags; scalar_t__ len; int * buf; int * cb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ntb_queue_entry* FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ntb_transport_qp*,struct ntb_queue_entry*) ;
 int FUNC_4 (struct ntb_transport_qp*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct ntb_transport_qp *VAR_3)
{
 struct ntb_queue_entry *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_3->link_is_up)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_2(&VAR_3->ntb_tx_free_q_lock, &VAR_3->tx_free_q);
  if (VAR_4 != ((void*)0))
   break;
  FUNC_5("NTB Wait for link down", VAR_2 / 10);
 }

 if (VAR_4 == ((void*)0))
  return;

 VAR_4->cb_data = ((void*)0);
 VAR_4->buf = ((void*)0);
 VAR_4->len = 0;
 VAR_4->flags = VAR_0;

 FUNC_0(&VAR_3->tx_lock);
 VAR_6 = FUNC_3(VAR_3, VAR_4);
 FUNC_1(&VAR_3->tx_lock);
 if (VAR_6 != 0)
  FUNC_6("ntb: Failed to send link down\n");

 FUNC_4(VAR_3);
}
