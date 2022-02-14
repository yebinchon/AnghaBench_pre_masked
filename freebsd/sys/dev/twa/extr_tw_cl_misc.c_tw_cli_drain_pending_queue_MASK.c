
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {int flags; int req_handle; int (* tw_osl_callback ) (int ) ;void* status; struct tw_cli_req_context* orig_req; int (* tw_cli_callback ) (struct tw_cli_req_context*) ;void* error_code; } ;
struct tw_cli_ctlr_context {int ctlr_handle; } ;
struct tw_cl_req_packet {int flags; int req_handle; int (* tw_osl_callback ) (int ) ;void* status; struct tw_cl_req_packet* orig_req; int (* tw_cli_callback ) (struct tw_cli_req_context*) ;void* error_code; } ;
typedef int TW_VOID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 struct tw_cli_req_context* VAR_6 ;
 int FUNC_0 (struct tw_cli_req_context*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,char*) ;
 int FUNC_3 (struct tw_cli_req_context*,int ) ;
 struct tw_cli_req_context* FUNC_4 (struct tw_cli_ctlr_context*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

TW_VOID
FUNC_7(struct tw_cli_ctlr_context *VAR_7)
{
 struct tw_cli_req_context *VAR_8;
 struct tw_cl_req_packet *VAR_9;

 FUNC_2(3, VAR_7->ctlr_handle, FUNC_5(), "entered");




 while ((VAR_8 = FUNC_4(VAR_7, VAR_1)) !=
  VAR_6) {
  if (VAR_8->flags & VAR_2) {
   VAR_8->error_code = VAR_5;
   if (VAR_8->tw_cli_callback)
    VAR_8->tw_cli_callback(VAR_8);
  } else if (VAR_8->flags & VAR_3) {

   if ((VAR_9 = VAR_8->orig_req) != VAR_6) {
    VAR_9->status = VAR_5;

    if (VAR_9->tw_osl_callback)
     VAR_9->tw_osl_callback(VAR_8->req_handle);
   }
   FUNC_3(VAR_8, VAR_0);
  } else {

   FUNC_6(VAR_8->req_handle);
   FUNC_3(VAR_8, VAR_4);
  }
 }
}
