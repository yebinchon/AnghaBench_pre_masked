
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_flags; int hn_tx_ring_cnt; scalar_t__ hn_tx_ring_inuse; int * hn_tx_ring; int * hn_chim; int hn_dev; int hn_chim_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct hn_softc *VAR_2)
{
 int VAR_3;

 if (VAR_2->hn_chim != ((void*)0)) {
  if ((VAR_2->hn_flags & VAR_0) == 0) {
   FUNC_3(&VAR_2->hn_chim_dma, VAR_2->hn_chim);
  } else {
   FUNC_0(VAR_2->hn_dev,
       "chimney sending buffer is referenced");
  }
  VAR_2->hn_chim = ((void*)0);
 }

 if (VAR_2->hn_tx_ring_cnt == 0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->hn_tx_ring_cnt; ++VAR_3)
  FUNC_2(&VAR_2->hn_tx_ring[VAR_3]);

 FUNC_1(VAR_2->hn_tx_ring, VAR_1);
 VAR_2->hn_tx_ring = ((void*)0);

 VAR_2->hn_tx_ring_cnt = 0;
 VAR_2->hn_tx_ring_inuse = 0;
}
