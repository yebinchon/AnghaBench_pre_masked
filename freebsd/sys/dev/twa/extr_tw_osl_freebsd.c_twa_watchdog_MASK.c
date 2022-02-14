
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int bus_dev; int ctlr_handle; int * watchdog_callout; int watchdog_index; struct tw_osli_req_context* req_ctx_buf; } ;
struct tw_osli_req_context {scalar_t__ state; scalar_t__ deadline; } ;
struct tw_cl_ctlr_handle {struct twa_softc* osl_ctlr_ctxt; } ;
typedef int TW_VOID ;
typedef scalar_t__ TW_UINT64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int (*) (int *),int *) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (struct tw_cl_ctlr_handle*) ;
 int FUNC_3 (struct tw_cl_ctlr_handle*) ;
 int FUNC_4 (struct tw_cl_ctlr_handle*) ;
 int FUNC_5 (struct tw_cl_ctlr_handle*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static TW_VOID
FUNC_7(TW_VOID *VAR_3)
{
 struct tw_cl_ctlr_handle *VAR_4 =
  (struct tw_cl_ctlr_handle *)VAR_3;
 struct twa_softc *VAR_5 = VAR_4->osl_ctlr_ctxt;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 1234;
 TW_UINT64 VAR_10;
 struct tw_osli_req_context *VAR_11;



 VAR_10 = (TW_UINT64) (FUNC_6());

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_11 = &(VAR_5->req_ctx_buf[VAR_6]);

  if ((VAR_11->state == VAR_1) &&
   (VAR_11->deadline) &&
   (VAR_11->deadline < VAR_10)) {
   FUNC_5(VAR_4);



   FUNC_1((VAR_5)->bus_dev, "Request %d timed out!\n", VAR_6);

   break;
  }
 }


 VAR_7 = FUNC_3(VAR_4);

 VAR_6 = (int) ((VAR_5->watchdog_index++) & 1);

 VAR_8 = FUNC_2(VAR_4);

 if (VAR_7) {



  VAR_9 =
   FUNC_0(&(VAR_5->watchdog_callout[VAR_6]), 70*VAR_2, FUNC_7, &VAR_5->ctlr_handle);
  FUNC_4(VAR_4);



 } else if (VAR_8) {
  VAR_9 =
   FUNC_0(&(VAR_5->watchdog_callout[VAR_6]), 5*VAR_2, FUNC_7, &VAR_5->ctlr_handle);
 }






}
