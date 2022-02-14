
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ func_code; int flags; int status; size_t target_id; scalar_t__ recovery_type; int path; } ;
struct TYPE_11__ {int flags; } ;
struct ata_res {void* sector_count_exp; void* sector_count; void* lba_high_exp; void* lba_mid_exp; void* lba_low_exp; void* device; void* lba_high; void* lba_mid; void* lba_low; void* error; void* status; } ;
struct TYPE_12__ {void* dxfer_len; TYPE_5__ cmd; void* resid; struct ata_res res; } ;
struct TYPE_8__ {void* dxfer_len; int scsi_status; void* resid; } ;
union ccb {TYPE_4__ ccb_h; TYPE_6__ ataio; TYPE_2__ csio; } ;
struct TYPE_7__ {int data_map; } ;
struct siis_slot {int slot; union ccb* ccb; int state; TYPE_1__ dma; int dev; } ;
struct TYPE_9__ {int data_tag; int work_map; int work_tag; } ;
struct siis_channel {int numrslots; int eslots; int fatalerr; int oslots; int rslots; int aslots; int toslots; int sim; union ccb* frozen; scalar_t__ numhslots; int recoverycmd; union ccb** hold; int * numtslots; scalar_t__ recovery; TYPE_3__ dma; int r_mem; int mtx; } ;
typedef enum siis_err_type { ____Placeholder_siis_err_type } siis_err_type ;
typedef int device_t ;


 void* FUNC_0 (int ,int) ;
 void* FUNC_1 (int ,int) ;
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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;







 int FUNC_2 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ata_res*,int) ;
 struct siis_channel* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,union ccb*) ;
 int FUNC_9 (int ,union ccb*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,union ccb*) ;
 int FUNC_13 (int ,union ccb*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (union ccb*) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static void
FUNC_19(struct siis_slot *VAR_28, enum siis_err_type VAR_29)
{
 device_t VAR_30 = VAR_28->dev;
 struct siis_channel *VAR_31 = FUNC_6(VAR_30);
 union ccb *VAR_32 = VAR_28->ccb;
 int VAR_33;

 FUNC_7(&VAR_31->mtx, VAR_19);
 FUNC_3(VAR_31->dma.work_tag, VAR_31->dma.work_map,
     VAR_1);




 if (VAR_32->ccb_h.func_code == VAR_26) {
  struct ata_res *VAR_34 = &VAR_32->ataio.res;
  if ((VAR_29 == 129) ||
      (VAR_32->ataio.cmd.flags & VAR_3)) {
   int VAR_35 = FUNC_2(VAR_28->slot) + 8;

   VAR_34->status = FUNC_0(VAR_31->r_mem, VAR_35 + 2);
   VAR_34->error = FUNC_0(VAR_31->r_mem, VAR_35 + 3);
   VAR_34->lba_low = FUNC_0(VAR_31->r_mem, VAR_35 + 4);
   VAR_34->lba_mid = FUNC_0(VAR_31->r_mem, VAR_35 + 5);
   VAR_34->lba_high = FUNC_0(VAR_31->r_mem, VAR_35 + 6);
   VAR_34->device = FUNC_0(VAR_31->r_mem, VAR_35 + 7);
   VAR_34->lba_low_exp = FUNC_0(VAR_31->r_mem, VAR_35 + 8);
   VAR_34->lba_mid_exp = FUNC_0(VAR_31->r_mem, VAR_35 + 9);
   VAR_34->lba_high_exp = FUNC_0(VAR_31->r_mem, VAR_35 + 10);
   VAR_34->sector_count = FUNC_0(VAR_31->r_mem, VAR_35 + 12);
   VAR_34->sector_count_exp = FUNC_0(VAR_31->r_mem, VAR_35 + 13);
  } else
   FUNC_5(VAR_34, sizeof(*VAR_34));
  if ((VAR_32->ccb_h.flags & VAR_8) == VAR_7 &&
      VAR_31->numrslots == 1) {
   VAR_32->ataio.resid = VAR_32->ataio.dxfer_len -
       FUNC_1(VAR_31->r_mem, FUNC_2(VAR_28->slot) + 4);
  }
 } else {
  if ((VAR_32->ccb_h.flags & VAR_8) == VAR_7 &&
      VAR_31->numrslots == 1) {
   VAR_32->csio.resid = VAR_32->csio.dxfer_len -
       FUNC_1(VAR_31->r_mem, FUNC_2(VAR_28->slot) + 4);
  }
 }
 if ((VAR_32->ccb_h.flags & VAR_8) != VAR_9) {
  FUNC_3(VAR_31->dma.data_tag, VAR_28->dma.data_map,
      (VAR_32->ccb_h.flags & VAR_7) ?
      VAR_0 : VAR_1);
  FUNC_4(VAR_31->dma.data_tag, VAR_28->dma.data_map);
 }

 if (VAR_29 != 131 || VAR_31->recovery) {
  VAR_31->eslots |= (1 << VAR_28->slot);
  VAR_32->ccb_h.status |= VAR_11;
 }

 if (VAR_29 != 131 && (!VAR_31->recoverycmd) &&
     !(VAR_32->ccb_h.status & VAR_6)) {
  FUNC_17(VAR_32->ccb_h.path, 1);
  VAR_32->ccb_h.status |= VAR_6;
 }
 VAR_32->ccb_h.status &= ~VAR_17;
 switch (VAR_29) {
 case 131:
  VAR_32->ccb_h.status |= VAR_13;
  if (VAR_32->ccb_h.func_code == VAR_27)
   VAR_32->csio.scsi_status = VAR_23;
  break;
 case 133:
  VAR_31->fatalerr = 1;
  VAR_32->ccb_h.status |= VAR_15;
  break;
 case 134:
  VAR_32->ccb_h.status |= VAR_12;
  break;
 case 129:
 case 132:
  if (VAR_32->ccb_h.func_code == VAR_27) {
   VAR_32->ccb_h.status |= VAR_16;
   VAR_32->csio.scsi_status = VAR_22;
  } else {
   VAR_32->ccb_h.status |= VAR_4;
  }
  break;
 case 130:
  VAR_31->fatalerr = 1;
  VAR_32->ccb_h.status |= VAR_18;
  break;
 case 128:
  VAR_31->fatalerr = 1;
  VAR_32->ccb_h.status |= VAR_5;
  break;
 default:
  VAR_32->ccb_h.status |= VAR_14;
 }

 VAR_31->oslots &= ~(1 << VAR_28->slot);
 VAR_31->rslots &= ~(1 << VAR_28->slot);
 VAR_31->aslots &= ~(1 << VAR_28->slot);
 VAR_28->state = VAR_24;
 VAR_28->ccb = ((void*)0);

 VAR_31->numrslots--;
 if ((VAR_32->ccb_h.func_code == VAR_26) &&
     (VAR_32->ataio.cmd.flags & VAR_2)) {
  VAR_31->numtslots[VAR_32->ccb_h.target_id]--;
 }

 if (VAR_29 != 128) {
  VAR_33 = (VAR_31->toslots == (1 << VAR_28->slot));
  VAR_31->toslots &= ~(1 << VAR_28->slot);
  if (VAR_33)
   FUNC_18(VAR_31->sim, VAR_25);
 }

 if (VAR_32->ccb_h.recovery_type == VAR_20) {
  FUNC_12(VAR_30, VAR_32);

 } else if (VAR_32->ccb_h.recovery_type == VAR_21) {
  FUNC_13(VAR_30, VAR_32);

 } else if (VAR_29 == 132 ||
     ((VAR_32->ccb_h.status & VAR_17) == VAR_16 &&
      (VAR_32->ccb_h.flags & VAR_10) == 0)) {
  VAR_31->hold[VAR_28->slot] = VAR_32;
  VAR_31->numhslots++;
 } else
  FUNC_16(VAR_32);

 if (VAR_31->rslots == 0) {

  if (VAR_31->toslots != 0 || VAR_31->fatalerr) {
   FUNC_15(VAR_30);
  } else {

   if (VAR_31->eslots != 0)
    FUNC_11(VAR_30);

   if (!VAR_31->recoverycmd && VAR_31->numhslots)
    FUNC_10(VAR_30);
  }

 } else if ((VAR_31->rslots & ~VAR_31->toslots) == 0 &&
     VAR_29 != 128)
  FUNC_14(VAR_30);

 if (VAR_31->frozen && !FUNC_9(VAR_30, VAR_31->frozen)) {
  union ccb *VAR_36 = VAR_31->frozen;
  VAR_31->frozen = ((void*)0);
  FUNC_8(VAR_30, VAR_36);
  FUNC_18(VAR_31->sim, VAR_25);
 }
}
