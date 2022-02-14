
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_net_queue {int queue_full; int tx_task; int tx_tq; int qp; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct ntb_net_queue *VAR_3 = VAR_2;

 FUNC_0(VAR_0, "TX: qp_full callout");
 if (FUNC_2(VAR_3->qp) > 0)
  FUNC_3(VAR_3->tx_tq, &VAR_3->tx_task);
 else
  FUNC_1(&VAR_3->queue_full,
      VAR_1 / 4, VAR_1 / 4, 0);
}
