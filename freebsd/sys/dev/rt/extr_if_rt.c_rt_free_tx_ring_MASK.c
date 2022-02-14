
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc_tx_ring {int lock; int * data_dma_tag; struct rt_softc_tx_data* data; int * seg0_dma_tag; int * seg0_dma_map; int * seg0; int * desc_dma_tag; int * desc_dma_map; int * desc; } ;
struct rt_softc_tx_data {int * dma_map; int * m; } ;
struct rt_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct rt_softc *VAR_2, struct rt_softc_tx_ring *VAR_3)
{
 struct rt_softc_tx_data *VAR_4;
 int VAR_5;

 if (VAR_3->desc != ((void*)0)) {
  FUNC_2(VAR_3->desc_dma_tag, VAR_3->desc_dma_map,
   VAR_0);
  FUNC_3(VAR_3->desc_dma_tag, VAR_3->desc_dma_map);
  FUNC_4(VAR_3->desc_dma_tag, VAR_3->desc,
   VAR_3->desc_dma_map);
 }

 if (VAR_3->desc_dma_tag != ((void*)0))
  FUNC_0(VAR_3->desc_dma_tag);

 if (VAR_3->seg0 != ((void*)0)) {
  FUNC_2(VAR_3->seg0_dma_tag, VAR_3->seg0_dma_map,
   VAR_0);
  FUNC_3(VAR_3->seg0_dma_tag, VAR_3->seg0_dma_map);
  FUNC_4(VAR_3->seg0_dma_tag, VAR_3->seg0,
   VAR_3->seg0_dma_map);
 }

 if (VAR_3->seg0_dma_tag != ((void*)0))
  FUNC_0(VAR_3->seg0_dma_tag);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->data[VAR_5];

  if (VAR_4->m != ((void*)0)) {
   FUNC_2(VAR_3->data_dma_tag, VAR_4->dma_map,
    VAR_0);
   FUNC_3(VAR_3->data_dma_tag, VAR_4->dma_map);
   FUNC_5(VAR_4->m);
  }

  if (VAR_4->dma_map != ((void*)0))
   FUNC_1(VAR_3->data_dma_tag, VAR_4->dma_map);
 }

 if (VAR_3->data_dma_tag != ((void*)0))
  FUNC_0(VAR_3->data_dma_tag);

 FUNC_6(&VAR_3->lock);
}
