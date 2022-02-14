
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * work_tag; int * work; scalar_t__ work_bus; int work_map; int * rfis; scalar_t__ rfis_bus; int rfis_map; int * rfis_tag; int * data_tag; } ;
struct ahci_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 struct ahci_channel* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0)
{
 struct ahci_channel *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->dma.data_tag) {
  FUNC_0(VAR_1->dma.data_tag);
  VAR_1->dma.data_tag = ((void*)0);
 }
 if (VAR_1->dma.rfis_bus) {
  FUNC_1(VAR_1->dma.rfis_tag, VAR_1->dma.rfis_map);
  FUNC_2(VAR_1->dma.rfis_tag, VAR_1->dma.rfis, VAR_1->dma.rfis_map);
  VAR_1->dma.rfis_bus = 0;
  VAR_1->dma.rfis = ((void*)0);
 }
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
}
