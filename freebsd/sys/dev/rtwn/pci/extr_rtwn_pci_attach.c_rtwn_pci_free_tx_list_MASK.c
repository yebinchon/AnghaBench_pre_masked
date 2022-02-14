
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_tx_ring {scalar_t__ cur; scalar_t__ last; scalar_t__ queued; int * data_dmat; struct rtwn_tx_data* tx_data; int * desc_dmat; int desc_map; int * desc; } ;
struct rtwn_tx_data {int * m; int map; } ;
struct rtwn_softc {int qfullmsk; } ;
struct rtwn_pci_softc {struct rtwn_tx_ring* tx_ring; } ;


 int VAR_0 ;
 struct rtwn_pci_softc* FUNC_0 (struct rtwn_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct rtwn_softc *VAR_2, int VAR_3)
{
 struct rtwn_pci_softc *VAR_4 = FUNC_0(VAR_2);
 struct rtwn_tx_ring *VAR_5 = &VAR_4->tx_ring[VAR_3];
 struct rtwn_tx_data *VAR_6;
 int VAR_7;

 if (VAR_5->desc_dmat != ((void*)0)) {
  if (VAR_5->desc != ((void*)0)) {
   FUNC_2(VAR_5->desc_dmat,
       VAR_5->desc_map, VAR_0);
   FUNC_3(VAR_5->desc_dmat,
       VAR_5->desc_map);
   FUNC_4(VAR_5->desc_dmat, VAR_5->desc,
       VAR_5->desc_map);
  }
  FUNC_1(VAR_5->desc_dmat);
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = &VAR_5->tx_data[VAR_7];

  if (VAR_6->m != ((void*)0)) {
   FUNC_2(VAR_5->data_dmat, VAR_6->map,
       VAR_0);
   FUNC_3(VAR_5->data_dmat, VAR_6->map);
   FUNC_5(VAR_6->m);
   VAR_6->m = ((void*)0);
  }
 }
 if (VAR_5->data_dmat != ((void*)0)) {
  FUNC_1(VAR_5->data_dmat);
  VAR_5->data_dmat = ((void*)0);
 }

 VAR_2->qfullmsk &= ~(1 << VAR_3);
 VAR_5->queued = 0;
 VAR_5->last = VAR_5->cur = 0;
}
