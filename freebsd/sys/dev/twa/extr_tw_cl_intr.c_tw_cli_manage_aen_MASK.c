
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw_cli_req_context {scalar_t__ data; } ;
struct tw_cli_ctlr_context {int ctlr_handle; int interrupts_enabled; int get_more_aens; int internal_req_busy; } ;
struct TYPE_2__ {int error; } ;
struct tw_cl_command_header {TYPE_1__ status_block; } ;
typedef int TW_UINT32 ;
typedef int TW_UINT16 ;
typedef int TW_TIME ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,char*,char*,int ) ;
 int FUNC_1 (struct tw_cli_ctlr_context*,int ,struct tw_cl_command_header*) ;
 int FUNC_2 (int,int ,int ,char*) ;
 int VAR_9 ;
 int FUNC_3 (struct tw_cli_req_context*,int ) ;
 int FUNC_4 (struct tw_cli_ctlr_context*,int ,int ,int,int*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

TW_UINT16
FUNC_7(struct tw_cli_ctlr_context *VAR_10,
 struct tw_cli_req_context *VAR_11)
{
 struct tw_cl_command_header *VAR_12;
 TW_UINT16 VAR_13;
 TW_TIME VAR_14;
 TW_TIME VAR_15;
 TW_UINT32 VAR_16;

 FUNC_2(4, VAR_10->ctlr_handle, FUNC_5(), "entered");

 VAR_12 = (struct tw_cl_command_header *)(VAR_11->data);
 VAR_13 = VAR_12->status_block.error;

 switch (VAR_13) {
 case 128:
  FUNC_2(4, VAR_10->ctlr_handle, FUNC_5(),
   "Received AEN_SYNC_TIME");




  VAR_10->internal_req_busy = VAR_3;
  FUNC_3(VAR_11, VAR_2);
  if (VAR_10->interrupts_enabled)
   VAR_10->get_more_aens = VAR_8;

  VAR_14 = FUNC_6();
  VAR_15 = (VAR_14 - (3 * 86400)) % 604800;
  if ((VAR_16 = FUNC_4(VAR_10, VAR_1,
    VAR_0, 4,
    &VAR_15,
    (VAR_10->interrupts_enabled)
    ? VAR_9 : VAR_6)))
   FUNC_0(VAR_10->ctlr_handle, VAR_3,
    VAR_4,
    0x1208, 0x1, VAR_7,
    "Unable to sync time with ctlr",
    "error = %d", VAR_16);

  break;


 case 129:
  FUNC_2(4, VAR_10->ctlr_handle, FUNC_5(),
   "AEN queue empty");
  break;


 default:


  FUNC_2(4, VAR_10->ctlr_handle, FUNC_5(),
   "Queueing AEN");
  FUNC_1(VAR_10,
   VAR_5,
   VAR_12);
  break;
 }
 return(VAR_13);
}
