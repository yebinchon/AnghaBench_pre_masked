
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {size_t target_id; scalar_t__ func_code; int flags; int timeout; } ;
struct TYPE_12__ {int cdb_bytes; int cdb_ptr; } ;
struct TYPE_14__ {int cdb_len; TYPE_1__ cdb_io; int dxfer_len; int data_ptr; } ;
struct TYPE_19__ {scalar_t__ command; int flags; int device; scalar_t__ lba_low; scalar_t__ lba_mid; scalar_t__ lba_high; scalar_t__ lba_low_exp; scalar_t__ lba_mid_exp; scalar_t__ lba_high_exp; scalar_t__ sector_count; scalar_t__ sector_count_exp; scalar_t__ features; scalar_t__ features_exp; } ;
struct TYPE_20__ {TYPE_8__ cmd; int dxfer_len; int data_ptr; } ;
union ccb {TYPE_10__ ccb_h; TYPE_3__ csio; TYPE_9__ ataio; } ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_13__ {int ccb; } ;
struct TYPE_17__ {scalar_t__ command; int feature; int count; int lba; } ;
struct TYPE_18__ {TYPE_2__ atapi; TYPE_6__ ata; } ;
struct ata_request {size_t unit; int timeout; int flags; union ccb* ccb; int callout; scalar_t__ retries; int bytecount; void* transfersize; TYPE_7__ u; int data; int parent; int * dev; } ;
struct TYPE_16__ {scalar_t__ (* begin_transaction ) (struct ata_request*) ;} ;
struct ata_channel {int state; struct ata_request* running; TYPE_5__ hw; int state_mtx; TYPE_4__* curr; struct ata_request request; } ;
typedef int device_t ;
struct TYPE_15__ {int bytecount; int atapi; scalar_t__ mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_0 (int ,struct ata_request*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ata_request*,int) ;
 int FUNC_3 (int *,int *,int ) ;
 struct ata_channel* FUNC_4 (int ) ;
 void* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct ata_request*) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_26, union ccb *VAR_27)
{
 struct ata_channel *VAR_28 = FUNC_4(VAR_26);
 struct ata_request *VAR_29;

 VAR_29 = &VAR_28->request;
 FUNC_2(VAR_29, sizeof(*VAR_29));


 VAR_29->dev = ((void*)0);
 VAR_29->parent = VAR_26;
 VAR_29->unit = VAR_27->ccb_h.target_id;
 if (VAR_27->ccb_h.func_code == VAR_25) {
  VAR_29->data = VAR_27->ataio.data_ptr;
  VAR_29->bytecount = VAR_27->ataio.dxfer_len;
  VAR_29->u.ata.command = VAR_27->ataio.cmd.command;
  VAR_29->u.ata.feature = ((uint16_t)VAR_27->ataio.cmd.features_exp << 8) |
       (uint16_t)VAR_27->ataio.cmd.features;
  VAR_29->u.ata.count = ((uint16_t)VAR_27->ataio.cmd.sector_count_exp << 8) |
     (uint16_t)VAR_27->ataio.cmd.sector_count;
  if (VAR_27->ataio.cmd.flags & VAR_17) {
   VAR_29->flags |= VAR_6;
   VAR_29->u.ata.lba =
         ((uint64_t)VAR_27->ataio.cmd.lba_high_exp << 40) |
         ((uint64_t)VAR_27->ataio.cmd.lba_mid_exp << 32) |
         ((uint64_t)VAR_27->ataio.cmd.lba_low_exp << 24);
  } else {
   VAR_29->u.ata.lba =
         ((uint64_t)(VAR_27->ataio.cmd.device & 0x0f) << 24);
  }
  VAR_29->u.ata.lba |= ((uint64_t)VAR_27->ataio.cmd.lba_high << 16) |
          ((uint64_t)VAR_27->ataio.cmd.lba_mid << 8) |
           (uint64_t)VAR_27->ataio.cmd.lba_low;
  if (VAR_27->ataio.cmd.flags & VAR_19)
   VAR_29->flags |= VAR_11;
  if ((VAR_27->ccb_h.flags & VAR_22) != VAR_23 &&
      VAR_27->ataio.cmd.flags & VAR_18)
   VAR_29->flags |= VAR_10;
  if ((VAR_27->ccb_h.flags & VAR_22) == VAR_21)
   VAR_29->flags |= VAR_12;
  if ((VAR_27->ccb_h.flags & VAR_22) == VAR_24)
   VAR_29->flags |= VAR_13;
  if (VAR_27->ataio.cmd.command == VAR_4 ||
      VAR_27->ataio.cmd.command == VAR_5 ||
      VAR_27->ataio.cmd.command == VAR_14 ||
      VAR_27->ataio.cmd.command == VAR_15) {
   VAR_29->transfersize = FUNC_5(VAR_29->bytecount,
       VAR_28->curr[VAR_27->ccb_h.target_id].bytecount);
  } else
   VAR_29->transfersize = FUNC_5(VAR_29->bytecount, 512);
 } else {
  VAR_29->data = VAR_27->csio.data_ptr;
  VAR_29->bytecount = VAR_27->csio.dxfer_len;
  FUNC_1((VAR_27->ccb_h.flags & VAR_20) ?
      VAR_27->csio.cdb_io.cdb_ptr : VAR_27->csio.cdb_io.cdb_bytes,
      VAR_29->u.atapi.ccb, VAR_27->csio.cdb_len);
  VAR_29->flags |= VAR_7;
  if (VAR_28->curr[VAR_27->ccb_h.target_id].atapi == 16)
   VAR_29->flags |= VAR_8;
  if ((VAR_27->ccb_h.flags & VAR_22) != VAR_23 &&
      VAR_28->curr[VAR_27->ccb_h.target_id].mode >= VAR_1)
   VAR_29->flags |= VAR_10;
  if ((VAR_27->ccb_h.flags & VAR_22) == VAR_21)
   VAR_29->flags |= VAR_12;
  if ((VAR_27->ccb_h.flags & VAR_22) == VAR_24)
   VAR_29->flags |= VAR_13;
  VAR_29->transfersize = FUNC_5(VAR_29->bytecount,
      VAR_28->curr[VAR_27->ccb_h.target_id].bytecount);
 }
 VAR_29->retries = 0;
 VAR_29->timeout = (VAR_27->ccb_h.timeout + 999) / 1000;
 FUNC_3(&VAR_29->callout, &VAR_28->state_mtx, VAR_16);
 VAR_29->ccb = VAR_27;
 VAR_29->flags |= VAR_9;

 VAR_28->running = VAR_29;
 VAR_28->state = VAR_0;
 if (VAR_28->hw.begin_transaction(VAR_29) == VAR_3) {
     VAR_28->running = ((void*)0);
     VAR_28->state = VAR_2;
     FUNC_0(VAR_26, VAR_29);
     return;
 }
}
