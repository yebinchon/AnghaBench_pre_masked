
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int * req_q_head; int active; scalar_t__ reset_in_progress; } ;
struct tw_cl_ctlr_handle {scalar_t__ cl_ctlr_ctxt; } ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct tw_cl_ctlr_handle*) ;
 int FUNC_1 (struct tw_cl_ctlr_handle*,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (struct tw_cli_ctlr_context*,int) ;
 int FUNC_4 (int,struct tw_cl_ctlr_handle*,int ,char*) ;
 int FUNC_5 (struct tw_cli_ctlr_context*) ;
 int FUNC_6 (struct tw_cli_ctlr_context*) ;
 int FUNC_7 (struct tw_cli_ctlr_context*) ;
 int FUNC_8 () ;

TW_INT32
FUNC_9(struct tw_cl_ctlr_handle *VAR_11)
{
 struct tw_cli_ctlr_context *VAR_12 =
  (struct tw_cli_ctlr_context *)(VAR_11->cl_ctlr_ctxt);
 TW_UINT32 VAR_13;
 TW_INT32 VAR_14 = VAR_8;

 FUNC_4(10, VAR_11, FUNC_8(), "entered");


 if (VAR_12 == ((void*)0))
  goto out;




 if (VAR_12->reset_in_progress || !(VAR_12->active))
  goto out;


 VAR_13 = FUNC_0(VAR_11);
 if (FUNC_3(VAR_12, VAR_13))
  goto out;


 if (VAR_13 & VAR_5) {
  FUNC_4(6, VAR_11, FUNC_8(),
   "Host interrupt");
  FUNC_1(VAR_11,
   VAR_1);
 }
 if (VAR_13 & VAR_3) {
  FUNC_4(6, VAR_11, FUNC_8(),
   "Attention interrupt");
  VAR_14 |= VAR_10;
  FUNC_5(VAR_12);
  FUNC_1(VAR_11,
   VAR_0);
 }
 if (VAR_13 & VAR_4) {
  FUNC_4(6, VAR_11, FUNC_8(),
   "Command interrupt");
  VAR_14 |= VAR_10;
  FUNC_6(VAR_12);
  if ((FUNC_2(&(VAR_12->req_q_head[VAR_7]))) == VAR_9)
   FUNC_1(VAR_11,
    VAR_2);
 }
 if (VAR_13 & VAR_6) {
  FUNC_4(10, VAR_11, FUNC_8(),
   "Response interrupt");
  VAR_14 |= VAR_10;
  FUNC_7(VAR_12);
 }
out:
 return(VAR_14);
}
