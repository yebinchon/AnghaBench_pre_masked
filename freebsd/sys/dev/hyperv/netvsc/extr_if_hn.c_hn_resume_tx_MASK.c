
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {int hn_tx_lock; scalar_t__ hn_suspended; } ;
struct hn_softc {int hn_tx_ring_cnt; struct hn_tx_ring* hn_tx_ring; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct hn_softc *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1 <= VAR_0->hn_tx_ring_cnt,
     ("invalid TX ring count %d", VAR_1));

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  struct hn_tx_ring *VAR_3 = &VAR_0->hn_tx_ring[VAR_2];

  FUNC_1(&VAR_3->hn_tx_lock);
  VAR_3->hn_suspended = 0;
  FUNC_2(&VAR_3->hn_tx_lock);
 }
}
