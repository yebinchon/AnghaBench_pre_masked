
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int ctlr_handle; } ;
typedef scalar_t__ TW_UINT32 ;
typedef scalar_t__ TW_TIME ;
typedef int TW_INT32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;

TW_INT32
FUNC_5(struct tw_cli_ctlr_context *VAR_2, TW_UINT32 VAR_3,
 TW_UINT32 VAR_4)
{
 TW_TIME VAR_5;
 TW_UINT32 VAR_6;

 FUNC_1(4, VAR_2->ctlr_handle, FUNC_2(), "entered");

 VAR_5 = FUNC_4() + VAR_4;
 do {
  VAR_6 = FUNC_0(VAR_2->ctlr_handle);
  if ((VAR_6 & VAR_3) == VAR_3)

   return(VAR_0);

  FUNC_3(1000);
 } while (FUNC_4() <= VAR_5);

 return(VAR_1);
}
