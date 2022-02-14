
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {int hn_txeof_task; int hn_tx_taskq; } ;
struct hn_softc {int hn_tx_ring_cnt; int hn_tx_ring_inuse; struct hn_tx_ring* hn_tx_ring; } ;


 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct hn_softc*,int) ;
 int FUNC_2 (struct hn_softc*) ;
 int FUNC_3 (struct hn_tx_ring*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct hn_softc *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);




 FUNC_2(VAR_1);






 FUNC_1(VAR_1, VAR_1->hn_tx_ring_cnt);




 {




  for (VAR_2 = VAR_1->hn_tx_ring_inuse; VAR_2 < VAR_1->hn_tx_ring_cnt; ++VAR_2)
   FUNC_3(&VAR_1->hn_tx_ring[VAR_2]);
 }




 for (VAR_2 = 0; VAR_2 < VAR_1->hn_tx_ring_inuse; ++VAR_2) {
  struct hn_tx_ring *VAR_3 = &VAR_1->hn_tx_ring[VAR_2];





  FUNC_4(VAR_3->hn_tx_taskq, &VAR_3->hn_txeof_task);
 }
}
