
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct jz4780_mmc_softc {int sc_dma_map_err; int sc_dev; scalar_t__ sc_dma_desc_phys; struct jz4780_mmc_dma_desc* sc_dma_desc; } ;
struct jz4780_mmc_dma_desc {int dma_cmd; scalar_t__ dma_next; int dma_len; int dma_phys; } ;
struct TYPE_3__ {int ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,scalar_t__,int ,int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2, bus_dma_segment_t *VAR_3, int VAR_4, int VAR_5)
{
 struct jz4780_mmc_dma_desc *VAR_6;
 struct jz4780_mmc_softc *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_7 = (struct jz4780_mmc_softc *)VAR_2;
 VAR_7->sc_dma_map_err = VAR_5;
 VAR_6 = VAR_7->sc_dma_desc;
 VAR_8 = VAR_7->sc_dma_desc_phys;


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_6[VAR_9].dma_phys = VAR_3[VAR_9].ds_addr;
  VAR_6[VAR_9].dma_len = VAR_3[VAR_9].ds_len;
  if (VAR_9 < (VAR_4 - 1)) {
   VAR_8 += sizeof(struct jz4780_mmc_dma_desc);
   VAR_6[VAR_9].dma_next = VAR_8;
   VAR_6[VAR_9].dma_cmd = (VAR_9 << 16) | VAR_1;
  } else {
   VAR_6[VAR_9].dma_next = 0;
   VAR_6[VAR_9].dma_cmd = (VAR_9 << 16) | VAR_0;
  }






  }
}
