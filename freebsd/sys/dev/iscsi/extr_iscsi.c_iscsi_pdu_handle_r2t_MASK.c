
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_session {size_t is_max_send_data_segment_length; } ;
struct iscsi_outstanding {scalar_t__ io_datasn; TYPE_1__* io_ccb; } ;
struct iscsi_bhs_r2t {int bhsr2t_target_transfer_tag; int bhsr2t_initiator_task_tag; int bhsr2t_lun; int bhsr2t_desired_data_transfer_length; int bhsr2t_buffer_offset; } ;
struct iscsi_bhs_data_out {int bhsdo_flags; void* bhsdo_buffer_offset; void* bhsdo_datasn; int bhsdo_target_transfer_tag; int bhsdo_initiator_task_tag; int bhsdo_lun; int bhsdo_opcode; } ;
struct icl_pdu {scalar_t__ ip_bhs; int ip_conn; } ;
struct TYPE_4__ {int flags; } ;
struct ccb_scsiio {size_t dxfer_len; scalar_t__ data_ptr; TYPE_2__ ccb_h; } ;
struct TYPE_3__ {struct ccb_scsiio csio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iscsi_session*,char*,...) ;
 int VAR_4 ;
 struct iscsi_session* FUNC_1 (struct icl_pdu*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (struct icl_pdu*,scalar_t__,size_t,int ) ;
 int FUNC_4 (struct icl_pdu*) ;
 struct icl_pdu* FUNC_5 (int ,int ) ;
 struct iscsi_outstanding* FUNC_6 (struct iscsi_session*,int ) ;
 int FUNC_7 (struct icl_pdu*) ;
 int FUNC_8 (struct iscsi_session*) ;
 size_t FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct icl_pdu *VAR_5)
{
 struct icl_pdu *VAR_6;
 struct iscsi_session *VAR_7;
 struct iscsi_bhs_r2t *VAR_8;
 struct iscsi_bhs_data_out *VAR_9;
 struct iscsi_outstanding *VAR_10;
 struct ccb_scsiio *VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_7 = FUNC_1(VAR_5);

 VAR_8 = (struct iscsi_bhs_r2t *)VAR_5->ip_bhs;
 VAR_10 = FUNC_6(VAR_7, VAR_8->bhsr2t_initiator_task_tag);
 if (VAR_10 == ((void*)0) || VAR_10->io_ccb == ((void*)0)) {
  FUNC_0(VAR_7, "bad itt 0x%x; reconnecting",
      VAR_8->bhsr2t_initiator_task_tag);
  FUNC_4(VAR_5);
  FUNC_8(VAR_7);
  return;
 }

 VAR_11 = &VAR_10->io_ccb->csio;

 if ((VAR_11->ccb_h.flags & VAR_1) != VAR_2) {
  FUNC_0(VAR_7, "received R2T for read command; reconnecting");
  FUNC_4(VAR_5);
  FUNC_8(VAR_7);
  return;
 }





 VAR_10->io_datasn = 0;

 VAR_12 = FUNC_9(VAR_8->bhsr2t_buffer_offset);
 if (VAR_12 > VAR_11->dxfer_len) {
  FUNC_0(VAR_7, "target requested invalid offset "
      "%zd, buffer is is %d; reconnecting", VAR_12, VAR_11->dxfer_len);
  FUNC_4(VAR_5);
  FUNC_8(VAR_7);
  return;
 }

 VAR_14 = FUNC_9(VAR_8->bhsr2t_desired_data_transfer_length);
 if (VAR_14 == 0 || VAR_14 > VAR_11->dxfer_len) {
  FUNC_0(VAR_7, "target requested invalid length "
      "%zd, buffer is %d; reconnecting", VAR_14, VAR_11->dxfer_len);
  FUNC_4(VAR_5);
  FUNC_8(VAR_7);
  return;
 }



 for (;;) {
  VAR_13 = VAR_14;

  if (VAR_13 > VAR_7->is_max_send_data_segment_length)
   VAR_13 = VAR_7->is_max_send_data_segment_length;

  if (VAR_12 + VAR_13 > VAR_11->dxfer_len) {
   FUNC_0(VAR_7, "target requested invalid "
       "length/offset %zd, buffer is %d; reconnecting",
       VAR_12 + VAR_13, VAR_11->dxfer_len);
   FUNC_4(VAR_5);
   FUNC_8(VAR_7);
   return;
  }

  VAR_6 = FUNC_5(VAR_5->ip_conn, VAR_4);
  if (VAR_6 == ((void*)0)) {
   FUNC_4(VAR_5);
   FUNC_8(VAR_7);
   return;
  }

  VAR_9 = (struct iscsi_bhs_data_out *)VAR_6->ip_bhs;
  VAR_9->bhsdo_opcode = VAR_3;
  VAR_9->bhsdo_lun = VAR_8->bhsr2t_lun;
  VAR_9->bhsdo_initiator_task_tag =
      VAR_8->bhsr2t_initiator_task_tag;
  VAR_9->bhsdo_target_transfer_tag =
      VAR_8->bhsr2t_target_transfer_tag;
  VAR_9->bhsdo_datasn = FUNC_2(VAR_10->io_datasn++);
  VAR_9->bhsdo_buffer_offset = FUNC_2(VAR_12);
  VAR_15 = FUNC_3(VAR_6, VAR_11->data_ptr + VAR_12, VAR_13,
      VAR_4);
  if (VAR_15 != 0) {
   FUNC_0(VAR_7, "failed to allocate memory; "
       "reconnecting");
   FUNC_4(VAR_6);
   FUNC_4(VAR_5);
   FUNC_8(VAR_7);
   return;
  }

  VAR_12 += VAR_13;
  VAR_14 -= VAR_13;

  if (VAR_14 == 0) {
   VAR_9->bhsdo_flags |= VAR_0;

  } else {

  }

  FUNC_7(VAR_6);

  if (VAR_14 == 0)
   break;
 }

 FUNC_4(VAR_5);
}
