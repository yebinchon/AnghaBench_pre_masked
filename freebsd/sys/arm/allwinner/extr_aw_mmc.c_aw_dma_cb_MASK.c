
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aw_mmc_softc {int aw_dma_map_err; scalar_t__ aw_dma_desc_phys; TYPE_1__* aw_mmc_conf; struct aw_mmc_dma_desc* aw_dma_desc; } ;
struct aw_mmc_dma_desc {scalar_t__ buf_size; int config; scalar_t__ next; int buf_addr; } ;
struct TYPE_5__ {scalar_t__ ds_len; int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_4__ {scalar_t__ dma_xferlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(void *VAR_6, bus_dma_segment_t *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 struct aw_mmc_dma_desc *VAR_11;
 struct aw_mmc_softc *VAR_12;

 VAR_12 = (struct aw_mmc_softc *)VAR_6;
 VAR_12->aw_dma_map_err = VAR_9;

 if (VAR_9)
  return;

 VAR_11 = VAR_12->aw_dma_desc;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  if (VAR_7[VAR_10].ds_len == VAR_12->aw_mmc_conf->dma_xferlen)
   VAR_11[VAR_10].buf_size = 0;
  else
   VAR_11[VAR_10].buf_size = VAR_7[VAR_10].ds_len;
  VAR_11[VAR_10].buf_addr = VAR_7[VAR_10].ds_addr;
  VAR_11[VAR_10].config = VAR_0 |
   VAR_5 | VAR_1;

  VAR_11[VAR_10].next = VAR_12->aw_dma_desc_phys +
   ((VAR_10 + 1) * sizeof(struct aw_mmc_dma_desc));
 }

 VAR_11[0].config |= VAR_3;
 VAR_11[VAR_8 - 1].config |= VAR_4 |
  VAR_2;
 VAR_11[VAR_8 - 1].config &= ~VAR_1;
 VAR_11[VAR_8 - 1].next = 0;
}
