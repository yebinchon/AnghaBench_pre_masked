
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
        if (VAR_3 != 0)
                return;
 FUNC_0(VAR_2 == 1, ("too many DMA segments, %d should be 1", VAR_2));
 *(bus_addr_t *)VAR_0 = VAR_1[0].ds_addr;
}
