
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_qset {TYPE_2__* txq; int txq_stopped; TYPE_1__* port; } ;
struct adapter {int tq; } ;
struct TYPE_4__ {int qresume_task; int restarts; } ;
struct TYPE_3__ {struct adapter* adapter; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (size_t,int *) ;

__attribute__((used)) static void
FUNC_4(struct sge_qset *VAR_2)
{
 struct adapter *VAR_3 = VAR_2->port->adapter;

 if (FUNC_0(&VAR_2->txq_stopped, VAR_1) &&
     FUNC_1(&VAR_2->txq[VAR_1]) &&
     FUNC_3(VAR_1, &VAR_2->txq_stopped)) {
  VAR_2->txq[VAR_1].restarts++;
  FUNC_2(VAR_3->tq, &VAR_2->txq[VAR_1].qresume_task);
 }

 if (FUNC_0(&VAR_2->txq_stopped, VAR_0) &&
     FUNC_1(&VAR_2->txq[VAR_0]) &&
     FUNC_3(VAR_0, &VAR_2->txq_stopped)) {
  VAR_2->txq[VAR_0].restarts++;
  FUNC_2(VAR_3->tq, &VAR_2->txq[VAR_0].qresume_task);
 }
}
