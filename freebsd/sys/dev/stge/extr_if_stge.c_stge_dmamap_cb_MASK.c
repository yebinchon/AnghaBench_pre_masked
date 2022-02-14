
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stge_dmamap_arg {int stge_busaddr; } ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct stge_dmamap_arg *VAR_4;

 if (VAR_3 != 0)
  return;

 VAR_4 = (struct stge_dmamap_arg *)VAR_0;
 VAR_4->stge_busaddr = VAR_1[0].ds_addr;
}
