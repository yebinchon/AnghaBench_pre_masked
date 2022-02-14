
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int (* xdrproc_t ) (TYPE_5__*,void*) ;
struct timeval {int dummy; } ;
struct TYPE_22__ {int * oa_base; } ;
struct TYPE_25__ {int (* proc ) (TYPE_5__*,void*) ;void* where; } ;
struct TYPE_26__ {TYPE_10__ ar_verf; TYPE_3__ ar_results; } ;
struct rpc_msg {TYPE_4__ acpted_rply; } ;
struct rpc_err {int re_status; } ;
struct TYPE_23__ {int rm_xid; } ;
struct TYPE_24__ {int mashl_callmsg; TYPE_1__ mashl_rpcmsg; } ;
struct TYPE_27__ {int x_op; } ;
struct clntraw_private {int mcnt; TYPE_2__ u; TYPE_5__ xdr_stream; } ;
typedef int rpcproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef TYPE_5__ XDR ;
struct TYPE_28__ {int cl_auth; } ;
typedef TYPE_7__ CLIENT ;


 int FUNC_0 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_1 (int ,struct rpc_msg*) ;
 int FUNC_2 (int ,TYPE_10__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 TYPE_10__ VAR_9 ;
 int FUNC_7 (struct rpc_msg*,struct rpc_err*) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 struct clntraw_private* VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_5__*,void*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_5__*,TYPE_10__*) ;
 int FUNC_14 (TYPE_5__*,struct rpc_msg*) ;

__attribute__((used)) static enum clnt_stat
FUNC_15(CLIENT *VAR_12, rpcproc_t VAR_13, xdrproc_t VAR_14, void *VAR_15,
    xdrproc_t VAR_16, void *VAR_17, struct timeval VAR_18)
{
 struct clntraw_private *VAR_19 = VAR_11;
 XDR *VAR_20 = &VAR_19->xdr_stream;
 struct rpc_msg VAR_21;
 enum clnt_stat VAR_22;
 struct rpc_err VAR_23;

 FUNC_8(VAR_12 != ((void*)0));

 FUNC_9(&VAR_10);
 if (VAR_19 == ((void*)0)) {
  FUNC_10(&VAR_10);
  return (VAR_4);
 }
 FUNC_10(&VAR_10);

call_again:



 VAR_20->x_op = VAR_7;
 FUNC_6(VAR_20, 0);
 VAR_19->u.mashl_rpcmsg.rm_xid ++ ;
 if ((! FUNC_4(VAR_20, VAR_19->u.mashl_callmsg, VAR_19->mcnt)) ||
     (! FUNC_5(VAR_20, &VAR_13)) ||
     (! FUNC_0(VAR_12->cl_auth, VAR_20)) ||
     (! (*VAR_14)(VAR_20, VAR_15))) {
  return (VAR_3);
 }
 (void)FUNC_3(VAR_20);





 FUNC_12(VAR_0);




 VAR_20->x_op = VAR_6;
 FUNC_6(VAR_20, 0);
 VAR_21.acpted_rply.ar_verf = VAR_9;
 VAR_21.acpted_rply.ar_results.where = VAR_17;
 VAR_21.acpted_rply.ar_results.proc = VAR_16;
 if (! FUNC_14(VAR_20, &VAR_21)) {
  int VAR_24 = VAR_20->x_op;
  VAR_20->x_op = VAR_8;
  FUNC_14(VAR_20, &VAR_21);
  VAR_20->x_op = VAR_24;
  return (VAR_2);
 }
 FUNC_7(&VAR_21, &VAR_23);
 VAR_22 = VAR_23.re_status;

 if (VAR_22 == VAR_5) {
  if (! FUNC_2(VAR_12->cl_auth, &VAR_21.acpted_rply.ar_verf)) {
   VAR_22 = VAR_1;
  }
 }
 else {
  if (FUNC_1(VAR_12->cl_auth, &VAR_21))
   goto call_again;
 }

 if (VAR_22 == VAR_5) {
  if (! FUNC_2(VAR_12->cl_auth, &VAR_21.acpted_rply.ar_verf)) {
   VAR_22 = VAR_1;
  }
  if (VAR_21.acpted_rply.ar_verf.oa_base != ((void*)0)) {
   VAR_20->x_op = VAR_8;
   (void)FUNC_13(VAR_20, &(VAR_21.acpted_rply.ar_verf));
  }
 }

 return (VAR_22);
}
