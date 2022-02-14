
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tw_cli_req_context {int request_id; int length; int data_phys; struct tw_cli_ctlr_context* ctlr; struct tw_cl_command_packet* cmd_pkt; int data; } ;
struct tw_cli_ctlr_context {int flags; int ctlr_handle; int internal_req_data_phys; int internal_req_data; scalar_t__ internal_req_busy; } ;
struct tw_cl_sg_desc64 {void* length; int address; } ;
struct tw_cl_sg_desc32 {void* length; void* address; } ;
struct tw_cl_command_9k {int sgl_offset; int* cdb; scalar_t__ sg_list; void* lun_h4__sgl_entries; scalar_t__ status; void* lun_l4__req_id; scalar_t__ unit; int res__opcode; } ;
struct TYPE_6__ {struct tw_cl_command_9k cmd_pkt_9k; } ;
struct TYPE_4__ {int size_header; } ;
struct TYPE_5__ {TYPE_1__ header_desc; } ;
struct tw_cl_command_packet {TYPE_3__ command; TYPE_2__ cmd_hdr; } ;
typedef int TW_UINT8 ;
typedef scalar_t__ TW_INT32 ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int,int ,int ,char*,...) ;
 scalar_t__ FUNC_5 (struct tw_cli_req_context*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;

TW_INT32
FUNC_8(struct tw_cli_req_context *VAR_7, TW_INT32 VAR_8)
{
 struct tw_cl_command_packet *VAR_9;
 struct tw_cl_command_9k *VAR_10;
 struct tw_cli_ctlr_context *VAR_11;
 TW_INT32 VAR_12;

 VAR_11 = VAR_7->ctlr;
 FUNC_4(4, VAR_11->ctlr_handle, FUNC_6(), "entered");


 if (VAR_11->internal_req_busy)
  return(VAR_4);
 VAR_11->internal_req_busy = VAR_3;
 VAR_7->data = VAR_11->internal_req_data;
 VAR_7->data_phys = VAR_11->internal_req_data_phys;
 FUNC_7(VAR_7->data, VAR_1);
 VAR_7->length = VAR_1;


 VAR_9 = VAR_7->cmd_pkt;

 VAR_9->cmd_hdr.header_desc.size_header = 128;

 VAR_10 = &(VAR_9->command.cmd_pkt_9k);

 VAR_10->res__opcode =
  FUNC_0(0, VAR_0);
 VAR_10->unit = 0;
 VAR_10->lun_l4__req_id = FUNC_1(VAR_7->request_id);
 VAR_10->status = 0;
 VAR_10->sgl_offset = 16;
 VAR_10->lun_h4__sgl_entries = FUNC_1(1);

 if (VAR_7->ctlr->flags & VAR_2) {
  ((struct tw_cl_sg_desc64 *)(VAR_10->sg_list))[0].address =
   FUNC_3(VAR_7->data_phys);
  ((struct tw_cl_sg_desc64 *)(VAR_10->sg_list))[0].length =
   FUNC_2(VAR_7->length);
 } else {
  ((struct tw_cl_sg_desc32 *)(VAR_10->sg_list))[0].address =
   FUNC_2(VAR_7->data_phys);
  ((struct tw_cl_sg_desc32 *)(VAR_10->sg_list))[0].length =
   FUNC_2(VAR_7->length);
 }

 VAR_10->cdb[0] = (TW_UINT8)VAR_8;
 VAR_10->cdb[4] = 128;

 if ((VAR_12 = FUNC_5(VAR_7)))
  if (VAR_12 != VAR_4) {
   FUNC_4(1, VAR_11->ctlr_handle,
    FUNC_6(),
    "Failed to start SCSI command",
    "request = %p, error = %d", VAR_7, VAR_12);
   return(VAR_5);
  }
 return(VAR_6);
}
