
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {int tx_reclaim_task; int r; } ;
struct sge_eq {int flags; size_t tx_chan; int equiq; } ;
struct adapter {int * tq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct adapter *VAR_2, struct sge_eq *VAR_3)
{
 struct sge_txq *VAR_4 = (void *)VAR_3;

 FUNC_0((VAR_3->flags & VAR_1) == VAR_0);

 FUNC_1(&VAR_3->equiq);
 FUNC_2(VAR_4->r, 0);
 FUNC_3(VAR_2->tq[VAR_3->tx_chan], &VAR_4->tx_reclaim_task);
}
