
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct hn_softc* if_softc; } ;
struct hn_tx_ring {int hn_tx_task; int hn_tx_taskq; int hn_tx_lock; int hn_direct_tx_size; scalar_t__ hn_sched_tx; } ;
struct hn_softc {struct hn_tx_ring* hn_tx_ring; } ;


 int FUNC_0 (struct hn_tx_ring*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_0)
{
 struct hn_softc *VAR_1 = VAR_0->if_softc;
 struct hn_tx_ring *VAR_2 = &VAR_1->hn_tx_ring[0];

 if (VAR_2->hn_sched_tx)
  goto do_sched;

 if (FUNC_1(&VAR_2->hn_tx_lock)) {
  int VAR_3;

  VAR_3 = FUNC_0(VAR_2, VAR_2->hn_direct_tx_size);
  FUNC_2(&VAR_2->hn_tx_lock);
  if (!VAR_3)
   return;
 }
do_sched:
 FUNC_3(VAR_2->hn_tx_taskq, &VAR_2->hn_tx_task);
}
