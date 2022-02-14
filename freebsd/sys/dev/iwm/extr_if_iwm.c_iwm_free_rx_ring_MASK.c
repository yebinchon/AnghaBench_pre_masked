
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_softc {TYPE_1__* cfg; } ;
struct iwm_rx_ring {int * data_dmat; int * spare_map; struct iwm_rx_data* data; int used_desc_dma; int stat_dma; int free_desc_dma; } ;
struct iwm_rx_data {int * map; int * m; } ;
struct TYPE_2__ {scalar_t__ mqrx_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct iwm_softc *VAR_3, struct iwm_rx_ring *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_4(&VAR_4->free_desc_dma);
 FUNC_4(&VAR_4->stat_dma);
 FUNC_4(&VAR_4->used_desc_dma);

 VAR_5 = VAR_3->cfg->mqrx_supported ? VAR_2 :
     VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct iwm_rx_data *VAR_7 = &VAR_4->data[VAR_6];

  if (VAR_7->m != ((void*)0)) {
   FUNC_2(VAR_4->data_dmat, VAR_7->map,
       VAR_0);
   FUNC_3(VAR_4->data_dmat, VAR_7->map);
   FUNC_5(VAR_7->m);
   VAR_7->m = ((void*)0);
  }
  if (VAR_7->map != ((void*)0)) {
   FUNC_1(VAR_4->data_dmat, VAR_7->map);
   VAR_7->map = ((void*)0);
  }
 }
 if (VAR_4->spare_map != ((void*)0)) {
  FUNC_1(VAR_4->data_dmat, VAR_4->spare_map);
  VAR_4->spare_map = ((void*)0);
 }
 if (VAR_4->data_dmat != ((void*)0)) {
  FUNC_0(VAR_4->data_dmat);
  VAR_4->data_dmat = ((void*)0);
 }
}
