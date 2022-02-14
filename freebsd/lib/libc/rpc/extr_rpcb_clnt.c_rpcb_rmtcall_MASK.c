
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* xdrproc_t ;
struct timeval {int dummy; } ;
struct TYPE_4__ {void* results_val; } ;
struct r_rpcb_rmtcallres {int * addr; void* xdr_res; TYPE_2__ results; } ;
struct TYPE_3__ {void* args_val; } ;
struct r_rpcb_rmtcallargs {void* xdr_args; TYPE_1__ args; int proc; scalar_t__ vers; int prog; } ;
struct netconfig {int dummy; } ;
struct netbuf {scalar_t__ len; scalar_t__ maxlen; struct netbuf* buf; } ;
typedef scalar_t__ rpcvers_t ;
typedef int rpcprog_t ;
typedef int rpcproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef void* caddr_t ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,void*,char*,void*,char*,struct timeval) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct netbuf*) ;
 int * FUNC_4 (char const*,struct netconfig const*,int *) ;
 int FUNC_5 (struct netbuf*,struct netbuf*,size_t) ;
 int VAR_10 ;
 struct netbuf* FUNC_6 (struct netconfig*,int *) ;
 int FUNC_7 (void*,char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

enum clnt_stat
FUNC_8(const struct netconfig *VAR_14, const char *VAR_15, rpcprog_t VAR_16,
    rpcvers_t VAR_17, rpcproc_t VAR_18, xdrproc_t VAR_19, caddr_t VAR_20,
    xdrproc_t VAR_21, caddr_t VAR_22, struct timeval VAR_23,
    const struct netbuf *VAR_24)
{
 CLIENT *VAR_25;
 enum clnt_stat VAR_26;
 struct r_rpcb_rmtcallargs VAR_27;
 struct r_rpcb_rmtcallres VAR_28;
 rpcvers_t VAR_29;

 VAR_26 = 0;
 VAR_25 = FUNC_4(VAR_15, VAR_14, ((void*)0));
 if (VAR_25 == ((void*)0)) {
  return (VAR_5);
 }

 FUNC_1(VAR_25, VAR_0, (char *)(void *)&VAR_10);
 VAR_27.prog = VAR_16;
 VAR_27.vers = VAR_17;
 VAR_27.proc = VAR_18;
 VAR_27.args.args_val = VAR_20;
 VAR_27.xdr_args = VAR_19;
 VAR_28.addr = ((void*)0);
 VAR_28.results.results_val = VAR_22;
 VAR_28.xdr_res = VAR_21;

 for (VAR_29 = VAR_4; VAR_29 >= VAR_3; VAR_29--) {
  FUNC_1(VAR_25, VAR_1, (char *)(void *)&VAR_29);
  VAR_26 = FUNC_0(VAR_25, (rpcproc_t)VAR_2,
      (xdrproc_t) VAR_11, (char *)(void *)&VAR_27,
      (xdrproc_t) VAR_12, (char *)(void *)&VAR_28, VAR_23);
  if ((VAR_26 == VAR_9) && (VAR_24 != ((void*)0))) {
   struct netbuf *VAR_30;

   VAR_30 = FUNC_6((struct netconfig *) VAR_14, VAR_28.addr);
   if (!VAR_30) {
    VAR_26 = VAR_6;

    ((struct netbuf *) VAR_24)->len = 0;
    goto error;
   }
   if (VAR_30->len > VAR_24->maxlen) {

    VAR_26 = VAR_5;
    FUNC_3(VAR_30->buf);
    FUNC_3(VAR_30);

    ((struct netbuf *) VAR_24)->len = 0;
    goto error;
   }
   FUNC_5(VAR_24->buf, VAR_30->buf, (size_t)VAR_30->len);

   ((struct netbuf *)VAR_24)->len = VAR_30->len;
   FUNC_3(VAR_30->buf);
   FUNC_3(VAR_30);
   break;
  } else if ((VAR_26 != VAR_8) &&
       (VAR_26 != VAR_7)) {
   goto error;
  }
 }
error:
 FUNC_2(VAR_25);
 if (VAR_28.addr)
  FUNC_7((xdrproc_t) VAR_13, (char *)(void *)&VAR_28.addr);
 return (VAR_26);
}
