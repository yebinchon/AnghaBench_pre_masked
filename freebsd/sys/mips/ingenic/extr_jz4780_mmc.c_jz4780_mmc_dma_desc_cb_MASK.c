
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jz4780_mmc_softc {int sc_dma_map_err; int sc_dma_desc_phys; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct jz4780_mmc_softc *VAR_4;

 VAR_4 = (struct jz4780_mmc_softc *)VAR_0;
 if (VAR_3) {
  VAR_4->sc_dma_map_err = VAR_3;
  return;
 }
 VAR_4->sc_dma_desc_phys = VAR_1[0].ds_addr;
}
