
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int ctlr_handle; } ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int ,char*) ;
 int FUNC_3 () ;

TW_INT32
FUNC_4(struct tw_cli_ctlr_context *VAR_2)
{
 TW_UINT32 VAR_3;
 TW_UINT32 VAR_4;

 FUNC_2(4, VAR_2->ctlr_handle, FUNC_3(), "entered");

 for (;;) {
  VAR_4 = FUNC_1(VAR_2->ctlr_handle);

  if (VAR_4 & VAR_0)
   return(VAR_1);

  VAR_3 = FUNC_0(VAR_2->ctlr_handle);
 }
}
