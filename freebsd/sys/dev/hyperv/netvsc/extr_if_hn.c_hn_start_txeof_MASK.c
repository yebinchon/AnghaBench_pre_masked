
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct hn_tx_ring {int hn_txeof_task; int hn_tx_taskq; int hn_tx_task; int hn_tx_lock; int hn_direct_tx_size; scalar_t__ hn_sched_tx; struct hn_softc* hn_sc; } ;
struct hn_softc {struct hn_tx_ring* hn_tx_ring; struct ifnet* hn_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hn_tx_ring*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct hn_tx_ring *VAR_1)
{
 struct hn_softc *VAR_2 = VAR_1->hn_sc;
 struct ifnet *VAR_3 = VAR_2->hn_ifp;

 FUNC_0(VAR_1 == &VAR_2->hn_tx_ring[0], ("not the first TX ring"));

 if (VAR_1->hn_sched_tx)
  goto do_sched;

 if (FUNC_3(&VAR_1->hn_tx_lock)) {
  int VAR_4;

  FUNC_1(&VAR_3->if_drv_flags, VAR_0);
  VAR_4 = FUNC_2(VAR_1, VAR_1->hn_direct_tx_size);
  FUNC_4(&VAR_1->hn_tx_lock);
  if (VAR_4) {
   FUNC_5(VAR_1->hn_tx_taskq,
       &VAR_1->hn_tx_task);
  }
 } else {
do_sched:






  FUNC_1(&VAR_3->if_drv_flags, VAR_0);
  FUNC_5(VAR_1->hn_tx_taskq, &VAR_1->hn_txeof_task);
 }
}
