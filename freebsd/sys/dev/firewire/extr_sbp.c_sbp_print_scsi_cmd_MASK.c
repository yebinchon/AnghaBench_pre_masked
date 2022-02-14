
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


typedef int uintmax_t ;
struct sbp_ocb {TYPE_7__* ccb; TYPE_4__* sdev; } ;
struct TYPE_12__ {int* cdb_bytes; } ;
struct ccb_scsiio {int cdb_len; int dxfer_len; TYPE_5__ cdb_io; int sense_len; } ;
struct TYPE_13__ {int target_id; int flags; scalar_t__ target_lun; } ;
struct TYPE_14__ {TYPE_6__ ccb_h; struct ccb_scsiio csio; } ;
struct TYPE_11__ {TYPE_3__* target; } ;
struct TYPE_10__ {TYPE_2__* sbp; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_9__ {TYPE_1__ fd; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct sbp_ocb *VAR_1)
{
 struct ccb_scsiio *VAR_2;

 VAR_2 = &VAR_1->ccb->csio;
 FUNC_1("%s:%d:%jx XPT_SCSI_IO: "
  "cmd: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x"
  ", flags: 0x%02x, "
  "%db cmd/%db data/%db sense\n",
  FUNC_0(VAR_1->sdev->target->sbp->fd.dev),
  VAR_1->ccb->ccb_h.target_id,
  (uintmax_t)VAR_1->ccb->ccb_h.target_lun,
  VAR_2->cdb_io.cdb_bytes[0],
  VAR_2->cdb_io.cdb_bytes[1],
  VAR_2->cdb_io.cdb_bytes[2],
  VAR_2->cdb_io.cdb_bytes[3],
  VAR_2->cdb_io.cdb_bytes[4],
  VAR_2->cdb_io.cdb_bytes[5],
  VAR_2->cdb_io.cdb_bytes[6],
  VAR_2->cdb_io.cdb_bytes[7],
  VAR_2->cdb_io.cdb_bytes[8],
  VAR_2->cdb_io.cdb_bytes[9],
  VAR_1->ccb->ccb_h.flags & VAR_0,
  VAR_2->cdb_len, VAR_2->dxfer_len,
  VAR_2->sense_len);
}
