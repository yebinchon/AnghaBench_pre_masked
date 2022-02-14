
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_wrq {int wrq_tx_task; } ;
struct sge_eq {size_t tx_chan; int equiq; } ;
struct adapter {int * tq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_0, struct sge_eq *VAR_1)
{
 struct sge_wrq *VAR_2 = (void *)VAR_1;

 FUNC_0(&VAR_1->equiq);
 FUNC_1(VAR_0->tq[VAR_1->tx_chan], &VAR_2->wrq_tx_task);
}
