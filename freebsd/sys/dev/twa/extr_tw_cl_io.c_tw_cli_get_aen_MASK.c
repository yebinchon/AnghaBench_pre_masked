
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {scalar_t__ data; int tw_cli_callback; int flags; } ;
struct tw_cli_ctlr_context {int internal_req_busy; int ctlr_handle; } ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tw_cli_req_context* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ,char*,...) ;
 struct tw_cli_req_context* FUNC_1 (struct tw_cli_ctlr_context*) ;
 int FUNC_2 (struct tw_cli_req_context*,int ) ;
 int FUNC_3 (struct tw_cli_req_context*,int) ;
 int FUNC_4 () ;

TW_INT32
FUNC_5(struct tw_cli_ctlr_context *VAR_7)
{
 struct tw_cli_req_context *VAR_8;
 TW_INT32 VAR_9;

 FUNC_0(4, VAR_7->ctlr_handle, FUNC_4(), "entered");

 if ((VAR_8 = FUNC_1(VAR_7
  )) == VAR_4)
  return(VAR_5);

 VAR_8->flags |= VAR_2;
 VAR_8->flags |= VAR_1;
 VAR_8->tw_cli_callback = VAR_6;
 if ((VAR_9 = FUNC_3(VAR_8, 0x03 ))) {
  FUNC_0(1, VAR_7->ctlr_handle, FUNC_4(),
   "Could not send SCSI command",
   "request = %p, error = %d", VAR_8, VAR_9);
  if (VAR_8->data)
   VAR_7->internal_req_busy = VAR_3;
  FUNC_2(VAR_8, VAR_0);
 }
 return(VAR_9);
}
