
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int ctlr_handle; } ;
typedef int TW_VOID ;
typedef scalar_t__ TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,char*,char*,scalar_t__) ;
 int FUNC_1 (int,int ,int ,char*) ;
 scalar_t__ FUNC_2 (struct tw_cli_ctlr_context*) ;
 int FUNC_3 () ;

TW_VOID
FUNC_4(struct tw_cli_ctlr_context *VAR_4)
{
 TW_INT32 VAR_5;

 FUNC_1(6, VAR_4->ctlr_handle, FUNC_3(), "entered");

 if ((VAR_5 = FUNC_2(VAR_4))) {







  if (VAR_5 != VAR_3)
   FUNC_0(VAR_4->ctlr_handle, VAR_0,
    VAR_1,
    0x1200, 0x1, VAR_2,
    "Failed to fetch AEN",
    "error = %d", VAR_5);
 }
}
