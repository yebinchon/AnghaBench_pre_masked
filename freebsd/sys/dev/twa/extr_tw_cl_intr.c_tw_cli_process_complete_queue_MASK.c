
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {int (* tw_cli_callback ) (struct tw_cli_req_context*) ;} ;
struct tw_cli_ctlr_context {int ctlr_handle; } ;
typedef int TW_VOID ;


 int VAR_0 ;
 struct tw_cli_req_context* VAR_1 ;
 int FUNC_0 (struct tw_cli_req_context*) ;
 int FUNC_1 (int,int ,int ,char*) ;
 struct tw_cli_req_context* FUNC_2 (struct tw_cli_ctlr_context*,int ) ;
 int FUNC_3 () ;

TW_VOID
FUNC_4(struct tw_cli_ctlr_context *VAR_2)
{
 struct tw_cli_req_context *VAR_3;

 FUNC_1(10, VAR_2->ctlr_handle, FUNC_3(), "entered");




 while ((VAR_3 = FUNC_2(VAR_2, VAR_0)) !=
  VAR_1) {

  if (VAR_3->tw_cli_callback)
   VAR_3->tw_cli_callback(VAR_3);
 }
}
