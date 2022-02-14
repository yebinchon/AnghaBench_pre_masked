
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timeout_t ;
struct ahci_slot {scalar_t__ state; TYPE_2__* ccb; int timeout; } ;
struct ahci_channel {int numslots; int toslots; struct ahci_slot* slot; int mtx; } ;
struct TYPE_3__ {int timeout; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,int ,int *,struct ahci_slot*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct ahci_channel *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_4->mtx, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4->numslots; VAR_5++) {
  struct ahci_slot *VAR_6 = &VAR_4->slot[VAR_5];


  if (VAR_6->state < VAR_0)
   continue;
  if ((VAR_4->toslots & (1 << VAR_5)) == 0)
   continue;
  FUNC_0(&VAR_6->timeout,
              VAR_2 * VAR_6->ccb->ccb_h.timeout / 2, 0,
      (timeout_t*)VAR_3, VAR_6, 0);
 }
}
