
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 uint32_t *VAR_4;

 if (VAR_3)
  return;

 FUNC_0(VAR_2 == 1, ("too many DMA segments, %d should be 1", VAR_2));
 VAR_4 = VAR_0;
 *VAR_4 = VAR_1->ds_addr;
}
