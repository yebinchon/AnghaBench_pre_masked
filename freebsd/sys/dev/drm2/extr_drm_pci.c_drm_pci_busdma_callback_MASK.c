
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int busaddr; } ;
typedef TYPE_1__ drm_dma_handle_t ;
struct TYPE_5__ {int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 drm_dma_handle_t *VAR_4 = VAR_0;

 if (VAR_3 != 0)
  return;

 FUNC_0(VAR_2 == 1, ("drm_pci_busdma_callback: bad dma segment count"));
 VAR_4->busaddr = VAR_1[0].ds_addr;
}
