
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_dma_tag {void* maxsize; void* alignment; } ;
typedef void* bus_size_t ;
typedef struct bus_dma_tag* bus_dma_tag_t ;
typedef int bus_dma_lock_t ;
typedef int bus_dma_filter_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bus_dma_tag* FUNC_0 (int,int ,int ) ;

int
FUNC_1(bus_dma_tag_t VAR_2, bus_size_t VAR_3,
     bus_size_t VAR_4, bus_addr_t VAR_5,
     bus_addr_t VAR_6, bus_dma_filter_t *VAR_7,
     void *VAR_8, bus_size_t VAR_9, int VAR_10,
     bus_size_t VAR_11, int VAR_12, bus_dma_lock_t *VAR_13,
     void *VAR_14, bus_dma_tag_t *VAR_15)
{
 struct bus_dma_tag *VAR_16;

 VAR_16 = FUNC_0(sizeof(struct bus_dma_tag), VAR_1, VAR_1);
 if (*VAR_15 == ((void*)0))
  return (VAR_0);
 VAR_16->alignment = VAR_3;
 VAR_16->maxsize = VAR_9;

 *VAR_15 = VAR_16;

 return (0);
}
