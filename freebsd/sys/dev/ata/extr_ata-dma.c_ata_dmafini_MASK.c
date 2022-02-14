
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dmatag; int * work_tag; int * work; scalar_t__ work_bus; int work_map; } ;
struct ata_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 struct ata_channel* FUNC_3 (int ) ;

void
FUNC_4(device_t VAR_0)
{
    struct ata_channel *VAR_1 = FUNC_3(VAR_0);

    if (VAR_1->dma.work_bus) {
 FUNC_1(VAR_1->dma.work_tag, VAR_1->dma.work_map);
 FUNC_2(VAR_1->dma.work_tag, VAR_1->dma.work, VAR_1->dma.work_map);
 VAR_1->dma.work_bus = 0;
 VAR_1->dma.work = ((void*)0);
    }
    if (VAR_1->dma.work_tag) {
 FUNC_0(VAR_1->dma.work_tag);
 VAR_1->dma.work_tag = ((void*)0);
    }
    if (VAR_1->dma.dmatag) {
 FUNC_0(VAR_1->dma.dmatag);
 VAR_1->dma.dmatag = ((void*)0);
    }
}
