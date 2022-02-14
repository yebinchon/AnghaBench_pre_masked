
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_net_queue {int tx_lock; int tx_tq; int queue_full; int br; int qp; } ;
struct ntb_net_ctx {int num_queues; struct ntb_net_queue* queues; int media; int ifp; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct ntb_net_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ntb_net_queue*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_1)
{
 struct ntb_net_ctx *VAR_2 = FUNC_2(VAR_1);
 struct ntb_net_queue *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_queues; VAR_4++)
  FUNC_9(VAR_2->queues[VAR_4].qp);
 FUNC_3(VAR_2->ifp);
 FUNC_5(VAR_2->ifp);
 FUNC_6(&VAR_2->media);
 for (VAR_4 = 0; VAR_4 < VAR_2->num_queues; VAR_4++) {
  VAR_3 = &VAR_2->queues[VAR_4];
  FUNC_8(VAR_3->qp);
  FUNC_0(VAR_3->br, VAR_0);
  FUNC_1(&VAR_3->queue_full);
  FUNC_10(VAR_3->tx_tq);
  FUNC_7(&VAR_3->tx_lock);
 }
 FUNC_4(VAR_2->queues, VAR_0);
 return (0);
}
