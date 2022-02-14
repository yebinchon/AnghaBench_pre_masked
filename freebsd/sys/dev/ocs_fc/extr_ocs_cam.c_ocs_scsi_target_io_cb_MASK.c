
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ flags; int status; } ;
struct TYPE_11__ {struct ocs_softc* ccb_ocs_ptr; } ;
struct ccb_scsiio {int sense_len; int sense_data; TYPE_1__ ccb_h; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_scsiio csio; } ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct ocs_softc {int buf_dmat; } ;
typedef int ocs_scsi_io_status_e ;
struct TYPE_14__ {int scsi_status; scalar_t__ residual; int sense_data_length; int * sense_data; int member_0; } ;
typedef TYPE_4__ ocs_scsi_cmd_resp_t ;
struct TYPE_13__ {int flags; int state; scalar_t__ sendresp; int dmap; } ;
struct TYPE_15__ {TYPE_3__ tgt_io; scalar_t__ transferred; scalar_t__ exp_xfer_len; } ;
typedef TYPE_5__ ocs_io_t ;
typedef int int32_t ;
typedef int bus_dmasync_op_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ,TYPE_4__*,int (*) (TYPE_5__*,int,scalar_t__,void*),union ccb*) ;
 int FUNC_3 (union ccb*,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static int32_t FUNC_6(ocs_io_t *VAR_15,
    ocs_scsi_io_status_e VAR_16,
    uint32_t VAR_17, void *VAR_18)
{
 union ccb *VAR_19 = VAR_18;
 struct ccb_scsiio *VAR_20 = &VAR_19->csio;
 struct ocs_softc *VAR_21 = VAR_20->ccb_h.ccb_ocs_ptr;
 uint32_t VAR_22 = VAR_19->ccb_h.flags & VAR_3;
 uint32_t VAR_23 =
  (VAR_19->ccb_h.flags & VAR_9) == VAR_9;

 VAR_19->ccb_h.status &= ~VAR_10;

 if (VAR_4 != VAR_22) {
  bus_dmasync_op_t VAR_24;

  if (VAR_2 == VAR_22) {
   VAR_24 = VAR_0;
  } else {
   VAR_24 = VAR_1;
  }

  FUNC_0(VAR_21->buf_dmat, VAR_15->tgt_io.dmap, VAR_24);
  if (VAR_15->tgt_io.flags & VAR_13) {
   FUNC_1(VAR_21->buf_dmat, VAR_15->tgt_io.dmap);
  }
 }

 if (VAR_15->tgt_io.sendresp) {
  VAR_15->tgt_io.sendresp = 0;
  ocs_scsi_cmd_resp_t VAR_25 = { 0 };
  VAR_15->tgt_io.state = VAR_14;
  VAR_25.scsi_status = VAR_16;
  if (VAR_19->ccb_h.flags & VAR_8) {
   VAR_25.sense_data = (uint8_t *)&VAR_20->sense_data;
   VAR_25.sense_data_length = VAR_20->sense_len;
  }
  VAR_25.residual = VAR_15->exp_xfer_len - VAR_15->transferred;

  return FUNC_2(VAR_15, 0, &VAR_25, FUNC_6, VAR_19);
 }

 switch (VAR_16) {
 case 128:
  FUNC_3(VAR_19, VAR_6);
  break;
 case 129:
  FUNC_3(VAR_19, VAR_5);
  break;
 default:
  FUNC_3(VAR_19, VAR_7);
 }

 if (VAR_23) {
  if ((VAR_15->tgt_io.flags & VAR_12) == 0) {
   FUNC_4(VAR_15);
  }
 } else {
  VAR_15->tgt_io.state = VAR_11;


 }

 FUNC_5(VAR_19);

 return 0;
}
