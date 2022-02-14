
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_map; } ;
struct ahci_slot {int slot; TYPE_2__ dma; int timeout; int * ccb; int state; struct ahci_channel* ch; } ;
struct TYPE_3__ {int data_tag; } ;
struct ahci_channel {int numslots; int dev; TYPE_1__ dma; int mtx; struct ahci_slot* slot; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct ahci_slot*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 struct ahci_channel* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1)
{
 struct ahci_channel *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;


 FUNC_1(VAR_2->slot, sizeof(VAR_2->slot));
 for (VAR_3 = 0; VAR_3 < VAR_2->numslots; VAR_3++) {
  struct ahci_slot *VAR_4 = &VAR_2->slot[VAR_3];

  VAR_4->ch = VAR_2;
  VAR_4->slot = VAR_3;
  VAR_4->state = VAR_0;
  VAR_4->ccb = ((void*)0);
  FUNC_2(&VAR_4->timeout, &VAR_2->mtx, 0);

  if (FUNC_0(VAR_2->dma.data_tag, 0, &VAR_4->dma.data_map))
   FUNC_4(VAR_2->dev, "FAILURE - create data_map\n");
 }
}
