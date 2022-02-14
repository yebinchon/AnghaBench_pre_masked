
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


struct TYPE_13__ {int target_id; scalar_t__ func_code; int flags; int timeout; } ;
struct TYPE_9__ {scalar_t__ cdb_bytes; scalar_t__ cdb_ptr; } ;
struct TYPE_15__ {TYPE_1__ cdb_io; int dxfer_len; } ;
struct TYPE_12__ {scalar_t__ command; } ;
struct TYPE_11__ {int status; } ;
struct TYPE_14__ {scalar_t__ data_ptr; int dxfer_len; TYPE_4__ cmd; TYPE_3__ res; } ;
union ccb {TYPE_5__ ccb_h; TYPE_7__ csio; TYPE_6__ ataio; } ;
typedef int uint16_t ;
typedef int timeout_t ;
struct mvs_slot {int slot; int timeout; int state; union ccb* ccb; int dev; } ;
struct TYPE_10__ {int workrq_bus; } ;
struct mvs_channel {int rslots; int transfersize; int fake_busy; int toslots; int r_mem; TYPE_2__ dma; scalar_t__ basic_dma; TYPE_8__* curr; int sim; scalar_t__ donecount; } ;
typedef int device_t ;
typedef int bus_addr_t ;
struct TYPE_16__ {int bytecount; int atapi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_5 (int *,int,int ,int *,struct mvs_slot*,int ) ;
 struct mvs_channel* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 void* FUNC_8 (int ,int) ;
 int FUNC_9 (struct mvs_slot*,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,union ccb*) ;
 scalar_t__ VAR_37 ;
 scalar_t__ FUNC_12 (int ,int,int,int) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static void
FUNC_14(struct mvs_slot *VAR_38)
{
 device_t VAR_39 = VAR_38->dev;
 struct mvs_channel *VAR_40 = FUNC_6(VAR_39);
 bus_addr_t VAR_41;
 union ccb *VAR_42 = VAR_38->ccb;
 int VAR_43 = VAR_42->ccb_h.target_id & 0x0f;
 int VAR_44;

 VAR_38->state = VAR_32;
 VAR_40->rslots |= (1 << VAR_38->slot);
 FUNC_1(VAR_40->r_mem, VAR_33, VAR_43 << VAR_34);
 if (VAR_42->ccb_h.func_code == VAR_36) {
  FUNC_11(VAR_39, VAR_42);

  if (VAR_42->ataio.cmd.command == VAR_5) {
   int VAR_45 = 1000000;
   do {
       FUNC_4(10);
       VAR_42->ataio.res.status = FUNC_0(VAR_40->r_mem, VAR_14);
   } while (VAR_42->ataio.res.status & VAR_15 && VAR_45--);
   FUNC_10(VAR_39, 1);
   return;
  }
  VAR_40->donecount = 0;
  if (VAR_42->ataio.cmd.command == VAR_12 ||
      VAR_42->ataio.cmd.command == VAR_13 ||
      VAR_42->ataio.cmd.command == VAR_17 ||
      VAR_42->ataio.cmd.command == VAR_18) {
   VAR_40->transfersize = FUNC_8(VAR_42->ataio.dxfer_len,
       VAR_40->curr[VAR_43].bytecount);
  } else
   VAR_40->transfersize = FUNC_8(VAR_42->ataio.dxfer_len, 512);
  if ((VAR_42->ccb_h.flags & VAR_21) != VAR_22)
   VAR_40->fake_busy = 1;

  if ((VAR_42->ccb_h.flags & VAR_21) == VAR_23) {
   if (FUNC_12(VAR_39, VAR_16, VAR_15, 1000) < 0) {
    FUNC_7(VAR_39,
        "timeout waiting for write DRQ\n");
    FUNC_13(VAR_40->sim, 1);
    VAR_40->toslots |= (1 << VAR_38->slot);
    FUNC_9(VAR_38, VAR_31);
    return;
   }
   FUNC_3(VAR_40->r_mem, VAR_4,
      (uint16_t *)(VAR_42->ataio.data_ptr + VAR_40->donecount),
      VAR_40->transfersize / 2);
  }
 } else {
  VAR_40->donecount = 0;
  VAR_40->transfersize = FUNC_8(VAR_42->csio.dxfer_len,
      VAR_40->curr[VAR_43].bytecount);

  if (VAR_40->basic_dma) {
   FUNC_1(VAR_40->r_mem, VAR_6, VAR_7);
   FUNC_1(VAR_40->r_mem, VAR_2, 0);
       FUNC_1(VAR_40->r_mem, VAR_3, 0);
  } else {
   FUNC_1(VAR_40->r_mem, VAR_6, 0);
   FUNC_1(VAR_40->r_mem, VAR_2, VAR_40->transfersize);
       FUNC_1(VAR_40->r_mem, VAR_3, VAR_40->transfersize >> 8);
  }
  FUNC_1(VAR_40->r_mem, VAR_1, VAR_11);
  VAR_40->fake_busy = 1;

  if (FUNC_12(VAR_39, 0, VAR_15, 1000) < 0) {
   FUNC_7(VAR_39, "timeout waiting for ATAPI !BUSY\n");
   FUNC_13(VAR_40->sim, 1);
   VAR_40->toslots |= (1 << VAR_38->slot);
   FUNC_9(VAR_38, VAR_31);
   return;
  }
  VAR_44 = 5000;
  while (VAR_44--) {
      int VAR_46 = FUNC_0(VAR_40->r_mem, VAR_8);
      int VAR_47 = FUNC_0(VAR_40->r_mem, VAR_14);

      if (((VAR_46 & (VAR_9 | VAR_10)) |
    (VAR_47 & (VAR_16 | VAR_15))) == VAR_0)
   break;
      FUNC_4(20);
  }
  if (VAR_44 <= 0) {
   FUNC_7(VAR_39,
       "timeout waiting for ATAPI command ready\n");
   FUNC_13(VAR_40->sim, 1);
   VAR_40->toslots |= (1 << VAR_38->slot);
   FUNC_9(VAR_38, VAR_31);
   return;
  }

  FUNC_3(VAR_40->r_mem, VAR_4,
     (uint16_t *)((VAR_42->ccb_h.flags & VAR_19) ?
      VAR_42->csio.cdb_io.cdb_ptr : VAR_42->csio.cdb_io.cdb_bytes),
     VAR_40->curr[VAR_43].atapi / 2);
  FUNC_4(10);
  if (VAR_40->basic_dma) {

   VAR_41 = VAR_40->dma.workrq_bus + VAR_29 +
       (VAR_30 * VAR_38->slot);
   FUNC_2(VAR_40->r_mem, VAR_28, VAR_41);
   FUNC_2(VAR_40->r_mem, VAR_27, (VAR_41 >> 16) >> 16);
   FUNC_2(VAR_40->r_mem, VAR_24, VAR_26 |
       (((VAR_42->ccb_h.flags & VAR_21) == VAR_20) ?
       VAR_25 : 0));
  }
 }

 FUNC_5(&VAR_38->timeout, VAR_35 * VAR_42->ccb_h.timeout, 0,
     (timeout_t*)VAR_37, VAR_38, 0);
}
