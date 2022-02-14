
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {int hn_txeof_task; int hn_tx_taskq; scalar_t__ hn_oactive; int hn_tx_task; int hn_tx_lock; int hn_direct_tx_size; scalar_t__ hn_sched_tx; } ;


 int FUNC_0 (struct hn_tx_ring*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct hn_tx_ring *VAR_0)
{

 if (VAR_0->hn_sched_tx)
  goto do_sched;

 if (FUNC_1(&VAR_0->hn_tx_lock)) {
  int VAR_1;

  VAR_0->hn_oactive = 0;
  VAR_1 = FUNC_0(VAR_0, VAR_0->hn_direct_tx_size);
  FUNC_2(&VAR_0->hn_tx_lock);
  if (VAR_1) {
   FUNC_3(VAR_0->hn_tx_taskq,
       &VAR_0->hn_tx_task);
  }
 } else {
do_sched:






  VAR_0->hn_oactive = 0;
  FUNC_3(VAR_0->hn_tx_taskq, &VAR_0->hn_txeof_task);
 }
}
