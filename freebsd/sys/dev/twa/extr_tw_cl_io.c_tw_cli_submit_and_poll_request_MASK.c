
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {int error_code; scalar_t__ state; scalar_t__ data; struct tw_cli_ctlr_context* ctlr; } ;
struct tw_cli_ctlr_context {int internal_req_busy; int ctlr_handle; int * req_q_head; } ;
typedef scalar_t__ TW_UINT32 ;
typedef scalar_t__ TW_TIME ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int ,int,int,int ,char*,char*,...) ;
 int FUNC_3 (int,int ,int ,char*) ;
 int FUNC_4 (struct tw_cli_ctlr_context*) ;
 int FUNC_5 (struct tw_cli_req_context*,int ) ;
 int FUNC_6 (struct tw_cli_req_context*,size_t) ;
 int FUNC_7 (struct tw_cli_req_context*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;

TW_INT32
FUNC_10(struct tw_cli_req_context *VAR_11,
 TW_UINT32 VAR_12)
{
 struct tw_cli_ctlr_context *VAR_13 = VAR_11->ctlr;
 TW_TIME VAR_14;
 TW_INT32 VAR_15;

 FUNC_3(4, VAR_13->ctlr_handle, FUNC_8(), "entered");





 if ((VAR_15 = FUNC_7(VAR_11))) {
  FUNC_2(VAR_13->ctlr_handle, VAR_6,
   VAR_7,
   0x1103, 0x1, VAR_9,
   "Failed to start internal request",
   "error = %d", VAR_15);
  return(VAR_15);
 }





 VAR_14 = FUNC_9() + VAR_12;
 do {
  if ((VAR_15 = VAR_11->error_code))





   return(VAR_15);


  FUNC_4(VAR_13);

  if ((VAR_11->state != VAR_3) &&
   (VAR_11->state != VAR_5))
   return(VAR_11->state != VAR_4);
 } while (FUNC_9() <= VAR_14);


 FUNC_2(VAR_13->ctlr_handle, VAR_6,
  VAR_7,
  0x1104, 0x1, VAR_9,
  "Internal request timed out",
  "request = %p", VAR_11);
 if (VAR_11->state == VAR_5) {
  FUNC_3(3, VAR_13->ctlr_handle, FUNC_8(),
   "Removing request from pending queue");






  FUNC_6(VAR_11, VAR_2);
  if ((FUNC_1(&(VAR_13->req_q_head[VAR_2]))) == VAR_8)
   FUNC_0(VAR_13->ctlr_handle,
    VAR_0);
  if (VAR_11->data)
   VAR_13->internal_req_busy = VAR_6;
  FUNC_5(VAR_11, VAR_1);
 }

 return(VAR_10);
}
