
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdma_sglist {scalar_t__ direction; int first; int last; int len; int dst_addr; int src_addr; int dst_width; int src_width; } ;
struct xdma_request {scalar_t__ direction; int src_addr; int dst_addr; int dst_width; int src_width; } ;
struct bus_dma_segment {int ds_len; int ds_addr; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct xdma_sglist *VAR_1, struct bus_dma_segment *VAR_2,
    uint32_t VAR_3, struct xdma_request *VAR_4)
{
 int VAR_5;

 if (VAR_3 == 0)
  return (-1);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_1[VAR_5].src_width = VAR_4->src_width;
  VAR_1[VAR_5].dst_width = VAR_4->dst_width;

  if (VAR_4->direction == VAR_0) {
   VAR_1[VAR_5].src_addr = VAR_2[VAR_5].ds_addr;
   VAR_1[VAR_5].dst_addr = VAR_4->dst_addr;
  } else {
   VAR_1[VAR_5].src_addr = VAR_4->src_addr;
   VAR_1[VAR_5].dst_addr = VAR_2[VAR_5].ds_addr;
  }
  VAR_1[VAR_5].len = VAR_2[VAR_5].ds_len;
  VAR_1[VAR_5].direction = VAR_4->direction;

  VAR_1[VAR_5].first = 0;
  VAR_1[VAR_5].last = 0;
 }

 VAR_1[0].first = 1;
 VAR_1[VAR_3 - 1].last = 1;

 return (0);
}
