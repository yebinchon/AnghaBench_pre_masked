
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_tx_ring {int * data_dmat; struct iwm_tx_data* data; int cmd_dma; int desc_dma; } ;
struct iwm_tx_data {int * map; int * m; } ;
struct iwm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct iwm_softc *VAR_2, struct iwm_tx_ring *VAR_3)
{
 int VAR_4;

 FUNC_4(&VAR_3->desc_dma);
 FUNC_4(&VAR_3->cmd_dma);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct iwm_tx_data *VAR_5 = &VAR_3->data[VAR_4];

  if (VAR_5->m != ((void*)0)) {
   FUNC_2(VAR_3->data_dmat, VAR_5->map,
       VAR_0);
   FUNC_3(VAR_3->data_dmat, VAR_5->map);
   FUNC_5(VAR_5->m);
   VAR_5->m = ((void*)0);
  }
  if (VAR_5->map != ((void*)0)) {
   FUNC_1(VAR_3->data_dmat, VAR_5->map);
   VAR_5->map = ((void*)0);
  }
 }
 if (VAR_3->data_dmat != ((void*)0)) {
  FUNC_0(VAR_3->data_dmat);
  VAR_3->data_dmat = ((void*)0);
 }
}
