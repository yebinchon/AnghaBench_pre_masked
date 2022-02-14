
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tw_cli_req_context {int request_id; TYPE_5__* cmd_pkt; int flags; int tw_cli_callback; struct tw_cl_req_packet* orig_req; struct tw_cl_req_handle* req_handle; } ;
struct tw_cli_ctlr_context {scalar_t__ working_srl; scalar_t__ reset_in_progress; int * req_q_head; } ;
struct tw_cl_scsi_req_packet {int sgl_entries; int sg_list; scalar_t__ lun; int cdb_len; int cdb; scalar_t__ unit; } ;
struct TYPE_6__ {struct tw_cl_scsi_req_packet scsi_req; } ;
struct tw_cl_req_packet {int status; int flags; int (* tw_osl_sgl_callback ) (struct tw_cl_req_handle*,int ,int *) ;TYPE_1__ gen_req_pkt; int (* tw_osl_callback ) (struct tw_cl_req_handle*) ;} ;
struct tw_cl_req_handle {struct tw_cli_req_context* cl_req_ctxt; } ;
struct tw_cl_ctlr_handle {scalar_t__ cl_ctlr_ctxt; } ;
struct tw_cl_command_9k {int sgl_offset; int sg_list; void* lun_h4__sgl_entries; int cdb; scalar_t__ status; void* lun_l4__req_id; scalar_t__ unit; int res__opcode; } ;
struct TYPE_8__ {int size_header; } ;
struct TYPE_9__ {TYPE_3__ header_desc; } ;
struct TYPE_7__ {struct tw_cl_command_9k cmd_pkt_9k; } ;
struct TYPE_10__ {TYPE_4__ cmd_hdr; TYPE_2__ command; } ;
typedef scalar_t__ TW_UINT8 ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct tw_cl_ctlr_handle*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct tw_cli_req_context* VAR_10 ;
 struct tw_cli_req_context* FUNC_4 (int *) ;
 int VAR_11 ;
 void* FUNC_5 (int ) ;
 int VAR_12 ;
 int FUNC_6 (struct tw_cl_req_handle*) ;
 int FUNC_7 (struct tw_cl_req_handle*,int ,int *) ;
 int VAR_13 ;
 int FUNC_8 (int,struct tw_cl_ctlr_handle*,int ,char*,...) ;
 int FUNC_9 (struct tw_cli_ctlr_context*,int ,int ,int ) ;
 struct tw_cli_req_context* FUNC_10 (struct tw_cli_ctlr_context*) ;
 int FUNC_11 (struct tw_cli_req_context*,size_t) ;
 int FUNC_12 (struct tw_cli_req_context*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ,int ) ;

TW_INT32
FUNC_15(struct tw_cl_ctlr_handle *VAR_14,
 struct tw_cl_req_packet *VAR_15, struct tw_cl_req_handle *VAR_16)
{
 struct tw_cli_ctlr_context *VAR_17;
 struct tw_cli_req_context *VAR_18;
 struct tw_cl_command_9k *VAR_19;
 struct tw_cl_scsi_req_packet *VAR_20;
 TW_INT32 VAR_21 = VAR_9;

 FUNC_8(10, VAR_14, FUNC_13(), "entered");

 VAR_17 = (struct tw_cli_ctlr_context *)(VAR_14->cl_ctlr_ctxt);






 if ((VAR_15->gen_req_pkt.scsi_req.lun) &&
  (VAR_17->working_srl < VAR_2)) {
  VAR_15->status |= (VAR_7 |
   VAR_8);
  VAR_15->tw_osl_callback(VAR_16);
  return(VAR_9);
 }

 if ((VAR_18 = FUNC_10(VAR_17
  )) == VAR_10) {
  FUNC_8(2, VAR_14, FUNC_13(),
   "Out of request context packets: returning busy");
  return(VAR_12);
 }

 VAR_16->cl_req_ctxt = VAR_18;
 VAR_18->req_handle = VAR_16;
 VAR_18->orig_req = VAR_15;
 VAR_18->tw_cli_callback = VAR_13;

 VAR_18->flags |= VAR_6;
 VAR_18->flags |= VAR_5;

 VAR_20 = &(VAR_15->gen_req_pkt.scsi_req);


 VAR_19 = &(VAR_18->cmd_pkt->command.cmd_pkt_9k);

 VAR_18->cmd_pkt->cmd_hdr.header_desc.size_header = 128;

 VAR_19->res__opcode = FUNC_2(0, VAR_1);
 VAR_19->unit = (TW_UINT8)(VAR_20->unit);
 VAR_19->lun_l4__req_id = FUNC_5(
  FUNC_1(VAR_20->lun, VAR_18->request_id));
 VAR_19->status = 0;
 VAR_19->sgl_offset = 16;
 FUNC_14(VAR_19->cdb, VAR_20->cdb, VAR_20->cdb_len);

 if (VAR_15->flags & VAR_11) {
  TW_UINT32 VAR_22;

  VAR_15->tw_osl_sgl_callback(VAR_16, VAR_19->sg_list,
   &VAR_22);
  VAR_19->lun_h4__sgl_entries =
   FUNC_5(FUNC_0(VAR_20->lun,
    VAR_22));
 } else {
  VAR_19->lun_h4__sgl_entries =
   FUNC_5(FUNC_0(VAR_20->lun,
    VAR_20->sgl_entries));
  FUNC_9(VAR_17, VAR_20->sg_list,
   VAR_19->sg_list, VAR_20->sgl_entries);
 }

 if (((FUNC_4(&(VAR_17->req_q_head[VAR_4]))) != VAR_10) ||
  (VAR_17->reset_in_progress)) {
  FUNC_11(VAR_18, VAR_4);
  FUNC_3(VAR_14,
   VAR_0);
 } else if ((VAR_21 = FUNC_12(VAR_18))) {
  FUNC_8(2, VAR_14, FUNC_13(),
   "Could not start request. request = %p, error = %d",
   VAR_18, VAR_21);
  FUNC_11(VAR_18, VAR_3);
 }
 return(VAR_21);
}
