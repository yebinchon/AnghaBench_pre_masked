
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * data_map; } ;
struct ahci_slot {TYPE_2__ dma; int timeout; } ;
struct TYPE_3__ {int data_tag; } ;
struct ahci_channel {int numslots; TYPE_1__ dma; struct ahci_slot* slot; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct ahci_channel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0)
{
 struct ahci_channel *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->numslots; VAR_2++) {
  struct ahci_slot *VAR_3 = &VAR_1->slot[VAR_2];

  FUNC_1(&VAR_3->timeout);
  if (VAR_3->dma.data_map) {
   FUNC_0(VAR_1->dma.data_tag, VAR_3->dma.data_map);
   VAR_3->dma.data_map = ((void*)0);
  }
 }
}
