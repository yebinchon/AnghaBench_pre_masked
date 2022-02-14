
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {scalar_t__ device_id; int ctlr_handle; } ;
typedef int TW_UINT32 ;
typedef scalar_t__ TW_INT32 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,int ,int ,char*) ;
 int FUNC_6 () ;

TW_INT32
FUNC_7(struct tw_cli_ctlr_context *VAR_4, TW_INT32 VAR_5)
{
 TW_UINT32 VAR_6;
 TW_INT32 VAR_7;
 TW_UINT32 VAR_8;

 FUNC_5(4, VAR_4->ctlr_handle, FUNC_6(), "entered");

 for (;;) {
  VAR_8 = FUNC_4(VAR_4->ctlr_handle);

  if (VAR_8 & VAR_0)
   return(VAR_2);

  if (VAR_4->device_id == VAR_1) {
   VAR_6 = FUNC_3(VAR_4->ctlr_handle);
   VAR_7 = FUNC_1(VAR_6);
  } else {
   VAR_6 = FUNC_2(
    VAR_4->ctlr_handle);
   VAR_7 = FUNC_0(VAR_6);
  }
  if (VAR_7 == VAR_5)
   return(VAR_3);
 }
}
