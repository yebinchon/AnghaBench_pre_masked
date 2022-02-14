
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seg_load_request {int error; int nsegs; struct bus_dma_segment* seg; } ;
struct bus_dma_segment {int ds_len; int ds_addr; } ;
struct TYPE_3__ {int ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct seg_load_request *VAR_4;
 struct bus_dma_segment *VAR_5;
 int VAR_6;

 VAR_4 = VAR_0;
 VAR_5 = VAR_4->seg;

 if (VAR_3 != 0) {
  VAR_4->error = VAR_3;
  return;
 }

 VAR_4->nsegs = VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5[VAR_6].ds_addr = VAR_1[VAR_6].ds_addr;
  VAR_5[VAR_6].ds_len = VAR_1[VAR_6].ds_len;
 }
}
