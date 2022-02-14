
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; scalar_t__ cbfcnp; int path; scalar_t__ retry_count; scalar_t__ saved_ccb_ptr; } ;
struct TYPE_4__ {int cdb_bytes; } ;
struct TYPE_5__ {TYPE_1__ cdb_io; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ csio; } ;
struct scsi_start_stop_unit {scalar_t__ opcode; int how; } ;
struct cam_periph {int flags; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (union ccb*,union ccb*,int) ;
 int FUNC_1 (union ccb*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (union ccb*,int*,int*,int*,int*) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void
FUNC_7(struct cam_periph *VAR_10, union ccb *VAR_11)
{
 union ccb *VAR_12;
 cam_status VAR_13;
 struct scsi_start_stop_unit *VAR_14;
 int VAR_15 = 0, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_14 = (struct scsi_start_stop_unit *)
     &VAR_11->csio.cdb_io.cdb_bytes;
 VAR_13 = VAR_11->ccb_h.status;

 if ((VAR_13 & VAR_4) != VAR_3) {
  if (FUNC_3(VAR_11,
      &VAR_16, &VAR_17, &VAR_18, &VAR_19)) {
   if ((VAR_14->opcode == VAR_9) &&
       ((VAR_14->how & VAR_8) != 0) &&
        (VAR_18 == 0x24) && (VAR_19 == 0x00)) {
    VAR_14->how &= ~VAR_8;
    if (VAR_13 & VAR_1) {
     FUNC_2(VAR_11->ccb_h.path,
         0, 0, 0, 0);
     VAR_11->ccb_h.status &=
         ~VAR_1;
    }
    FUNC_4(VAR_11);
    goto out;
   }
  }
  VAR_15 = FUNC_1(VAR_11, 0,
      VAR_7 | VAR_6);
  if (VAR_15 == VAR_5)
   goto out;
  if (VAR_11->ccb_h.status & VAR_1) {
   FUNC_2(VAR_11->ccb_h.path, 0, 0, 0, 0);
   VAR_11->ccb_h.status &= ~VAR_1;
  }
 } else {







  if (VAR_14->opcode == VAR_9)
   FUNC_5(VAR_0, VAR_11->ccb_h.path, ((void*)0));
 }
 VAR_12 = (union ccb *)VAR_11->ccb_h.saved_ccb_ptr;
 FUNC_0(VAR_12, VAR_11, sizeof(*VAR_11));
 FUNC_6(VAR_12);
 if (VAR_11->ccb_h.cbfcnp != FUNC_7)
  VAR_10->flags &= ~VAR_2;
 if (VAR_15 != 0)
  VAR_11->ccb_h.retry_count = 0;
 FUNC_4(VAR_11);

out:

 FUNC_2(VAR_11->ccb_h.path, 0, 0, 0, 0);
}
