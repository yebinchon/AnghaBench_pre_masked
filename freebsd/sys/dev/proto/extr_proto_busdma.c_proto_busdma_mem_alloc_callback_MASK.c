
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct proto_callback_bundle {TYPE_3__* ioc; } ;
struct TYPE_9__ {int ds_addr; } ;
typedef TYPE_4__ bus_dma_segment_t ;
struct TYPE_6__ {int bus_nsegs; int bus_addr; } ;
struct TYPE_7__ {TYPE_1__ md; } ;
struct TYPE_8__ {TYPE_2__ u; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2,
    int VAR_3)
{
 struct proto_callback_bundle *VAR_4 = VAR_0;

 VAR_4->ioc->u.md.bus_nsegs = VAR_2;
 VAR_4->ioc->u.md.bus_addr = VAR_1[0].ds_addr;
}
