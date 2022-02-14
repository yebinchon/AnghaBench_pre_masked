
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {int hn_suspended; int hn_txeof_task; int hn_tx_taskq; int hn_tx_task; int hn_tx_lock; } ;
struct hn_softc {int hn_tx_ring_inuse; struct hn_tx_ring* hn_tx_ring; int hn_rx_ring_inuse; int hn_prichan; } ;


 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*,int ) ;
 scalar_t__ FUNC_3 (struct hn_tx_ring*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct hn_softc *VAR_0)
{
 struct hn_tx_ring *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0);




 for (VAR_2 = 0; VAR_2 < VAR_0->hn_tx_ring_inuse; ++VAR_2) {
  VAR_1 = &VAR_0->hn_tx_ring[VAR_2];

  FUNC_4(&VAR_1->hn_tx_lock);
  VAR_1->hn_suspended = 1;
  FUNC_5(&VAR_1->hn_tx_lock);
  while (FUNC_3(VAR_1) &&
      !FUNC_8(VAR_0->hn_prichan))
   FUNC_6("hnwtx", 1 );
 }




 FUNC_1(VAR_0);




 FUNC_2(VAR_0, VAR_0->hn_rx_ring_inuse);
 for (VAR_2 = 0; VAR_2 < VAR_0->hn_tx_ring_inuse; ++VAR_2) {
  VAR_1 = &VAR_0->hn_tx_ring[VAR_2];

  FUNC_7(VAR_1->hn_tx_taskq, &VAR_1->hn_tx_task);
  FUNC_7(VAR_1->hn_tx_taskq, &VAR_1->hn_txeof_task);
 }
}
