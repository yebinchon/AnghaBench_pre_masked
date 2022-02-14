
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int bus_size_t ;
typedef int bus_dmamap_t ;
typedef int (* bus_dmamap_callback_t ) (void*,TYPE_1__*,int,int ) ;
typedef int bus_dma_tag_t ;
struct TYPE_5__ {uintptr_t ds_addr; int ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (void*,TYPE_1__*,int,int ) ;

int
FUNC_1(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1, void *VAR_2,
    bus_size_t VAR_3, bus_dmamap_callback_t *VAR_4,
    void *VAR_5, int VAR_6)
{
 bus_dma_segment_t VAR_7[1];

 VAR_7[0].ds_addr = (uintptr_t)VAR_2;
 VAR_7[0].ds_len = VAR_3;

 (*VAR_4)(VAR_5, VAR_7, 1, 0);

 return (0);
}
