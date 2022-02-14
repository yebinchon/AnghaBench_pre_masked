
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;



uint32_t
FUNC_0(void *VAR_0, void *VAR_1)
{
 bus_dma_segment_t *VAR_2 = (bus_dma_segment_t *)VAR_1;

 return ((uint32_t)VAR_2->ds_len);
}
