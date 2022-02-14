
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tw_cli_req_context {int (* tw_cli_callback ) (struct tw_cli_req_context*) ;int state; scalar_t__ error_code; TYPE_3__* cmd_pkt; } ;
struct tw_cli_ctlr_context {int ctlr_handle; } ;
struct TYPE_4__ {int res__opcode; } ;
struct TYPE_5__ {TYPE_1__ cmd_pkt_9k; } ;
struct TYPE_6__ {TYPE_2__ command; } ;
typedef scalar_t__ TW_INT32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tw_cli_req_context* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct tw_cli_req_context*) ;
 int FUNC_2 (int ,int ,int ,int,int,int ,char*,char*,struct tw_cli_req_context*,int ,scalar_t__) ;
 int FUNC_3 (int,int ,int ,char*) ;
 int FUNC_4 (struct tw_cli_req_context*,int ) ;
 struct tw_cli_req_context* FUNC_5 (struct tw_cli_ctlr_context*,int ) ;
 scalar_t__ FUNC_6 (struct tw_cli_req_context*) ;
 int FUNC_7 () ;

TW_INT32
FUNC_8(struct tw_cli_ctlr_context *VAR_9)
{
 struct tw_cli_req_context *VAR_10;
 TW_INT32 VAR_11 = VAR_8;

 FUNC_3(3, VAR_9->ctlr_handle, FUNC_7(), "entered");




 while ((VAR_10 = FUNC_5(VAR_9, VAR_0)) !=
  VAR_5) {
  if ((VAR_11 = FUNC_6(VAR_10))) {
   if (VAR_11 == VAR_7) {
    FUNC_3(2, VAR_9->ctlr_handle,
     FUNC_7(),
     "Requeueing pending request");
    VAR_10->state = VAR_2;





    FUNC_4(VAR_10, VAR_0);
    break;
   } else {
    FUNC_2(VAR_9->ctlr_handle,
     VAR_3,
     VAR_4,
     0x1202, 0x1,
     VAR_6,
     "Could not start request "
     "in pending queue",
     "request = %p, opcode = 0x%x, "
     "error = %d", VAR_10,
     FUNC_0(VAR_10->cmd_pkt->
      command.cmd_pkt_9k.res__opcode),
     VAR_11);
    VAR_10->error_code = VAR_11;
    VAR_10->state = VAR_1;
    if (VAR_10->tw_cli_callback)
     VAR_10->tw_cli_callback(VAR_10);
    VAR_11 = VAR_8;
   }
  }
 }
 return(VAR_11);
}
