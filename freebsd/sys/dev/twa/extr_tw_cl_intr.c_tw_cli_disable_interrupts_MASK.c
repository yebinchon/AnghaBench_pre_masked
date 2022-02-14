
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int interrupts_enabled; int ctlr_handle; } ;
typedef int TW_VOID ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ,char*) ;
 int FUNC_2 () ;

TW_VOID
FUNC_3(struct tw_cli_ctlr_context *VAR_2)
{
 FUNC_1(3, VAR_2->ctlr_handle, FUNC_2(), "entered");

 FUNC_0(VAR_2->ctlr_handle,
  VAR_0);
 VAR_2->interrupts_enabled = VAR_1;
}
