
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; } ;
union tw_cl_command_7k {TYPE_3__ param; } ;
struct tw_cli_req_context {TYPE_2__* cmd_pkt; int error_code; struct tw_cli_ctlr_context* ctlr; } ;
struct tw_cli_ctlr_context {int ctlr_handle; void* get_more_aens; int reset_in_progress; void* internal_req_busy; } ;
struct TYPE_4__ {union tw_cl_command_7k cmd_pkt_7k; } ;
struct TYPE_5__ {int cmd_hdr; TYPE_1__ command; } ;
typedef int TW_VOID ;
typedef scalar_t__ TW_INT32 ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,int ,int,int,int ,char*,char*,scalar_t__) ;
 int FUNC_1 (struct tw_cli_ctlr_context*,int ,int *) ;
 int FUNC_2 (int,int ,int ,char*) ;
 scalar_t__ FUNC_3 (struct tw_cli_ctlr_context*) ;
 int FUNC_4 (struct tw_cli_req_context*,int ) ;
 int FUNC_5 () ;

TW_VOID
FUNC_6(struct tw_cli_req_context *VAR_5)
{
 struct tw_cli_ctlr_context *VAR_6 = VAR_5->ctlr;
 union tw_cl_command_7k *VAR_7 =
  &(VAR_5->cmd_pkt->command.cmd_pkt_7k);
 TW_INT32 VAR_8;

 FUNC_2(4, VAR_6->ctlr_handle, FUNC_5(), "entered");





 if (! VAR_5->error_code)
  if (VAR_7->param.status) {





   FUNC_0(VAR_6->ctlr_handle, VAR_1,
    VAR_2,
    0x1204, 0x1, VAR_4,
    "get/set_param failed",
    "status = %d", VAR_7->param.status);
  }

 VAR_6->internal_req_busy = VAR_1;
 FUNC_4(VAR_5, VAR_0);

 if ((VAR_6->get_more_aens) && (!(VAR_6->reset_in_progress))) {
  VAR_6->get_more_aens = VAR_1;
  FUNC_2(4, VAR_6->ctlr_handle, FUNC_5(),
   "Fetching more AEN's");
  if ((VAR_8 = FUNC_3(VAR_6)))
   FUNC_0(VAR_6->ctlr_handle, VAR_1,
    VAR_2,
    0x1205, 0x1, VAR_4,
    "Failed to fetch all AEN's from param_callback",
    "error = %d", VAR_8);
 }
}
