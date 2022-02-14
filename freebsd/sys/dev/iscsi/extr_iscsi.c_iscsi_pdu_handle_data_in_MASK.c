
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int path; } ;
struct TYPE_4__ {int flags; } ;
struct ccb_scsiio {size_t dxfer_len; scalar_t__ scsi_status; size_t resid; TYPE_2__ ccb_h; scalar_t__ data_ptr; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_scsiio csio; } ;
struct iscsi_session {int dummy; } ;
struct iscsi_outstanding {size_t io_received; union ccb* io_ccb; } ;
struct iscsi_bhs_data_in {int bhsdi_flags; scalar_t__ bhsdi_status; int bhsdi_residual_count; int bhsdi_buffer_offset; int bhsdi_initiator_task_tag; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iscsi_session*,char*) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (struct iscsi_session*,char*,size_t,...) ;
 int FUNC_3 (int,char*) ;
 struct iscsi_session* FUNC_4 (struct icl_pdu*) ;
 size_t FUNC_5 (struct icl_pdu*) ;
 int FUNC_6 (struct icl_pdu*) ;
 int FUNC_7 (struct icl_pdu*,int ,scalar_t__,size_t) ;
 struct iscsi_outstanding* FUNC_8 (struct iscsi_session*,int ) ;
 int FUNC_9 (struct iscsi_session*,struct iscsi_outstanding*) ;
 int FUNC_10 (struct iscsi_session*) ;
 size_t FUNC_11 (int ) ;
 int FUNC_12 (union ccb*) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static void
FUNC_14(struct icl_pdu *VAR_6)
{
 struct iscsi_bhs_data_in *VAR_7;
 struct iscsi_outstanding *VAR_8;
 struct iscsi_session *VAR_9;
 union ccb *VAR_10;
 struct ccb_scsiio *VAR_11;
 size_t VAR_12, VAR_13, VAR_14;

 VAR_9 = FUNC_4(VAR_6);
 VAR_7 = (struct iscsi_bhs_data_in *)VAR_6->ip_bhs;
 VAR_8 = FUNC_8(VAR_9, VAR_7->bhsdi_initiator_task_tag);
 if (VAR_8 == ((void*)0) || VAR_8->io_ccb == ((void*)0)) {
  FUNC_2(VAR_9, "bad itt 0x%x", VAR_7->bhsdi_initiator_task_tag);
  FUNC_6(VAR_6);
  FUNC_10(VAR_9);
  FUNC_1(VAR_9);
  return;
 }

 VAR_12 = FUNC_5(VAR_6);
 if (VAR_12 == 0) {





  FUNC_1(VAR_9);
  FUNC_6(VAR_6);
  return;
 }






 if (FUNC_11(VAR_7->bhsdi_buffer_offset) != VAR_8->io_received) {
  FUNC_2(VAR_9, "data out of order; expected offset %zd, got %zd",
      VAR_8->io_received, (size_t)FUNC_11(VAR_7->bhsdi_buffer_offset));
  FUNC_6(VAR_6);
  FUNC_10(VAR_9);
  FUNC_1(VAR_9);
  return;
 }

 VAR_10 = VAR_8->io_ccb;
 VAR_11 = &VAR_10->csio;

 if (VAR_8->io_received + VAR_12 > VAR_11->dxfer_len) {
  FUNC_2(VAR_9, "oversize data segment (%zd bytes "
      "at offset %zd, buffer is %d)",
      VAR_12, VAR_8->io_received, VAR_11->dxfer_len);
  FUNC_6(VAR_6);
  FUNC_10(VAR_9);
  FUNC_1(VAR_9);
  return;
 }

 VAR_14 = VAR_8->io_received;
 VAR_8->io_received += VAR_12;
 VAR_13 = VAR_8->io_received;
 if ((VAR_7->bhsdi_flags & VAR_0) != 0)
  FUNC_9(VAR_9, VAR_8);
 FUNC_1(VAR_9);

 FUNC_7(VAR_6, 0, VAR_11->data_ptr + VAR_14, VAR_12);





 if ((VAR_7->bhsdi_flags & VAR_0) == 0) {



  FUNC_6(VAR_6);
  return;
 }


 if (VAR_7->bhsdi_status == 0) {
  VAR_10->ccb_h.status = VAR_4;
 } else {
  if ((VAR_10->ccb_h.status & VAR_1) == 0) {
   FUNC_13(VAR_10->ccb_h.path, 1);
   FUNC_0(VAR_9, "freezing devq");
  }
  VAR_10->ccb_h.status = VAR_5 | VAR_1;
  VAR_11->scsi_status = VAR_7->bhsdi_status;
 }

 if ((VAR_11->ccb_h.flags & VAR_3) == VAR_2) {
  FUNC_3(VAR_13 <= VAR_11->dxfer_len,
      ("received > csio->dxfer_len"));
  if (VAR_13 < VAR_11->dxfer_len) {
   VAR_11->resid = FUNC_11(VAR_7->bhsdi_residual_count);
   if (VAR_11->resid != VAR_11->dxfer_len - VAR_13) {
    FUNC_2(VAR_9, "underflow mismatch: "
        "target indicates %d, we calculated %zd",
        VAR_11->resid, VAR_11->dxfer_len - VAR_13);
   }
   VAR_11->resid = VAR_11->dxfer_len - VAR_13;
  }
 }

 FUNC_12(VAR_10);
 FUNC_6(VAR_6);
}
