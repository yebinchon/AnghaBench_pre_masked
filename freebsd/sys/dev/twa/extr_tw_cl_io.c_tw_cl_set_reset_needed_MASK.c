
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int reset_needed; } ;
struct tw_cl_ctlr_handle {scalar_t__ cl_ctlr_ctxt; } ;
typedef int TW_VOID ;


 int VAR_0 ;

TW_VOID
FUNC_0(struct tw_cl_ctlr_handle *VAR_1)
{
 struct tw_cli_ctlr_context *VAR_2 =
  (struct tw_cli_ctlr_context *)(VAR_1->cl_ctlr_ctxt);

 VAR_2->reset_needed = VAR_0;
}
