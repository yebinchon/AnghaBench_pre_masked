
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* oa_base; } ;
struct svc_req {char* rq_clntcred; scalar_t__ rq_prog; scalar_t__ rq_vers; TYPE_2__ rq_cred; int rq_proc; int * rq_xprt; } ;
struct svc_callout {scalar_t__ sc_prog; scalar_t__ sc_vers; int (* sc_dispatch ) (struct svc_req*,int *) ;struct svc_callout* sc_next; } ;
struct TYPE_4__ {char* oa_base; } ;
struct TYPE_6__ {scalar_t__ cb_prog; scalar_t__ cb_vers; TYPE_2__ cb_cred; int cb_proc; TYPE_1__ cb_verf; } ;
struct rpc_msg {TYPE_3__ rm_call; } ;
typedef scalar_t__ rpcvers_t ;
typedef enum xprt_stat { ____Placeholder_xprt_stat } xprt_stat ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct rpc_msg*) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int ** VAR_8 ;
 int FUNC_3 (struct svc_req*,struct rpc_msg*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct svc_req*,int *) ;
 int VAR_9 ;
 struct svc_callout* VAR_10 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__) ;

void
FUNC_10(int VAR_11)
{
 SVCXPRT *VAR_12;
 struct svc_req VAR_13;
 struct rpc_msg VAR_14;
 int VAR_15;
 rpcvers_t VAR_16;
 rpcvers_t VAR_17;
 enum xprt_stat VAR_18;
 char VAR_19[2*VAR_2 + VAR_4];

 VAR_14.rm_call.cb_cred.oa_base = VAR_19;
 VAR_14.rm_call.cb_verf.oa_base = &(VAR_19[VAR_2]);
 VAR_13.rq_clntcred = &(VAR_19[2*VAR_2]);

 FUNC_4(&VAR_9);
 VAR_12 = VAR_8[VAR_11];
 FUNC_5(&VAR_9);
 if (VAR_12 == ((void*)0))

  return;

 do {
  if (FUNC_1(VAR_12, &VAR_14)) {


   struct svc_callout *VAR_20;
   enum auth_stat VAR_21;

   VAR_13.rq_xprt = VAR_12;
   VAR_13.rq_prog = VAR_14.rm_call.cb_prog;
   VAR_13.rq_vers = VAR_14.rm_call.cb_vers;
   VAR_13.rq_proc = VAR_14.rm_call.cb_proc;
   VAR_13.rq_cred = VAR_14.rm_call.cb_cred;

   if ((VAR_21 = FUNC_3(&VAR_13, &VAR_14)) != VAR_0) {







    if (VAR_21 != VAR_3)
     FUNC_7(VAR_12, VAR_21);
    goto call_done;
   }

   VAR_15 = VAR_1;
   VAR_16 = (rpcvers_t) -1L;
   VAR_17 = (rpcvers_t) 0L;
   for (VAR_20 = VAR_10; VAR_20 != ((void*)0); VAR_20 = VAR_20->sc_next) {
    if (VAR_20->sc_prog == VAR_13.rq_prog) {
     if (VAR_20->sc_vers == VAR_13.rq_vers) {
      (*VAR_20->sc_dispatch)(&VAR_13, VAR_12);
      goto call_done;
     }
     VAR_15 = VAR_5;
     if (VAR_20->sc_vers < VAR_16)
      VAR_16 = VAR_20->sc_vers;
     if (VAR_20->sc_vers > VAR_17)
      VAR_17 = VAR_20->sc_vers;
    }
   }




   if (VAR_15)
    FUNC_9(VAR_12, VAR_16, VAR_17);
   else
    FUNC_8(VAR_12);

  }





  FUNC_4(&VAR_9);
  if (VAR_12 != VAR_8[VAR_11]) {
   FUNC_5(&VAR_9);
   break;
  }
  FUNC_5(&VAR_9);
call_done:
  if ((VAR_18 = FUNC_2(VAR_12)) == VAR_6){
   FUNC_0(VAR_12);
   break;
  }
 } while (VAR_18 == VAR_7);
}
