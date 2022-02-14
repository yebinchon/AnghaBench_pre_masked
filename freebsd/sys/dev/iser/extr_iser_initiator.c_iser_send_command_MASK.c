
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iser_tx_desc {int type; int iscsi_header; } ;
struct iser_data_buf {int data_len; int sg; } ;
struct TYPE_2__ {int sig_count; } ;
struct iser_conn {TYPE_1__ ib_conn; } ;
struct iscsi_bhs_scsi_command {int bhssc_flags; int bhssc_expected_data_transfer_length; int bhssc_initiator_task_tag; } ;
struct icl_iser_pdu {struct iser_data_buf* data; struct ccb_scsiio* csio; struct iser_tx_desc desc; } ;
struct ccb_scsiio {int dxfer_len; int data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*,struct iser_conn*,int ,int ,int) ;
 int FUNC_1 (struct iser_conn*,struct iser_tx_desc*) ;
 int FUNC_2 (struct ccb_scsiio*,struct iser_data_buf*) ;
 int FUNC_3 (TYPE_1__*,struct iser_tx_desc*,int ) ;
 int FUNC_4 (struct icl_iser_pdu*) ;
 int FUNC_5 (struct icl_iser_pdu*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

int
FUNC_9(struct iser_conn *VAR_5,
    struct icl_iser_pdu *VAR_6)
{
 struct iser_data_buf *VAR_7;
 struct iser_tx_desc *VAR_8 = &VAR_6->desc;
 struct iscsi_bhs_scsi_command *VAR_9 = (struct iscsi_bhs_scsi_command *) &(VAR_6->desc.iscsi_header);
 struct ccb_scsiio *VAR_10 = VAR_6->csio;
 int VAR_11 = 0;
 u8 VAR_12 = ++VAR_5->ib_conn.sig_count;


 VAR_8->type = VAR_2;
 FUNC_1(VAR_5, VAR_8);

 if (VAR_9->bhssc_flags & VAR_0) {
  VAR_7 = &VAR_6->data[VAR_3];
 } else {
  VAR_7 = &VAR_6->data[VAR_4];
 }

 VAR_7->sg = VAR_10->data_ptr;
 VAR_7->data_len = VAR_10->dxfer_len;

 if (FUNC_7(VAR_10->dxfer_len)) {
  VAR_11 = FUNC_2(VAR_10, VAR_7);
  if (FUNC_8(VAR_11))
   goto send_command_error;
 }

 if (VAR_9->bhssc_flags & VAR_0) {
  VAR_11 = FUNC_4(VAR_6);
  if (VAR_11)
   goto send_command_error;
 } else if (VAR_9->bhssc_flags & VAR_1) {
  VAR_11 = FUNC_5(VAR_6);
  if (VAR_11)
   goto send_command_error;
 }

 VAR_11 = FUNC_3(&VAR_5->ib_conn, VAR_8,
        FUNC_6(VAR_12));
 if (!VAR_11)
  return (0);

send_command_error:
 FUNC_0("iser_conn %p itt %u len %u err %d", VAR_5,
   VAR_9->bhssc_initiator_task_tag,
   VAR_9->bhssc_expected_data_transfer_length,
   VAR_11);
 return (VAR_11);
}
