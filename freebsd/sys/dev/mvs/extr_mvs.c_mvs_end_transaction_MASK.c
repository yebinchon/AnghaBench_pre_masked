
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ func_code; int flags; int status; size_t target_id; scalar_t__ recovery_type; int path; } ;
struct TYPE_9__ {int flags; } ;
struct ata_res {int dummy; } ;
struct TYPE_10__ {TYPE_2__ cmd; struct ata_res res; } ;
struct TYPE_11__ {int scsi_status; scalar_t__ dxfer_len; scalar_t__ resid; } ;
union ccb {TYPE_7__ ccb_h; TYPE_3__ ataio; TYPE_4__ csio; } ;
struct TYPE_13__ {int data_map; } ;
struct mvs_slot {int slot; int tag; union ccb* ccb; int state; TYPE_6__ dma; int dev; } ;
struct TYPE_12__ {int data_tag; int workrq_map; int workrq_tag; } ;
struct mvs_channel {scalar_t__ basic_dma; scalar_t__ numpslots; int eslots; int fatalerr; int oslots; int rslots; int aslots; scalar_t__ numrslots; int* otagspd; int toslots; int* holdtag; int pm_level; int pm_timer; scalar_t__ pm_present; TYPE_1__* curr; int sim; union ccb* frozen; scalar_t__ numhslots; int recoverycmd; union ccb** hold; int numdslots; int * numtslotspd; int numtslots; int * numrslotspd; TYPE_5__ dma; scalar_t__ donecount; } ;
typedef enum mvs_err_type { ____Placeholder_mvs_err_type } mvs_err_type ;
typedef int device_t ;
struct TYPE_8__ {int caps; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;







 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ata_res*,int) ;
 int FUNC_3 (int *,int) ;
 struct mvs_channel* FUNC_4 (int ) ;
 int VAR_30 ;
 int FUNC_5 (int ,union ccb*) ;
 int FUNC_6 (int ,union ccb*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,union ccb*) ;
 int FUNC_9 (int ,union ccb*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,union ccb*) ;
 int FUNC_14 (union ccb*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void
FUNC_18(struct mvs_slot *VAR_31, enum mvs_err_type VAR_32)
{
 device_t VAR_33 = VAR_31->dev;
 struct mvs_channel *VAR_34 = FUNC_4(VAR_33);
 union ccb *VAR_35 = VAR_31->ccb;
 int VAR_36;

 FUNC_0(VAR_34->dma.workrq_tag, VAR_34->dma.workrq_map,
     VAR_1);




 if (VAR_35->ccb_h.func_code == VAR_28) {
  struct ata_res *VAR_37 = &VAR_35->ataio.res;

  if ((VAR_32 == 129) ||
      (VAR_35->ataio.cmd.flags & VAR_4)) {
   FUNC_13(VAR_33, VAR_35);
  } else
   FUNC_2(VAR_37, sizeof(*VAR_37));
 } else {
  if ((VAR_35->ccb_h.flags & VAR_9) != VAR_10 &&
      VAR_34->basic_dma == 0)
   VAR_35->csio.resid = VAR_35->csio.dxfer_len - VAR_34->donecount;
 }
 if (VAR_34->numpslots == 0 || VAR_34->basic_dma) {
  if ((VAR_35->ccb_h.flags & VAR_9) != VAR_10) {
   FUNC_0(VAR_34->dma.data_tag, VAR_31->dma.data_map,
       (VAR_35->ccb_h.flags & VAR_8) ?
       VAR_0 : VAR_1);
   FUNC_1(VAR_34->dma.data_tag, VAR_31->dma.data_map);
  }
 }
 if (VAR_32 != 131)
  VAR_34->eslots |= (1 << VAR_31->slot);

 if ((VAR_32 != 131) && (!VAR_34->recoverycmd) &&
     !(VAR_35->ccb_h.status & VAR_7)) {
  FUNC_15(VAR_35->ccb_h.path, 1);
  VAR_35->ccb_h.status |= VAR_7;
 }

 VAR_35->ccb_h.status &= ~VAR_18;
 switch (VAR_32) {
 case 131:
  VAR_35->ccb_h.status |= VAR_14;
  if (VAR_35->ccb_h.func_code == VAR_29)
   VAR_35->csio.scsi_status = VAR_26;
  break;
 case 133:
  VAR_34->fatalerr = 1;
  VAR_35->ccb_h.status |= VAR_16;
  break;
 case 134:
  VAR_35->ccb_h.status |= VAR_13;
  break;
 case 129:
 case 132:
  if (VAR_35->ccb_h.func_code == VAR_29) {
   VAR_35->ccb_h.status |= VAR_17;
   VAR_35->csio.scsi_status = VAR_25;
  } else {
   VAR_35->ccb_h.status |= VAR_5;
  }
  break;
 case 130:
  VAR_34->fatalerr = 1;
  if (!VAR_34->recoverycmd) {
   FUNC_16(VAR_34->sim, 1);
   VAR_35->ccb_h.status &= ~VAR_18;
   VAR_35->ccb_h.status |= VAR_12;
  }
  VAR_35->ccb_h.status |= VAR_19;
  break;
 case 128:
  if (!VAR_34->recoverycmd) {
   FUNC_16(VAR_34->sim, 1);
   VAR_35->ccb_h.status &= ~VAR_18;
   VAR_35->ccb_h.status |= VAR_12;
  }
  VAR_35->ccb_h.status |= VAR_6;
  break;
 default:
  VAR_34->fatalerr = 1;
  VAR_35->ccb_h.status |= VAR_15;
 }

 VAR_34->oslots &= ~(1 << VAR_31->slot);
 VAR_34->rslots &= ~(1 << VAR_31->slot);
 VAR_34->aslots &= ~(1 << VAR_31->slot);
 VAR_31->state = VAR_22;
 VAR_31->ccb = ((void*)0);

 VAR_34->numrslots--;
 VAR_34->numrslotspd[VAR_35->ccb_h.target_id]--;
 if (VAR_35->ccb_h.func_code == VAR_28) {
  if (VAR_35->ataio.cmd.flags & VAR_3) {
   VAR_34->otagspd[VAR_35->ccb_h.target_id] &= ~(1 << VAR_31->tag);
   VAR_34->numtslots--;
   VAR_34->numtslotspd[VAR_35->ccb_h.target_id]--;
  } else if (VAR_35->ataio.cmd.flags & VAR_2) {
   VAR_34->numdslots--;
  } else {
   VAR_34->numpslots--;
  }
 } else {
  VAR_34->numpslots--;
  VAR_34->basic_dma = 0;
 }

 if (VAR_32 != 128) {
  VAR_36 = (VAR_34->toslots == (1 << VAR_31->slot));
  VAR_34->toslots &= ~(1 << VAR_31->slot);
  if (VAR_36)
   FUNC_17(VAR_34->sim, VAR_27);
 }

 if (VAR_35->ccb_h.recovery_type == VAR_23) {
  FUNC_8(VAR_33, VAR_35);

 } else if (VAR_35->ccb_h.recovery_type == VAR_24) {
  FUNC_9(VAR_33, VAR_35);

 } else if (VAR_32 == 132 ||
     ((VAR_35->ccb_h.status & VAR_18) == VAR_17 &&
      (VAR_35->ccb_h.flags & VAR_11) == 0)) {
  VAR_34->hold[VAR_31->slot] = VAR_35;
  VAR_34->holdtag[VAR_31->slot] = VAR_31->tag;
  VAR_34->numhslots++;
 } else
  FUNC_14(VAR_35);

 if (VAR_34->rslots == 0) {

  if (VAR_34->toslots != 0 || VAR_34->fatalerr) {
   FUNC_11(VAR_33);
  } else {

   if (VAR_34->eslots != 0) {
    FUNC_12(VAR_33, VAR_21);
    VAR_34->eslots = 0;
   }

   if (!VAR_34->recoverycmd && VAR_34->numhslots)
    FUNC_7(VAR_33);
  }

 } else if ((VAR_34->rslots & ~VAR_34->toslots) == 0 &&
     VAR_32 != 128)
  FUNC_10(VAR_33);

 if (VAR_34->frozen && !FUNC_6(VAR_33, VAR_34->frozen)) {
  union ccb *VAR_38 = VAR_34->frozen;
  VAR_34->frozen = ((void*)0);
  FUNC_5(VAR_33, VAR_38);
  FUNC_17(VAR_34->sim, VAR_27);
 }

 if (VAR_34->numrslots == 0 && VAR_34->pm_level > 3 &&
     (VAR_34->curr[VAR_34->pm_present ? 15 : 0].caps & VAR_20)) {
  FUNC_3(&VAR_34->pm_timer,
      (VAR_34->pm_level == 4) ? VAR_30 / 1000 : VAR_30 / 8);
 }
}
