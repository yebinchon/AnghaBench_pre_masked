
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int status; int path; } ;
union ccb {TYPE_3__ ccb_h; } ;
typedef int uint32_t ;
typedef int timeout_t ;
struct ahci_slot {scalar_t__ state; int slot; TYPE_2__* ccb; int timeout; struct ahci_channel* ch; } ;
struct ahci_channel {int wrongccs; int rslots; int fatalerr; int numslots; int toslots; int sim; TYPE_4__* slot; scalar_t__ fbs_enabled; union ccb* frozen; int r_mem; int dev; } ;
typedef int device_t ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_5__ {int timeout; int target_id; } ;
struct TYPE_6__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ahci_channel*,union ccb*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct ahci_channel*) ;
 int FUNC_4 (int *,int,int ,int *,struct ahci_slot*,int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct ahci_slot *VAR_16)
{
 struct ahci_channel *VAR_17 = VAR_16->ch;
 device_t VAR_18 = VAR_17->dev;
 uint32_t VAR_19;
 int VAR_20;
 int VAR_21;


 if (VAR_16->state < VAR_11)
  return;


 if (VAR_16->state < VAR_10) {

  VAR_19 = FUNC_0(VAR_17->r_mem, VAR_7);
  VAR_20 = (FUNC_0(VAR_17->r_mem, VAR_3) & VAR_4)
      >> VAR_5;
  if ((VAR_19 & (1 << VAR_16->slot)) != 0 || VAR_20 == VAR_16->slot ||
      VAR_17->fbs_enabled || VAR_17->wrongccs)
   VAR_16->state = VAR_10;
  else if ((VAR_17->rslots & (1 << VAR_20)) == 0) {
   VAR_17->wrongccs = 1;
   VAR_16->state = VAR_10;
  }

  FUNC_4(&VAR_16->timeout,
          VAR_15 * VAR_16->ccb->ccb_h.timeout / 2, 0,
      (timeout_t*)FUNC_8, VAR_16, 0);
  return;
 }

 FUNC_5(VAR_18, "Timeout on slot %d port %d\n",
     VAR_16->slot, VAR_16->ccb->ccb_h.target_id & 0x0f);
 FUNC_5(VAR_18, "is %08x cs %08x ss %08x rs %08x tfd %02x "
     "serr %08x cmd %08x\n",
     FUNC_0(VAR_17->r_mem, VAR_6), FUNC_0(VAR_17->r_mem, VAR_2),
     FUNC_0(VAR_17->r_mem, VAR_7), VAR_17->rslots,
     FUNC_0(VAR_17->r_mem, VAR_9), FUNC_0(VAR_17->r_mem, VAR_8),
     FUNC_0(VAR_17->r_mem, VAR_3));


 if (VAR_17->frozen) {
  union ccb *VAR_22 = VAR_17->frozen;
  VAR_17->frozen = ((void*)0);
  VAR_22->ccb_h.status = VAR_14 | VAR_13;
  if (!(VAR_22->ccb_h.status & VAR_12)) {
   FUNC_6(VAR_22->ccb_h.path, 1);
   VAR_22->ccb_h.status |= VAR_12;
  }
  FUNC_1(VAR_17, VAR_22);
 }
 if (!VAR_17->fbs_enabled && !VAR_17->wrongccs) {

  VAR_17->fatalerr = 1;

  FUNC_2(&VAR_17->slot[VAR_16->slot], VAR_1);

  for (VAR_21 = 0; VAR_21 < VAR_17->numslots; VAR_21++) {

   if (VAR_17->slot[VAR_21].state < VAR_11)
    continue;
   FUNC_2(&VAR_17->slot[VAR_21], VAR_0);
  }
 } else {

  if (VAR_17->toslots == 0)
   FUNC_7(VAR_17->sim, 1);
  VAR_17->toslots |= (1 << VAR_16->slot);
  if ((VAR_17->rslots & ~VAR_17->toslots) == 0)
   FUNC_3(VAR_17);
  else
   FUNC_5(VAR_18, " ... waiting for slots %08x\n",
       VAR_17->rslots & ~VAR_17->toslots);
 }
}
