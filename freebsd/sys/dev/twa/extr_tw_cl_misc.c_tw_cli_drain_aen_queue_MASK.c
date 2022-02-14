
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tw_cli_req_context {scalar_t__ state; scalar_t__ data; TYPE_3__* cmd_pkt; int ctlr; int error_code; struct tw_cli_req_context* tw_cli_callback; int flags; } ;
struct tw_cli_ctlr_context {void* internal_req_busy; int ctlr_handle; } ;
struct tw_cl_command_header {int dummy; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ cmd_pkt_9k; } ;
struct TYPE_6__ {struct tw_cl_command_header cmd_hdr; TYPE_2__ command; } ;
typedef scalar_t__ TW_UINT16 ;
typedef scalar_t__ TW_TIME ;
typedef int TW_INT32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 struct tw_cli_req_context* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct tw_cli_ctlr_context*,int ,struct tw_cl_command_header*) ;
 int FUNC_1 (int,int ,int ,char*) ;
 struct tw_cli_req_context* FUNC_2 (struct tw_cli_ctlr_context*) ;
 scalar_t__ FUNC_3 (struct tw_cli_ctlr_context*,struct tw_cli_req_context*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tw_cli_req_context*,int ) ;
 int FUNC_6 (struct tw_cli_req_context*,int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;

TW_INT32
FUNC_9(struct tw_cli_ctlr_context *VAR_13)
{
 struct tw_cli_req_context *VAR_14;
 struct tw_cl_command_header *VAR_15;
 TW_TIME VAR_16;
 TW_UINT16 VAR_17;
 TW_INT32 VAR_18;

 FUNC_1(4, VAR_13->ctlr_handle, FUNC_7(), "entered");

 for (;;) {
  if ((VAR_14 = FUNC_2(VAR_13
   )) == VAR_10) {
   VAR_18 = VAR_11;
   break;
  }

  VAR_14->flags |= VAR_4;
  VAR_14->tw_cli_callback = VAR_10;
  if ((VAR_18 = FUNC_6(VAR_14,
    0x03 ))) {
   FUNC_1(1, VAR_13->ctlr_handle,
    FUNC_7(),
    "Cannot send command to fetch aen");
   break;
  }

  VAR_16 = FUNC_8() +
   VAR_3;
  do {
   if ((VAR_18 = VAR_14->error_code))





    goto out;

   FUNC_4(VAR_14->ctlr);

   if ((VAR_14->state != VAR_5) &&
    (VAR_14->state != VAR_7))
    break;
  } while (FUNC_8() <= VAR_16);

  if (VAR_14->state != VAR_6) {
   VAR_18 = VAR_12;
   break;
  }

  if ((VAR_18 = VAR_14->cmd_pkt->command.cmd_pkt_9k.status)) {
   VAR_15 = &VAR_14->cmd_pkt->cmd_hdr;





   break;
  }

  VAR_17 = FUNC_3(VAR_13, VAR_14);
  if (VAR_17 == VAR_0)
   break;
  if (VAR_17 == VAR_1)
   continue;

  VAR_13->internal_req_busy = VAR_8;
  FUNC_5(VAR_14, VAR_2);
 }

out:
 if (VAR_14) {
  if (VAR_14->data)
   VAR_13->internal_req_busy = VAR_8;
  FUNC_5(VAR_14, VAR_2);
 }
 return(VAR_18);
}
