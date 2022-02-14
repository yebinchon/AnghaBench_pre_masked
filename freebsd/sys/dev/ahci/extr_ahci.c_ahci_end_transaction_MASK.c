
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


struct TYPE_13__ {scalar_t__ func_code; int target_id; int flags; int status; scalar_t__ recovery_type; int path; } ;
struct TYPE_11__ {int flags; int control; } ;
struct ata_res {int status; int error; int lba_low; int lba_mid; int lba_high; int sector_count; void* sector_count_exp; void* lba_high_exp; void* lba_mid_exp; void* lba_low_exp; void* device; } ;
struct TYPE_12__ {void* dxfer_len; TYPE_4__ cmd; void* resid; struct ata_res res; } ;
struct TYPE_10__ {void* dxfer_len; int scsi_status; void* resid; } ;
union ccb {TYPE_6__ ccb_h; TYPE_5__ ataio; TYPE_3__ csio; } ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef void* u_int8_t ;
struct TYPE_9__ {int data_map; } ;
struct ahci_slot {int slot; union ccb* ccb; int state; TYPE_2__ dma; struct ahci_channel* ch; } ;
struct ahci_cmd_list {int bytecount; } ;
struct TYPE_8__ {void** rfis; int data_tag; int rfis_map; int rfis_tag; scalar_t__ work; int work_map; int work_tag; } ;
struct ahci_channel {int quirks; int eslots; int fatalerr; int oslots; int rslots; int aslots; scalar_t__ numrslots; int toslots; int pm_level; int pm_timer; scalar_t__ pm_present; TYPE_7__* curr; int sim; union ccb* frozen; scalar_t__ numhslots; int recoverycmd; union ccb** hold; int * numtslotspd; int numtslots; int * numrslotspd; TYPE_1__ dma; int r_mem; scalar_t__ fbs_enabled; } ;
typedef enum ahci_err_type { ____Placeholder_ahci_err_type } ahci_err_type ;
struct TYPE_14__ {int caps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_1 (struct ahci_channel*,union ccb*) ;
 int FUNC_2 (struct ahci_channel*,union ccb*) ;
 int FUNC_3 (struct ahci_channel*) ;
 int FUNC_4 (struct ahci_channel*,union ccb*) ;
 int FUNC_5 (struct ahci_channel*) ;
 int FUNC_6 (struct ahci_channel*,union ccb*) ;
 int FUNC_7 (struct ahci_channel*,union ccb*) ;
 int FUNC_8 (struct ahci_channel*) ;
 int FUNC_9 (struct ahci_channel*) ;
 int FUNC_10 (struct ahci_channel*,int) ;
 int FUNC_11 (struct ahci_channel*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct ata_res*,int) ;
 int FUNC_15 (int *,int) ;
 int VAR_36 ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static void
FUNC_20(struct ahci_slot *VAR_37, enum ahci_err_type VAR_38)
{
 struct ahci_channel *VAR_39 = VAR_37->ch;
 union ccb *VAR_40 = VAR_37->ccb;
 struct ahci_cmd_list *VAR_41;
 int VAR_42;
 uint32_t VAR_43;

 FUNC_12(VAR_39->dma.work_tag, VAR_39->dma.work_map,
     VAR_8 | VAR_9);
 VAR_41 = (struct ahci_cmd_list *)
     (VAR_39->dma.work + VAR_0 + (VAR_1 * VAR_37->slot));




 if (VAR_40->ccb_h.func_code == VAR_34) {
  struct ata_res *VAR_44 = &VAR_40->ataio.res;

  if ((VAR_38 == 129) ||
      (VAR_40->ataio.cmd.flags & VAR_12)) {
   u_int8_t *VAR_45 = VAR_39->dma.rfis + 0x40;

   FUNC_12(VAR_39->dma.rfis_tag, VAR_39->dma.rfis_map,
       VAR_8);
   if (VAR_39->fbs_enabled) {
    VAR_45 += VAR_40->ccb_h.target_id * 256;
    VAR_44->status = VAR_45[2];
    VAR_44->error = VAR_45[3];
   } else {
    uint16_t VAR_46 = FUNC_0(VAR_39->r_mem, VAR_3);

    VAR_44->status = VAR_46;
    VAR_44->error = VAR_46 >> 8;
   }
   VAR_44->lba_low = VAR_45[4];
   VAR_44->lba_mid = VAR_45[5];
   VAR_44->lba_high = VAR_45[6];
   VAR_44->device = VAR_45[7];
   VAR_44->lba_low_exp = VAR_45[8];
   VAR_44->lba_mid_exp = VAR_45[9];
   VAR_44->lba_high_exp = VAR_45[10];
   VAR_44->sector_count = VAR_45[12];
   VAR_44->sector_count_exp = VAR_45[13];





   if ((VAR_39->quirks & VAR_4) &&
       (VAR_40->ataio.cmd.flags & VAR_10) &&
       (VAR_40->ataio.cmd.control & VAR_7) == 0) {
    VAR_43 = FUNC_0(VAR_39->r_mem, VAR_2);
    VAR_44->lba_high = VAR_43 >> 24;
    VAR_44->lba_mid = VAR_43 >> 16;
    VAR_44->lba_low = VAR_43 >> 8;
    VAR_44->sector_count = VAR_43;
   }
  } else
   FUNC_14(VAR_44, sizeof(*VAR_44));
  if ((VAR_40->ataio.cmd.flags & VAR_11) == 0 &&
      (VAR_40->ccb_h.flags & VAR_17) != VAR_18 &&
      (VAR_39->quirks & VAR_5) == 0) {
   VAR_40->ataio.resid =
       VAR_40->ataio.dxfer_len - FUNC_16(VAR_41->bytecount);
  }
 } else {
  if ((VAR_40->ccb_h.flags & VAR_17) != VAR_18 &&
      (VAR_39->quirks & VAR_5) == 0) {
   VAR_40->csio.resid =
       VAR_40->csio.dxfer_len - FUNC_16(VAR_41->bytecount);
  }
 }
 if ((VAR_40->ccb_h.flags & VAR_17) != VAR_18) {
  FUNC_12(VAR_39->dma.data_tag, VAR_37->dma.data_map,
      (VAR_40->ccb_h.flags & VAR_16) ?
      VAR_8 : VAR_9);
  FUNC_13(VAR_39->dma.data_tag, VAR_37->dma.data_map);
 }
 if (VAR_38 != 131)
  VAR_39->eslots |= (1 << VAR_37->slot);

 if ((VAR_38 != 131) && (!VAR_39->recoverycmd) &&
     !(VAR_40->ccb_h.status & VAR_15)) {
  FUNC_17(VAR_40->ccb_h.path, 1);
  VAR_40->ccb_h.status |= VAR_15;
 }

 VAR_40->ccb_h.status &= ~VAR_26;
 switch (VAR_38) {
 case 131:
  VAR_40->ccb_h.status |= VAR_22;
  if (VAR_40->ccb_h.func_code == VAR_35)
   VAR_40->csio.scsi_status = VAR_32;
  break;
 case 133:
  VAR_39->fatalerr = 1;
  VAR_40->ccb_h.status |= VAR_24;
  break;
 case 134:
  VAR_40->ccb_h.status |= VAR_21;
  break;
 case 129:
 case 132:
  if (VAR_40->ccb_h.func_code == VAR_35) {
   VAR_40->ccb_h.status |= VAR_25;
   VAR_40->csio.scsi_status = VAR_31;
  } else {
   VAR_40->ccb_h.status |= VAR_13;
  }
  break;
 case 130:
  VAR_39->fatalerr = 1;
  if (!VAR_39->recoverycmd) {
   FUNC_18(VAR_39->sim, 1);
   VAR_40->ccb_h.status &= ~VAR_26;
   VAR_40->ccb_h.status |= VAR_20;
  }
  VAR_40->ccb_h.status |= VAR_27;
  break;
 case 128:
  if (!VAR_39->recoverycmd) {
   FUNC_18(VAR_39->sim, 1);
   VAR_40->ccb_h.status &= ~VAR_26;
   VAR_40->ccb_h.status |= VAR_20;
  }
  VAR_40->ccb_h.status |= VAR_14;
  break;
 default:
  VAR_39->fatalerr = 1;
  VAR_40->ccb_h.status |= VAR_23;
 }

 VAR_39->oslots &= ~(1 << VAR_37->slot);
 VAR_39->rslots &= ~(1 << VAR_37->slot);
 VAR_39->aslots &= ~(1 << VAR_37->slot);
 VAR_37->state = VAR_6;
 VAR_37->ccb = ((void*)0);

 VAR_39->numrslots--;
 VAR_39->numrslotspd[VAR_40->ccb_h.target_id]--;
 if ((VAR_40->ccb_h.func_code == VAR_34) &&
     (VAR_40->ataio.cmd.flags & VAR_11)) {
  VAR_39->numtslots--;
  VAR_39->numtslotspd[VAR_40->ccb_h.target_id]--;
 }

 if (VAR_38 != 128) {
  VAR_42 = (VAR_39->toslots == (1 << VAR_37->slot));
  VAR_39->toslots &= ~(1 << VAR_37->slot);
  if (VAR_42)
   FUNC_19(VAR_39->sim, VAR_33);
 }


 if ((VAR_40->ccb_h.func_code == VAR_34) &&
     (VAR_40->ataio.cmd.flags & VAR_10) &&
     (VAR_40->ataio.cmd.control & VAR_7) &&
     VAR_38 == 131) {
  VAR_40->ataio.cmd.control &= ~VAR_7;
  FUNC_1(VAR_39, VAR_40);
  return;
 }

 if (VAR_40->ccb_h.recovery_type == VAR_29) {
  FUNC_6(VAR_39, VAR_40);

 } else if (VAR_40->ccb_h.recovery_type == VAR_30) {
  FUNC_7(VAR_39, VAR_40);

 } else if (VAR_38 == 132 ||
     ((VAR_40->ccb_h.status & VAR_26) == VAR_25 &&
      (VAR_40->ccb_h.flags & VAR_19) == 0)) {
  VAR_39->hold[VAR_37->slot] = VAR_40;
  VAR_39->numhslots++;
 } else
  FUNC_4(VAR_39, VAR_40);

 if (VAR_39->rslots == 0) {

  if (VAR_39->toslots != 0 || VAR_39->fatalerr) {
   FUNC_9(VAR_39);
  } else {

   if (VAR_39->eslots != 0) {
    FUNC_11(VAR_39);
    FUNC_3(VAR_39);
    FUNC_10(VAR_39, 1);
   }

   if (!VAR_39->recoverycmd && VAR_39->numhslots)
    FUNC_5(VAR_39);
  }

 } else if ((VAR_39->rslots & ~VAR_39->toslots) == 0 &&
     VAR_38 != 128)
  FUNC_8(VAR_39);

 if (VAR_39->frozen && !FUNC_2(VAR_39, VAR_39->frozen)) {
  union ccb *VAR_47 = VAR_39->frozen;
  VAR_39->frozen = ((void*)0);
  FUNC_1(VAR_39, VAR_47);
  FUNC_19(VAR_39->sim, VAR_33);
 }

 if (VAR_39->numrslots == 0 && VAR_39->pm_level > 3 &&
     (VAR_39->curr[VAR_39->pm_present ? 15 : 0].caps & VAR_28)) {
  FUNC_15(&VAR_39->pm_timer,
      (VAR_39->pm_level == 4) ? VAR_36 / 1000 : VAR_36 / 8);
 }
}
