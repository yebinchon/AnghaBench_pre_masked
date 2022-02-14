
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int request_id; int size; int sgl_off__opcode; } ;
union tw_cl_command_7k {TYPE_3__ generic; } ;
struct tw_cli_req_context {int request_id; TYPE_4__* cmd_pkt; int flags; int tw_cli_callback; struct tw_cl_req_packet* orig_req; struct tw_cl_req_handle* req_handle; } ;
struct tw_cli_ctlr_context {scalar_t__ device_id; int flags; scalar_t__ reset_in_progress; int * req_q_head; } ;
struct tw_cl_passthru_req_packet {int sgl_entries; int sg_list; scalar_t__ cmd_pkt; int cmd_pkt_length; } ;
struct TYPE_5__ {struct tw_cl_passthru_req_packet pt_req; } ;
struct tw_cl_req_packet {TYPE_1__ gen_req_pkt; } ;
struct tw_cl_req_handle {struct tw_cli_req_context* cl_req_ctxt; } ;
struct tw_cl_ctlr_handle {scalar_t__ cl_ctlr_ctxt; } ;
struct tw_cl_command_header {int dummy; } ;
struct tw_cl_command_9k {scalar_t__ sg_list; void* lun_h4__sgl_entries; void* lun_l4__req_id; } ;
struct TYPE_6__ {union tw_cl_command_7k cmd_pkt_7k; struct tw_cl_command_9k cmd_pkt_9k; } ;
struct TYPE_8__ {TYPE_2__ command; } ;
typedef struct tw_cli_req_context TW_VOID ;
typedef int TW_UINT8 ;
typedef struct tw_cli_req_context TW_UINT32 ;
typedef int TW_UINT16 ;
typedef int TW_INT32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct tw_cl_ctlr_handle*,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tw_cli_req_context* VAR_11 ;
 struct tw_cli_req_context* FUNC_7 (int *) ;
 int VAR_12 ;
 void* FUNC_8 (int ) ;
 int VAR_13 ;
 int FUNC_9 (struct tw_cl_ctlr_handle*,int ,int ,int,int,int ,char*,char*,int ) ;
 int VAR_14 ;
 int FUNC_10 (int,struct tw_cl_ctlr_handle*,int ,char*) ;
 int FUNC_11 (struct tw_cli_ctlr_context*,int ,struct tw_cli_req_context*,int) ;
 struct tw_cli_req_context* FUNC_12 (struct tw_cli_ctlr_context*) ;
 int FUNC_13 (struct tw_cli_req_context*,size_t) ;
 int FUNC_14 (struct tw_cli_req_context*) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_4__*,scalar_t__,int ) ;

TW_INT32
FUNC_17(struct tw_cl_ctlr_handle *VAR_15,
 struct tw_cl_req_packet *VAR_16, struct tw_cl_req_handle *VAR_17)
{
 struct tw_cli_ctlr_context *VAR_18;
 struct tw_cli_req_context *VAR_19;
 union tw_cl_command_7k *VAR_20;
 struct tw_cl_command_9k *VAR_21;
 struct tw_cl_passthru_req_packet *VAR_22;
 TW_UINT8 VAR_23;
 TW_UINT8 VAR_24;
 TW_VOID *VAR_25 = VAR_11;
 TW_INT32 VAR_26 = VAR_8;

 FUNC_10(5, VAR_15, FUNC_15(), "entered");

 VAR_18 = (struct tw_cli_ctlr_context *)(VAR_15->cl_ctlr_ctxt);

 if ((VAR_19 = FUNC_12(VAR_18
  )) == VAR_11) {
  FUNC_10(2, VAR_15, FUNC_15(),
   "Out of request context packets: returning busy");
  return(VAR_13);
 }

 VAR_17->cl_req_ctxt = VAR_19;
 VAR_19->req_handle = VAR_17;
 VAR_19->orig_req = VAR_16;
 VAR_19->tw_cli_callback = VAR_14;

 VAR_19->flags |= VAR_5;

 VAR_22 = &(VAR_16->gen_req_pkt.pt_req);

 FUNC_16(VAR_19->cmd_pkt, VAR_22->cmd_pkt,
  VAR_22->cmd_pkt_length);

 if ((VAR_23 = FUNC_4(((TW_UINT8 *)
  (VAR_22->cmd_pkt))[sizeof(struct tw_cl_command_header)]))
   == VAR_1) {
  TW_UINT16 VAR_27, VAR_28;

  FUNC_10(5, VAR_15, FUNC_15(),
   "passthru: 9k cmd pkt");
  VAR_19->flags |= VAR_4;
  VAR_21 = &(VAR_19->cmd_pkt->command.cmd_pkt_9k);
  VAR_27 = FUNC_3(VAR_21->lun_l4__req_id);
  VAR_28 = FUNC_2(VAR_21->lun_h4__sgl_entries);
  VAR_21->lun_l4__req_id = FUNC_8(
   FUNC_1(VAR_27, VAR_19->request_id));
  if (VAR_22->sgl_entries) {
   VAR_21->lun_h4__sgl_entries =
    FUNC_8(FUNC_0(VAR_28,
     VAR_22->sgl_entries));
   VAR_25 = (TW_VOID *)(VAR_21->sg_list);
  }
 } else {
  FUNC_10(5, VAR_15, FUNC_15(),
   "passthru: 7k cmd pkt");
  VAR_20 = &(VAR_19->cmd_pkt->command.cmd_pkt_7k);
  VAR_20->generic.request_id =
   (TW_UINT8)(FUNC_8(VAR_19->request_id));
  if ((VAR_24 =
   FUNC_5(VAR_20->generic.sgl_off__opcode))) {
   if (VAR_18->device_id == VAR_7)
    VAR_25 = (((TW_UINT32 *)VAR_20) + VAR_20->generic.size);
   else
    VAR_25 = (((TW_UINT32 *)VAR_20) + VAR_24);
   VAR_20->generic.size += VAR_22->sgl_entries *
    ((VAR_18->flags & VAR_6) ? 3 : 2);
  }
 }

 if (VAR_25)
  FUNC_11(VAR_18, VAR_22->sg_list,
   VAR_25, VAR_22->sgl_entries);

 if (((FUNC_7(&(VAR_18->req_q_head[VAR_3]))) != VAR_11) ||
  (VAR_18->reset_in_progress)) {
  FUNC_13(VAR_19, VAR_3);
  FUNC_6(VAR_15,
   VAR_0);
 } else if ((VAR_26 = FUNC_14(VAR_19))) {
  FUNC_9(VAR_15, VAR_9,
   VAR_10,
   0x1100, 0x1, VAR_12,
   "Failed to start passthru command",
   "error = %d", VAR_26);
  FUNC_13(VAR_19, VAR_2);
 }
 return(VAR_26);
}
