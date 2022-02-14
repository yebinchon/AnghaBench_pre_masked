
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct rt2860_tx_ring {size_t next; int queued; struct rt2860_tx_data** data; } ;
struct rt2860_tx_data {int * m; int * ni; int map; } ;
struct rt2860_softc {int qfullmsk; scalar_t__ sc_tx_timer; int data_pool; int txwi_dmat; struct rt2860_tx_ring* txq; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct rt2860_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct rt2860_tx_data*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct rt2860_softc*) ;
 int FUNC_7 (struct rt2860_softc*) ;

__attribute__((used)) static void
FUNC_8(struct rt2860_softc *VAR_3, int VAR_4)
{
 struct rt2860_tx_ring *VAR_5 = &VAR_3->txq[VAR_4];
 uint32_t VAR_6;

 FUNC_6(VAR_3);

 VAR_6 = FUNC_0(VAR_3, FUNC_1(VAR_4));
 while (VAR_5->next != VAR_6) {
  struct rt2860_tx_data *VAR_7 = VAR_5->data[VAR_5->next];

  if (VAR_7 != ((void*)0)) {
   FUNC_3(VAR_3->txwi_dmat, VAR_7->map,
       VAR_0);
   FUNC_4(VAR_3->txwi_dmat, VAR_7->map);
   FUNC_5(VAR_7->ni, VAR_7->m, 0);
   VAR_7->ni = ((void*)0);
   VAR_7->m = ((void*)0);
   FUNC_2(&VAR_3->data_pool, VAR_7, VAR_2);
   VAR_5->data[VAR_5->next] = ((void*)0);
  }
  VAR_5->queued--;
  VAR_5->next = (VAR_5->next + 1) % VAR_1;
 }

 VAR_3->sc_tx_timer = 0;
 if (VAR_5->queued < VAR_1)
  VAR_3->qfullmsk &= ~(1 << VAR_4);
 FUNC_7(VAR_3);
}
