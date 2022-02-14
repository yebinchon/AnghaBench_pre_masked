
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* bus_dmamap_t ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_3__ {uintptr_t alignment; scalar_t__ maxsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__,int ,int ) ;

int
FUNC_1(bus_dma_tag_t VAR_2, void** VAR_3, int VAR_4,
    bus_dmamap_t *VAR_5)
{
 void *VAR_6;

 VAR_6 = FUNC_0(VAR_2->maxsize + VAR_2->alignment, VAR_1, VAR_1);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 *VAR_5 = VAR_6;
 VAR_6 = (void*)(((uintptr_t)VAR_6 + VAR_2->alignment - 1) & ~(VAR_2->alignment - 1));

 *VAR_3 = VAR_6;
 return (0);
}
