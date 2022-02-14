
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int dummy; } ;
struct tw_cli_req_context {int req_handle; } ;
struct tw_cli_ctlr_context {void* reset_needed; void* reset_in_progress; int * req_q_head; scalar_t__ max_simult_reqs; void* get_more_aens; void* internal_req_busy; } ;
struct tw_cl_ctlr_handle {struct twa_softc* osl_ctlr_ctxt; scalar_t__ cl_ctlr_ctxt; } ;
typedef int TW_UINT16 ;
typedef scalar_t__ TW_INT32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tw_cl_ctlr_handle*,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 struct tw_cli_req_context* VAR_6 ;
 struct tw_cli_req_context* FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (struct tw_cl_ctlr_handle*,void*,int ,int,int,int ,char*,char*,...) ;
 int FUNC_3 (int,struct tw_cl_ctlr_handle*,int ,char*) ;
 int FUNC_4 (struct tw_cli_ctlr_context*) ;
 int FUNC_5 (struct tw_cli_ctlr_context*) ;
 int FUNC_6 (struct tw_cli_ctlr_context*) ;
 int FUNC_7 (struct tw_cli_ctlr_context*) ;
 scalar_t__ FUNC_8 (struct tw_cli_ctlr_context*,int ,int ,int ,int ,int ,int ,struct tw_cli_req_context*,struct tw_cli_req_context*,struct tw_cli_req_context*,struct tw_cli_req_context*,struct tw_cli_req_context*) ;
 int FUNC_9 (struct tw_cli_req_context*,size_t) ;
 struct tw_cli_req_context* FUNC_10 (struct tw_cli_ctlr_context*,int ) ;
 scalar_t__ FUNC_11 (struct tw_cli_ctlr_context*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct tw_cl_ctlr_handle*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct twa_softc*) ;
 int FUNC_16 (struct twa_softc*) ;

TW_INT32
FUNC_17(struct tw_cl_ctlr_handle *VAR_10)
{
 struct tw_cli_ctlr_context *VAR_11 =
  (struct tw_cli_ctlr_context *)(VAR_10->cl_ctlr_ctxt);
 struct twa_softc *VAR_12 = VAR_10->osl_ctlr_ctxt;
 struct tw_cli_req_context *VAR_13;
 TW_INT32 VAR_14 = 1;
 TW_INT32 VAR_15 = 0;

 FUNC_3(2, VAR_10, FUNC_12(), "entered");

 VAR_11->reset_in_progress = VAR_9;
 FUNC_16(VAR_12);
 FUNC_5(VAR_11);
 FUNC_4(VAR_11);
 FUNC_6(VAR_11);
 VAR_11->internal_req_busy = VAR_4;
 VAR_11->get_more_aens = VAR_4;


 while (VAR_14 <= VAR_1) {
  if ((VAR_15 = FUNC_11(VAR_11))) {
   FUNC_2(VAR_10, VAR_4,
    VAR_5,
    0x1105, 0x1, VAR_7,
    "Controller reset failed",
    "error = %d; attempt %d", VAR_15, VAR_14++);
   VAR_14++;
   continue;
  }


  if ((VAR_15 = FUNC_8(VAR_11,
    (TW_UINT16)(VAR_11->max_simult_reqs),
    0, 0, 0, 0, 0, VAR_6, VAR_6, VAR_6,
    VAR_6, VAR_6))) {
   FUNC_2(VAR_10, VAR_4,
    VAR_5,
    0x1106, 0x1, VAR_7,
    "Can't initialize connection after reset",
    "error = %d", VAR_15);
   VAR_14++;
   continue;
  }







  break;
 }


 while ((VAR_13 = FUNC_10(VAR_11, VAR_3)) != VAR_6) {
  FUNC_14(VAR_13->req_handle);
  FUNC_9(VAR_13, VAR_2);
 }

 FUNC_15(VAR_12);
 FUNC_7(VAR_11);
 if ((FUNC_1(&(VAR_11->req_q_head[VAR_2]))) != VAR_6)
  FUNC_0(VAR_10,
   VAR_0);
 VAR_11->reset_in_progress = VAR_4;
 VAR_11->reset_needed = VAR_4;


 FUNC_13(VAR_10);

 return(VAR_15);
}
