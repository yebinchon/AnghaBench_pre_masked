
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bus_size_t ;
typedef int bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_6__ {int ds_addr; int ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_5__ {int boundary; int maxsegsz; int nsegments; } ;



__attribute__((used)) static int
FUNC_0(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1, bus_addr_t VAR_2,
    bus_size_t VAR_3, bus_dma_segment_t *VAR_4, int *VAR_5)
{
 bus_addr_t VAR_6, VAR_7;
 int VAR_8;




 VAR_7 = ~(VAR_0->boundary - 1);
 if (VAR_0->boundary > 0) {
  VAR_6 = (VAR_2 + VAR_0->boundary) & VAR_7;
  if (VAR_3 > (VAR_6 - VAR_2))
   VAR_3 = (VAR_6 - VAR_2);
 }




 VAR_8 = *VAR_5;
 if (VAR_8 >= 0 &&
     VAR_2 == VAR_4[VAR_8].ds_addr + VAR_4[VAR_8].ds_len &&
     (VAR_4[VAR_8].ds_len + VAR_3) <= VAR_0->maxsegsz &&
     (VAR_0->boundary == 0 ||
      (VAR_4[VAR_8].ds_addr & VAR_7) == (VAR_2 & VAR_7))) {
  VAR_4[VAR_8].ds_len += VAR_3;
 } else {
  if (++VAR_8 >= VAR_0->nsegments)
   return (0);
  VAR_4[VAR_8].ds_addr = VAR_2;
  VAR_4[VAR_8].ds_len = VAR_3;
 }
 *VAR_5 = VAR_8;
 return (VAR_3);
}
