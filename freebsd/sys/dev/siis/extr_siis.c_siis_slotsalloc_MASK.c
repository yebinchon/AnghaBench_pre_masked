
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_map; } ;
struct siis_slot {int slot; TYPE_2__ dma; int timeout; int * ccb; int state; int dev; } ;
struct TYPE_3__ {int data_tag; } ;
struct siis_channel {int dev; TYPE_1__ dma; int mtx; struct siis_slot* slot; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct siis_slot*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 struct siis_channel* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2)
{
 struct siis_channel *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;


 FUNC_1(VAR_3->slot, sizeof(VAR_3->slot));
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct siis_slot *VAR_5 = &VAR_3->slot[VAR_4];

  VAR_5->dev = VAR_2;
  VAR_5->slot = VAR_4;
  VAR_5->state = VAR_1;
  VAR_5->ccb = ((void*)0);
  FUNC_2(&VAR_5->timeout, &VAR_3->mtx, 0);

  if (FUNC_0(VAR_3->dma.data_tag, 0, &VAR_5->dma.data_map))
   FUNC_4(VAR_3->dev, "FAILURE - create data_map\n");
 }
}
