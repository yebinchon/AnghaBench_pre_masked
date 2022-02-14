
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bcm_sdhci_softc {int dmamap_status; int dmamap_seg_count; int * dmamap_seg_sizes; int * dmamap_seg_addrs; } ;
struct TYPE_3__ {int ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct bcm_sdhci_softc *VAR_4 = VAR_0;
 int VAR_5;

 VAR_4->dmamap_status = VAR_3;
 VAR_4->dmamap_seg_count = VAR_2;


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->dmamap_seg_addrs[VAR_5] = VAR_1[VAR_5].ds_addr;
  VAR_4->dmamap_seg_sizes[VAR_5] = VAR_1[VAR_5].ds_len;
 }
}
