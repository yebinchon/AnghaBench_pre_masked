
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_net_queue {int tx_lock; int br; } ;
struct ntb_net_ctx {int num_queues; struct ntb_net_queue* queues; } ;
struct mbuf {int dummy; } ;
typedef int if_t ;


 struct mbuf* FUNC_0 (int ) ;
 struct ntb_net_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(if_t VAR_0)
{
 struct ntb_net_ctx *VAR_1 = FUNC_1(VAR_0);
 struct ntb_net_queue *VAR_2;
 struct mbuf *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_queues; VAR_4++) {
  VAR_2 = &VAR_1->queues[VAR_4];
  FUNC_4(&VAR_2->tx_lock);
  while ((VAR_3 = FUNC_0(VAR_2->br)) != ((void*)0))
   FUNC_3(VAR_3);
  FUNC_5(&VAR_2->tx_lock);
 }
 FUNC_2(VAR_0);
}
