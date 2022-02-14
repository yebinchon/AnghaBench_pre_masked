
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


struct TYPE_12__ {int status; scalar_t__ func_code; int flags; int path; } ;
struct TYPE_11__ {scalar_t__ dxfer_len; scalar_t__ resid; int scsi_status; } ;
struct ata_res {int status; int lba_low; int lba_mid; int lba_high; int device; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int sector_count; int sector_count_exp; int error; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_10__ {scalar_t__ dxfer_len; scalar_t__ resid; struct ata_res res; TYPE_1__ cmd; } ;
union ccb {TYPE_6__ ccb_h; TYPE_5__ csio; TYPE_4__ ataio; } ;
struct TYPE_8__ {int lba; int count; } ;
struct TYPE_9__ {TYPE_2__ ata; } ;
struct ata_request {int flags; int status; scalar_t__ result; scalar_t__ donecount; TYPE_3__ u; int error; union ccb* ccb; } ;
struct ata_channel {int sim; scalar_t__ requestsense; } ;
typedef int device_t ;


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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,struct ata_request*) ;
 int FUNC_1 (int ,struct ata_request*) ;
 int FUNC_2 (int ) ;
 struct ata_channel* FUNC_3 (int ) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_18, struct ata_request *VAR_19)
{
 struct ata_channel *VAR_20 = FUNC_3(VAR_18);
 union ccb *VAR_21 = VAR_19->ccb;
 int VAR_22 = 0;

 if (VAR_20->requestsense) {
  FUNC_0(VAR_18, VAR_19);
  return;
 }

 VAR_21->ccb_h.status &= ~VAR_14;
 if (VAR_19->flags & VAR_0) {
  FUNC_6(VAR_20->sim, 1);
  VAR_21->ccb_h.status &= ~VAR_14;
  VAR_21->ccb_h.status |= VAR_4 | VAR_9;
  VAR_22 = 1;
 } else if (VAR_19->status & VAR_1) {
  if (VAR_21->ccb_h.func_code == VAR_17) {
   VAR_21->ccb_h.status |= VAR_3;
  } else {
   VAR_21->ccb_h.status |= VAR_13;
   VAR_21->csio.scsi_status = VAR_16;
  }
 } else if (VAR_19->result == VAR_15)
  VAR_21->ccb_h.status |= VAR_10;
 else if (VAR_19->result != 0)
  VAR_21->ccb_h.status |= VAR_12;
 else
  VAR_21->ccb_h.status |= VAR_11;
 if ((VAR_21->ccb_h.status & VAR_14) != VAR_11 &&
     !(VAR_21->ccb_h.status & VAR_5)) {
  FUNC_5(VAR_21->ccb_h.path, 1);
  VAR_21->ccb_h.status |= VAR_5;
 }
 if (VAR_21->ccb_h.func_code == VAR_17 &&
     ((VAR_19->status & VAR_1) ||
     (VAR_21->ataio.cmd.flags & VAR_2))) {
  struct ata_res *VAR_23 = &VAR_21->ataio.res;
  VAR_23->status = VAR_19->status;
  VAR_23->error = VAR_19->error;
  VAR_23->lba_low = VAR_19->u.ata.lba;
  VAR_23->lba_mid = VAR_19->u.ata.lba >> 8;
  VAR_23->lba_high = VAR_19->u.ata.lba >> 16;
  VAR_23->device = VAR_19->u.ata.lba >> 24;
  VAR_23->lba_low_exp = VAR_19->u.ata.lba >> 24;
  VAR_23->lba_mid_exp = VAR_19->u.ata.lba >> 32;
  VAR_23->lba_high_exp = VAR_19->u.ata.lba >> 40;
  VAR_23->sector_count = VAR_19->u.ata.count;
  VAR_23->sector_count_exp = VAR_19->u.ata.count >> 8;
 }
 if ((VAR_21->ccb_h.flags & VAR_6) != VAR_7) {
  if (VAR_21->ccb_h.func_code == VAR_17) {
   VAR_21->ataio.resid =
       VAR_21->ataio.dxfer_len - VAR_19->donecount;
  } else {
   VAR_21->csio.resid =
       VAR_21->csio.dxfer_len - VAR_19->donecount;
  }
 }
 if ((VAR_21->ccb_h.status & VAR_14) == VAR_13 &&
     (VAR_21->ccb_h.flags & VAR_8) == 0)
  FUNC_1(VAR_18, VAR_19);
 else
  FUNC_4(VAR_21);

 if (VAR_22)
  FUNC_2(VAR_18);
}
