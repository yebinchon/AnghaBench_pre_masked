
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bus_dma_tag_t ;
typedef int bus_addr_t ;
struct TYPE_3__ {int alignment; } ;



__attribute__((used)) static __inline int
FUNC_0(bus_dma_tag_t VAR_0, bus_addr_t VAR_1)
{

 return (VAR_1 & (VAR_0->alignment - 1));
}
