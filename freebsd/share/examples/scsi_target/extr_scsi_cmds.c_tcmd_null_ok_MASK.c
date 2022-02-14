
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct ccb_scsiio {int scsi_status; TYPE_2__ ccb_h; scalar_t__ dxfer_len; } ;
struct TYPE_3__ {scalar_t__ targ_descr; } ;
struct ccb_accept_tio {int init_id; TYPE_1__ ccb_h; } ;
struct atio_descr {int cdb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct ccb_accept_tio *VAR_5, struct ccb_scsiio *VAR_6)
{
 if (VAR_4) {
  struct atio_descr *VAR_7;

  VAR_7 = (struct atio_descr *)VAR_5->ccb_h.targ_descr;
  FUNC_0(VAR_7->cdb, "Sending null ok to %u : ", VAR_5->init_id);
 }

 VAR_6->dxfer_len = 0;
 VAR_6->ccb_h.flags &= ~VAR_0;
 VAR_6->ccb_h.flags |= VAR_1 | VAR_2;
 VAR_6->scsi_status = VAR_3;
 return (0);
}
