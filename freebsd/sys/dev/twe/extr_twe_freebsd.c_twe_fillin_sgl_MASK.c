
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;
struct TYPE_6__ {scalar_t__ length; scalar_t__ address; } ;
typedef TYPE_2__ TWE_SG_Entry ;



__attribute__((used)) static void
FUNC_0(TWE_SG_Entry *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
 VAR_0[VAR_4].address = VAR_1[VAR_4].ds_addr;
 VAR_0[VAR_4].length = VAR_1[VAR_4].ds_len;
    }
    for (; VAR_4 < VAR_3; VAR_4++) {
 VAR_0[VAR_4].address = 0;
 VAR_0[VAR_4].length = 0;
    }
}
