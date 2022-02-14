
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_txq {int xen_intr_handle; } ;
struct netfront_rxq {int dummy; } ;
struct netfront_info {int num_queues; struct netfront_rxq* rxq; struct netfront_txq* txq; } ;


 int FUNC_0 (struct netfront_rxq*) ;
 int FUNC_1 (struct netfront_rxq*) ;
 int FUNC_2 (struct netfront_txq*) ;
 int FUNC_3 (struct netfront_txq*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct netfront_rxq*) ;
 int FUNC_6 (struct netfront_txq*) ;

__attribute__((used)) static void
FUNC_7(struct netfront_info *VAR_0)
{
 struct netfront_rxq *VAR_1;
 struct netfront_txq *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_queues; VAR_3++) {
  VAR_2 = &VAR_0->txq[VAR_3];
  VAR_1 = &VAR_0->rxq[VAR_3];
  FUNC_4(VAR_2->xen_intr_handle);
  FUNC_2(VAR_2);
  FUNC_6(VAR_2);
  FUNC_3(VAR_2);
  FUNC_0(VAR_1);
  FUNC_5(VAR_1);
  FUNC_1(VAR_1);
 }
}
