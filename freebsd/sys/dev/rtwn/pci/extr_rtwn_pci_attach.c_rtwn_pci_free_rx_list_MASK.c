
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct rtwn_rx_ring {int * data_dmat; struct rtwn_rx_data* rx_data; int * desc_dmat; int * desc; int * desc_map; } ;
struct rtwn_rx_data {int * map; int * m; } ;
struct rtwn_pci_softc {struct rtwn_rx_ring rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtwn_pci_softc* FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct rtwn_softc *VAR_3)
{
 struct rtwn_pci_softc *VAR_4 = FUNC_0(VAR_3);
 struct rtwn_rx_ring *VAR_5 = &VAR_4->rx_ring;
 struct rtwn_rx_data *VAR_6;
 int VAR_7;

 if (VAR_5->desc_dmat != ((void*)0)) {
  if (VAR_5->desc != ((void*)0)) {
   FUNC_3(VAR_5->desc_dmat,
       VAR_5->desc_map,
       VAR_0 | VAR_1);
   FUNC_4(VAR_5->desc_dmat,
       VAR_5->desc_map);
   FUNC_5(VAR_5->desc_dmat, VAR_5->desc,
       VAR_5->desc_map);
   VAR_5->desc = ((void*)0);
  }
  FUNC_1(VAR_5->desc_dmat);
  VAR_5->desc_dmat = ((void*)0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_6 = &VAR_5->rx_data[VAR_7];

  if (VAR_6->m != ((void*)0)) {
   FUNC_3(VAR_5->data_dmat,
       VAR_6->map, VAR_0);
   FUNC_4(VAR_5->data_dmat, VAR_6->map);
   FUNC_6(VAR_6->m);
   VAR_6->m = ((void*)0);
  }
  FUNC_2(VAR_5->data_dmat, VAR_6->map);
  VAR_6->map = ((void*)0);
 }
 if (VAR_5->data_dmat != ((void*)0)) {
  FUNC_1(VAR_5->data_dmat);
  VAR_5->data_dmat = ((void*)0);
 }
}
