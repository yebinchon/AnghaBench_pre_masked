
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc_rx_ring {int * data_dma_tag; int * spare_dma_map; struct rt_softc_rx_data* data; int * desc_dma_tag; int * desc_dma_map; int * desc; } ;
struct rt_softc_rx_data {int * dma_map; int * m; } ;
struct rt_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct rt_softc *VAR_3, struct rt_softc_rx_ring *VAR_4)
{
 struct rt_softc_rx_data *VAR_5;
 int VAR_6;

 if (VAR_4->desc != ((void*)0)) {
  FUNC_2(VAR_4->desc_dma_tag, VAR_4->desc_dma_map,
   VAR_1);
  FUNC_3(VAR_4->desc_dma_tag, VAR_4->desc_dma_map);
  FUNC_4(VAR_4->desc_dma_tag, VAR_4->desc,
   VAR_4->desc_dma_map);
 }

 if (VAR_4->desc_dma_tag != ((void*)0))
  FUNC_0(VAR_4->desc_dma_tag);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = &VAR_4->data[VAR_6];

  if (VAR_5->m != ((void*)0)) {
   FUNC_2(VAR_4->data_dma_tag, VAR_5->dma_map,
    VAR_0);
   FUNC_3(VAR_4->data_dma_tag, VAR_5->dma_map);
   FUNC_5(VAR_5->m);
  }

  if (VAR_5->dma_map != ((void*)0))
   FUNC_1(VAR_4->data_dma_tag, VAR_5->dma_map);
 }

 if (VAR_4->spare_dma_map != ((void*)0))
  FUNC_1(VAR_4->data_dma_tag, VAR_4->spare_dma_map);

 if (VAR_4->data_dma_tag != ((void*)0))
  FUNC_0(VAR_4->data_dma_tag);
}
