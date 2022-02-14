
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bus_dma_tag_common {TYPE_1__* impl; } ;
typedef int bus_size_t ;
typedef int * bus_dma_tag_t ;
typedef int bus_dma_lock_t ;
typedef int bus_dma_filter_t ;
typedef int bus_addr_t ;
struct TYPE_4__ {int (* tag_create ) (int *,int ,int ,int ,int ,int *,void*,int ,int,int ,int,int *,void*,int **) ;} ;
struct TYPE_3__ {int (* tag_create ) (int *,int ,int ,int ,int ,int *,void*,int ,int,int ,int,int *,void*,int **) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *,void*,int ,int,int ,int,int *,void*,int **) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int *,void*,int ,int,int ,int,int *,void*,int **) ;

int
FUNC_2(bus_dma_tag_t VAR_1, bus_size_t VAR_2,
    bus_addr_t VAR_3, bus_addr_t VAR_4, bus_addr_t VAR_5,
    bus_dma_filter_t *VAR_6, void *VAR_7, bus_size_t VAR_8,
    int VAR_9, bus_size_t VAR_10, int VAR_11, bus_dma_lock_t *VAR_12,
    void *VAR_13, bus_dma_tag_t *VAR_14)
{
 struct bus_dma_tag_common *VAR_15;
 int VAR_16;

 if (VAR_1 == ((void*)0)) {
  VAR_16 = VAR_0.tag_create(VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
 } else {
  VAR_15 = (struct bus_dma_tag_common *)VAR_1;
  VAR_16 = VAR_15->impl->tag_create(VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
 }
 return (VAR_16);
}
