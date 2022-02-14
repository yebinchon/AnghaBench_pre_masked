
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_txdesc {scalar_t__ sdl1; scalar_t__ sdl0; } ;
struct rt_softc_tx_ring {scalar_t__ data_next; scalar_t__ data_cur; scalar_t__ data_queued; int data_dma_tag; struct rt_softc_tx_data* data; int seg0_dma_map; int seg0_dma_tag; int desc_dma_map; int desc_dma_tag; scalar_t__ desc_next; scalar_t__ desc_cur; scalar_t__ desc_queued; struct rt_txdesc* desc; } ;
struct rt_softc_tx_data {int * m; int dma_map; } ;
struct rt_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct rt_softc *VAR_4, struct rt_softc_tx_ring *VAR_5)
{
 struct rt_softc_tx_data *VAR_6;
 struct rt_txdesc *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = &VAR_5->desc[VAR_8];

  VAR_7->sdl0 = 0;
  VAR_7->sdl1 = 0;
 }

 VAR_5->desc_queued = 0;
 VAR_5->desc_cur = 0;
 VAR_5->desc_next = 0;

 FUNC_0(VAR_5->desc_dma_tag, VAR_5->desc_dma_map,
  VAR_1);

 FUNC_0(VAR_5->seg0_dma_tag, VAR_5->seg0_dma_map,
  VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6 = &VAR_5->data[VAR_8];

  if (VAR_6->m != ((void*)0)) {
   FUNC_0(VAR_5->data_dma_tag, VAR_6->dma_map,
    VAR_0);
   FUNC_1(VAR_5->data_dma_tag, VAR_6->dma_map);
   FUNC_2(VAR_6->m);
   VAR_6->m = ((void*)0);
  }
 }

 VAR_5->data_queued = 0;
 VAR_5->data_cur = 0;
 VAR_5->data_next = 0;
}
