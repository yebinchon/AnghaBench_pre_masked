
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_dma_tag_common {TYPE_1__* impl; } ;
typedef scalar_t__ bus_dma_tag_t ;
struct TYPE_2__ {int (* tag_destroy ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;

int
FUNC_1(bus_dma_tag_t VAR_0)
{
 struct bus_dma_tag_common *VAR_1;

 VAR_1 = (struct bus_dma_tag_common *)VAR_0;
 return (VAR_1->impl->tag_destroy(VAR_0));
}
