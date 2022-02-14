
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_tx_ring {scalar_t__ cur; scalar_t__ last; scalar_t__ queued; int desc_map; int desc_dmat; int data_dmat; scalar_t__ desc; struct rtwn_tx_data* tx_data; } ;
struct rtwn_tx_data {int * ni; int * m; int map; } ;
struct rtwn_softc {int txdesc_len; int qfullmsk; } ;
struct rtwn_pci_softc {struct rtwn_tx_ring* tx_ring; } ;


 int VAR_0 ;
 struct rtwn_pci_softc* FUNC_0 (struct rtwn_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rtwn_pci_softc*,void*,int *) ;

__attribute__((used)) static void
FUNC_6(struct rtwn_softc *VAR_2, int VAR_3)
{
 struct rtwn_pci_softc *VAR_4 = FUNC_0(VAR_2);
 struct rtwn_tx_ring *VAR_5 = &VAR_4->tx_ring[VAR_3];
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct rtwn_tx_data *VAR_7 = &VAR_5->tx_data[VAR_6];
  void *VAR_8 = (uint8_t *)VAR_5->desc + VAR_2->txdesc_len * VAR_6;

  FUNC_5(VAR_4, VAR_8, ((void*)0));

  if (VAR_7->m != ((void*)0)) {
   FUNC_1(VAR_5->data_dmat, VAR_7->map,
       VAR_0);
   FUNC_2(VAR_5->data_dmat, VAR_7->map);
   FUNC_4(VAR_7->m);
   VAR_7->m = ((void*)0);
  }
  if (VAR_7->ni != ((void*)0)) {
   FUNC_3(VAR_7->ni);
   VAR_7->ni = ((void*)0);
  }
 }

 FUNC_1(VAR_5->desc_dmat, VAR_5->desc_map,
     VAR_0);

 VAR_2->qfullmsk &= ~(1 << VAR_3);
 VAR_5->queued = 0;
 VAR_5->last = VAR_5->cur = 0;
}
