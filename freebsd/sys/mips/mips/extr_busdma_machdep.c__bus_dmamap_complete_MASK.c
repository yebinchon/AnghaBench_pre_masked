
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
typedef int bus_dma_segment_t ;
struct TYPE_3__ {int * segments; } ;



bus_dma_segment_t *
FUNC_0(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1,
    bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{

 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_0->segments;
 return (VAR_2);
}
