
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_12__ ;


typedef scalar_t__ (* xdrproc_t ) (TYPE_5__*,void*) ;
typedef int uint32_t ;
typedef scalar_t__ u_int32_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_33__ {int * oa_base; } ;
struct TYPE_38__ {scalar_t__ (* proc ) (TYPE_5__*,void*) ;int * where; } ;
struct TYPE_39__ {TYPE_12__ ar_verf; TYPE_3__ ar_results; } ;
struct rpc_msg {scalar_t__ rm_xid; TYPE_4__ acpted_rply; } ;
struct TYPE_34__ {int re_status; int re_why; } ;
struct TYPE_37__ {scalar_t__ ct_mcalli; int * ct_mcallc; } ;
struct TYPE_40__ {int x_op; } ;
struct ct_data {size_t ct_fd; size_t ct_mpos; TYPE_18__ ct_error; TYPE_2__ ct_u; struct timeval ct_wait; int ct_waitset; TYPE_5__ ct_xdrs; } ;
typedef int sigset_t ;
typedef int rpcproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef scalar_t__ bool_t ;
typedef TYPE_5__ XDR ;
struct TYPE_41__ {TYPE_20__* cl_auth; scalar_t__ cl_private; } ;
struct TYPE_35__ {scalar_t__ oa_flavor; } ;
struct TYPE_36__ {TYPE_1__ ah_cred; } ;
typedef TYPE_7__ CLIENT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_20__*,TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_20__*,struct rpc_msg*) ;
 int FUNC_2 (TYPE_20__*,TYPE_12__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_5__*,int *,size_t) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_5 (TYPE_20__*,TYPE_5__*,scalar_t__ (*) (TYPE_5__*,void*),void*) ;
 int FUNC_6 (TYPE_20__*,int *,int,TYPE_5__*,scalar_t__ (*) (TYPE_5__*,void*),void*) ;
 TYPE_12__ VAR_15 ;
 int FUNC_7 (struct rpc_msg*,TYPE_18__*) ;
 int FUNC_8 (int ) ;
 int VAR_16 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (size_t,int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (TYPE_5__*,void*) ;
 scalar_t__ FUNC_17 (TYPE_5__*,void*) ;
 int FUNC_18 (int ,int *,int *) ;
 scalar_t__ FUNC_19 (struct timeval*) ;
 int * VAR_17 ;
 int* VAR_18 ;
 int FUNC_20 (TYPE_5__*,TYPE_12__*) ;
 int FUNC_21 (TYPE_5__*,struct rpc_msg*) ;
 scalar_t__ VAR_19 ;
 int FUNC_22 (TYPE_5__*,scalar_t__) ;
 int FUNC_23 (TYPE_5__*) ;

__attribute__((used)) static enum clnt_stat
FUNC_24(CLIENT *VAR_20, rpcproc_t VAR_21, xdrproc_t VAR_22, void *VAR_23,
    xdrproc_t VAR_24, void *VAR_25, struct timeval VAR_26)
{
 struct ct_data *VAR_27 = (struct ct_data *) VAR_20->cl_private;
 XDR *VAR_28 = &(VAR_27->ct_xdrs);
 struct rpc_msg VAR_29;
 u_int32_t VAR_30;
 u_int32_t *VAR_31 = &VAR_27->ct_u.ct_mcalli;
 bool_t VAR_32;
 int VAR_33 = 2;
 sigset_t VAR_34, VAR_35;
 int VAR_36;
 bool_t VAR_37;

 FUNC_8(VAR_20 != ((void*)0));

 FUNC_15(&VAR_35);
 FUNC_18(VAR_9, &VAR_35, &VAR_34);
 FUNC_11(&VAR_16);
 while (VAR_18[VAR_27->ct_fd])
  FUNC_9(&VAR_17[VAR_27->ct_fd], &VAR_16);
 if (VAR_14)
                VAR_36 = 1;
        else
                VAR_36 = 0;
 VAR_18[VAR_27->ct_fd] = VAR_36;
 FUNC_12(&VAR_16);
 if (!VAR_27->ct_waitset) {

  if (FUNC_19(&VAR_26) == VAR_1)
   VAR_27->ct_wait = VAR_26;
 }

 VAR_32 =
     (VAR_24 == ((void*)0) && VAR_26.tv_sec == 0
     && VAR_26.tv_usec == 0) ? VAR_1 : VAR_10;

call_again:
 VAR_28->x_op = VAR_12;
 VAR_27->ct_error.re_status = VAR_7;
 VAR_30 = FUNC_13(--(*VAR_31));

 if (VAR_20->cl_auth->ah_cred.oa_flavor != VAR_2) {
  if ((! FUNC_3(VAR_28, VAR_27->ct_u.ct_mcallc, VAR_27->ct_mpos)) ||
      (! FUNC_4(VAR_28, &VAR_21)) ||
      (! FUNC_0(VAR_20->cl_auth, VAR_28)) ||
      (! (*VAR_22)(VAR_28, VAR_23))) {
   if (VAR_27->ct_error.re_status == VAR_7)
    VAR_27->ct_error.re_status = VAR_5;
   (void)FUNC_22(VAR_28, VAR_10);
   FUNC_14(VAR_27->ct_fd, VAR_34);
   return (VAR_27->ct_error.re_status);
  }
 } else {
  *(uint32_t *) &VAR_27->ct_u.ct_mcallc[VAR_27->ct_mpos] = FUNC_10(VAR_21);
  if (! FUNC_6(VAR_20->cl_auth, VAR_27->ct_u.ct_mcallc,
   VAR_27->ct_mpos + sizeof(uint32_t),
   VAR_28, VAR_22, VAR_23)) {
   if (VAR_27->ct_error.re_status == VAR_7)
    VAR_27->ct_error.re_status = VAR_5;
   (void)FUNC_22(VAR_28, VAR_10);
   FUNC_14(VAR_27->ct_fd, VAR_34);
   return (VAR_27->ct_error.re_status);
  }
 }
 if (! FUNC_22(VAR_28, VAR_32)) {
  FUNC_14(VAR_27->ct_fd, VAR_34);
  return (VAR_27->ct_error.re_status = VAR_6);
 }
 if (! VAR_32) {
  FUNC_14(VAR_27->ct_fd, VAR_34);
  return (VAR_7);
 }



 if (VAR_26.tv_sec == 0 && VAR_26.tv_usec == 0) {
  FUNC_14(VAR_27->ct_fd, VAR_34);
  return(VAR_27->ct_error.re_status = VAR_8);
 }





 VAR_28->x_op = VAR_11;
 while (VAR_10) {
  VAR_29.acpted_rply.ar_verf = VAR_15;
  VAR_29.acpted_rply.ar_results.where = ((void*)0);
  VAR_29.acpted_rply.ar_results.proc = (xdrproc_t)VAR_19;
  if (! FUNC_23(VAR_28)) {
   FUNC_14(VAR_27->ct_fd, VAR_34);
   return (VAR_27->ct_error.re_status);
  }

  if (! FUNC_21(VAR_28, &VAR_29)) {
   if (VAR_27->ct_error.re_status == VAR_7)
    continue;
   FUNC_14(VAR_27->ct_fd, VAR_34);
   return (VAR_27->ct_error.re_status);
  }
  if (VAR_29.rm_xid == VAR_30)
   break;
 }




 FUNC_7(&VAR_29, &(VAR_27->ct_error));
 if (VAR_27->ct_error.re_status == VAR_7) {
  if (! FUNC_2(VAR_20->cl_auth,
      &VAR_29.acpted_rply.ar_verf)) {
   VAR_27->ct_error.re_status = VAR_3;
   VAR_27->ct_error.re_why = VAR_0;
  } else {
   if (VAR_20->cl_auth->ah_cred.oa_flavor != VAR_2) {
    VAR_37 = (*VAR_24)(VAR_28, VAR_25);
   } else {
    VAR_37 = FUNC_5(VAR_20->cl_auth,
        VAR_28, VAR_24, VAR_25);
   }
   if (! VAR_37) {
    if (VAR_27->ct_error.re_status == VAR_7)
     VAR_27->ct_error.re_status =
      VAR_4;
   }
  }

  if (VAR_29.acpted_rply.ar_verf.oa_base != ((void*)0)) {
   VAR_28->x_op = VAR_13;
   (void)FUNC_20(VAR_28,
       &(VAR_29.acpted_rply.ar_verf));
  }
 }
 else {

  if (VAR_33-- && FUNC_1(VAR_20->cl_auth, &VAR_29))
   goto call_again;
 }
 FUNC_14(VAR_27->ct_fd, VAR_34);
 return (VAR_27->ct_error.re_status);
}
