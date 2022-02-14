
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ func_code; size_t target_id; int flags; } ;
struct TYPE_11__ {int* cdb_ptr; int* cdb_bytes; } ;
struct TYPE_12__ {TYPE_3__ cdb_io; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_10__ {TYPE_1__ cmd; } ;
union ccb {TYPE_6__ ccb_h; TYPE_4__ csio; TYPE_2__ ataio; } ;
typedef int uint8_t ;
struct TYPE_16__ {int data_map; } ;
struct mvs_slot {int tag; int slot; TYPE_8__ dma; int state; union ccb* ccb; } ;
struct TYPE_15__ {int data_tag; } ;
struct mvs_channel {int pm_level; int oslots; int quirks; int* otagspd; scalar_t__ numrslots; size_t taggedtarget; scalar_t__ numpslots; int aslots; int basic_dma; TYPE_7__ dma; TYPE_5__* curr; int numdslots; int * numtslotspd; int numtslots; int * numrslotspd; int pm_timer; struct mvs_slot* slot; } ;
typedef int device_t ;
struct TYPE_13__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,int ,union ccb*,int ,struct mvs_slot*,int ) ;
 int FUNC_1 (int *) ;
 struct mvs_channel* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_15 ;
 int FUNC_5 (struct mvs_slot*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,union ccb*) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_16, union ccb *VAR_17)
{
 struct mvs_channel *VAR_18 = FUNC_2(VAR_16);
 struct mvs_slot *VAR_19;
 int VAR_20, VAR_21;

 if (VAR_18->pm_level > 0)
  FUNC_4(VAR_16);

 if (VAR_17->ccb_h.func_code == VAR_14 &&
     (VAR_17->ataio.cmd.flags & VAR_1)) {
  FUNC_7(VAR_16, VAR_17);
  return;
 }

 VAR_20 = FUNC_3(~VAR_18->oslots) - 1;
 if ((VAR_17->ccb_h.func_code == VAR_14) &&
     (VAR_17->ataio.cmd.flags & VAR_3)) {
  if (VAR_18->quirks & VAR_11)
   VAR_21 = FUNC_3(~VAR_18->otagspd[VAR_17->ccb_h.target_id]) - 1;
  else
   VAR_21 = VAR_20;
 } else
  VAR_21 = 0;

 VAR_19 = &VAR_18->slot[VAR_20];
 VAR_19->ccb = VAR_17;
 VAR_19->tag = VAR_21;

 if (VAR_18->numrslots == 0 && VAR_18->pm_level > 3)
  FUNC_1(&VAR_18->pm_timer);

 VAR_18->oslots |= (1 << VAR_19->slot);
 VAR_18->numrslots++;
 VAR_18->numrslotspd[VAR_17->ccb_h.target_id]++;
 if (VAR_17->ccb_h.func_code == VAR_14) {
  if (VAR_17->ataio.cmd.flags & VAR_3) {
   VAR_18->otagspd[VAR_17->ccb_h.target_id] |= (1 << VAR_19->tag);
   VAR_18->numtslots++;
   VAR_18->numtslotspd[VAR_17->ccb_h.target_id]++;
   VAR_18->taggedtarget = VAR_17->ccb_h.target_id;
   FUNC_6(VAR_16, VAR_8);
  } else if (VAR_17->ataio.cmd.flags & VAR_2) {
   VAR_18->numdslots++;
   FUNC_6(VAR_16, VAR_10);
  } else {
   VAR_18->numpslots++;
   FUNC_6(VAR_16, VAR_9);
  }
  if (VAR_17->ataio.cmd.flags &
      (VAR_1 | VAR_4)) {
   VAR_18->aslots |= (1 << VAR_19->slot);
  }
 } else {
  uint8_t *VAR_22 = (VAR_17->ccb_h.flags & VAR_5) ?
      VAR_17->csio.cdb_io.cdb_ptr : VAR_17->csio.cdb_io.cdb_bytes;
  VAR_18->numpslots++;

  if ((VAR_17->ccb_h.flags & VAR_6) != VAR_7 &&
      VAR_18->curr[VAR_17->ccb_h.target_id].mode >= VAR_0 &&
      (VAR_18->quirks & VAR_12) == 0 &&
      (VAR_22[0] == 0x08 ||
       VAR_22[0] == 0x0a ||
       VAR_22[0] == 0x28 ||
       VAR_22[0] == 0x2a ||
       VAR_22[0] == 0x88 ||
       VAR_22[0] == 0x8a ||
       VAR_22[0] == 0xa8 ||
       VAR_22[0] == 0xaa ||
       VAR_22[0] == 0xbe)) {
   VAR_18->basic_dma = 1;
  }
  FUNC_6(VAR_16, VAR_9);
 }
 if (VAR_18->numpslots == 0 || VAR_18->basic_dma) {
  VAR_19->state = VAR_13;
  FUNC_0(VAR_18->dma.data_tag, VAR_19->dma.data_map,
      VAR_17, VAR_15, VAR_19, 0);
 } else
  FUNC_5(VAR_19);
}
