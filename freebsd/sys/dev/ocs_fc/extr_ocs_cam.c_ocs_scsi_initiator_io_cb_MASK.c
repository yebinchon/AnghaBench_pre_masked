
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ flags; int status; } ;
struct TYPE_10__ {struct ocs_softc* ccb_ocs_ptr; int * ccb_io_ptr; int path; int status; } ;
struct ccb_scsiio {scalar_t__ scsi_status; scalar_t__ resid; scalar_t__ dxfer_len; scalar_t__ sense_len; scalar_t__ sense_resid; TYPE_2__ ccb_h; int sense_data; } ;
union ccb {TYPE_3__ ccb_h; struct ccb_scsiio csio; } ;
typedef scalar_t__ uint32_t ;
struct ocs_softc {int buf_dmat; } ;
typedef scalar_t__ ocs_scsi_io_status_e ;
struct TYPE_12__ {scalar_t__ scsi_status; scalar_t__ residual; scalar_t__ response_wire_length; scalar_t__ sense_data_length; int sense_data; } ;
typedef TYPE_4__ ocs_scsi_cmd_resp_t ;
struct TYPE_9__ {int flags; int dmap; } ;
struct TYPE_13__ {TYPE_1__ tgt_io; } ;
typedef TYPE_5__ ocs_io_t ;
typedef int int32_t ;
typedef int cam_status ;
typedef int bus_dmasync_op_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (union ccb*,int ) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int32_t FUNC_7(ocs_io_t *VAR_18,
     ocs_scsi_io_status_e VAR_19,
     ocs_scsi_cmd_resp_t *VAR_20,
     uint32_t VAR_21, void *VAR_22)
{
 union ccb *VAR_23 = VAR_22;
 struct ccb_scsiio *VAR_24 = &VAR_23->csio;
 struct ocs_softc *VAR_25 = VAR_24->ccb_h.ccb_ocs_ptr;
 uint32_t VAR_26 = VAR_23->ccb_h.flags & VAR_6;
 cam_status VAR_27= VAR_9;

 if (VAR_7 != VAR_26) {
  bus_dmasync_op_t VAR_28;

  if (VAR_5 == VAR_26) {
   VAR_28 = VAR_0;
  } else {
   VAR_28 = VAR_1;
  }

  FUNC_0(VAR_25->buf_dmat, VAR_18->tgt_io.dmap, VAR_28);
  if (VAR_18->tgt_io.flags & VAR_14) {
   FUNC_1(VAR_25->buf_dmat, VAR_18->tgt_io.dmap);
  }
 }

 if (VAR_19 == VAR_15) {
  VAR_24->scsi_status = VAR_20->scsi_status;
  if (VAR_17 != VAR_20->scsi_status) {
   VAR_27 = VAR_10;
  }

  VAR_24->resid = VAR_20->residual;
  if (VAR_20->residual > 0) {
   uint32_t VAR_29 = VAR_20->response_wire_length;

   if (VAR_24->dxfer_len == (VAR_29 + VAR_24->resid)) {
    VAR_27 = VAR_8;
   }
  } else if (VAR_20->residual < 0) {
   VAR_27 = VAR_3;
  }

  if ((VAR_20->sense_data_length) &&
   !(VAR_23->ccb_h.flags & (VAR_11 | VAR_12))) {
   uint32_t VAR_30 = 0;

   VAR_23->ccb_h.status |= VAR_2;
   if (VAR_20->sense_data_length < VAR_24->sense_len) {
    VAR_24->sense_resid =
     VAR_24->sense_len - VAR_20->sense_data_length;
    VAR_30 = VAR_20->sense_data_length;
   } else {
    VAR_24->sense_resid = 0;
    VAR_30 = VAR_24->sense_len;
   }
   FUNC_2(&VAR_24->sense_data, VAR_20->sense_data, VAR_30);
  }
 } else if (VAR_19 != VAR_16) {
  VAR_27 = VAR_9;
  FUNC_4(VAR_23, VAR_27);
  VAR_24->ccb_h.status |= VAR_4;
  FUNC_6(VAR_24->ccb_h.path, 1);

 } else {
  VAR_27 = VAR_8;
 }

 FUNC_4(VAR_23, VAR_27);

 FUNC_3(VAR_18);

 VAR_24->ccb_h.ccb_io_ptr = ((void*)0);
 VAR_24->ccb_h.ccb_ocs_ptr = ((void*)0);
 VAR_23->ccb_h.status &= ~VAR_13;

 FUNC_5(VAR_23);

 return 0;
}
