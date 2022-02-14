
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hv_paddr; } ;
struct vmbus_xact {TYPE_1__ x_req_dma; } ;
typedef int bus_addr_t ;



bus_addr_t
FUNC_0(const struct vmbus_xact *VAR_0)
{

 return (VAR_0->x_req_dma.hv_paddr);
}
