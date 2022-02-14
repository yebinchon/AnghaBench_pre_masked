
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {scalar_t__ state; } ;
struct tw_cli_ctlr_context {int ctlr_handle; struct tw_cli_req_context* req_ctxt_buf; } ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int,int,int ,char*,char*,struct tw_cli_req_context*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tw_cli_ctlr_context*,int) ;
 int FUNC_6 (int,int ,int ,char*) ;
 int FUNC_7 (struct tw_cli_ctlr_context*) ;
 int FUNC_8 (struct tw_cli_req_context*,int ) ;
 int FUNC_9 (struct tw_cli_req_context*,int ) ;
 int FUNC_10 () ;

TW_INT32
FUNC_11(struct tw_cli_ctlr_context *VAR_8)
{
 TW_UINT32 VAR_9;
 struct tw_cli_req_context *VAR_10;
 TW_INT32 VAR_11;
 TW_UINT32 VAR_12;

 FUNC_6(10, VAR_8->ctlr_handle, FUNC_10(), "entered");

 for (;;) {
  VAR_12 = FUNC_2(VAR_8->ctlr_handle);
  if ((VAR_11 = FUNC_5(VAR_8, VAR_12)))
   break;
  if (VAR_12 & VAR_0) {
   FUNC_6(7, VAR_8->ctlr_handle,
    FUNC_10(), "Response queue empty");
   break;
  }


  VAR_9 = FUNC_1(VAR_8->ctlr_handle);
  {
   VAR_10 = &(VAR_8->req_ctxt_buf[FUNC_0(VAR_9)]);
  }

  if (VAR_10->state != VAR_3) {
   FUNC_3(VAR_8->ctlr_handle, VAR_5,
    VAR_6,
    0x1201, 0x1, VAR_7,
    "Unposted command completed!!",
    "request = %p, status = %d",
    VAR_10, VAR_10->state);



   continue;
  }





  FUNC_9(VAR_10, VAR_1);
  VAR_10->state = VAR_4;
  FUNC_8(VAR_10, VAR_2);

 }


 FUNC_7(VAR_8);

 return(VAR_11);
}
