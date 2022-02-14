
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ xdrproc_t ;
struct svc_req {scalar_t__ rq_proc; scalar_t__ rq_prog; scalar_t__ rq_vers; } ;
struct proglst {scalar_t__ p_prognum; scalar_t__ p_procnum; scalar_t__ p_versnum; char* p_xdrbuf; char* (* p_progname ) (char*) ;scalar_t__ p_outproc; int p_inproc; scalar_t__ p_recvsz; int p_netid; struct proglst* p_nxt; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef scalar_t__ rpcproc_t ;
struct TYPE_7__ {int xp_netid; } ;
typedef TYPE_1__ SVCXPRT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct proglst* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_10(struct svc_req *VAR_5, SVCXPRT *VAR_6)
{
 rpcprog_t VAR_7;
 rpcvers_t VAR_8;
 rpcproc_t VAR_9;
 char *VAR_10;
 char *VAR_11;
 struct proglst *VAR_12;




 if (VAR_5->rq_proc == VAR_1) {
  if (FUNC_7(VAR_6, (xdrproc_t) VAR_4, ((void*)0)) ==
      VAR_0) {
   FUNC_9("svc_sendreply failed");
  }
  return;
 }
 VAR_7 = VAR_5->rq_prog;
 VAR_8 = VAR_5->rq_vers;
 VAR_9 = VAR_5->rq_proc;
 FUNC_1(&VAR_3);
 for (VAR_12 = VAR_2; VAR_12; VAR_12 = VAR_12->p_nxt)
  if (VAR_12->p_prognum == VAR_7 && VAR_12->p_procnum == VAR_9 &&
   VAR_12->p_versnum == VAR_8 &&
   (FUNC_3(VAR_12->p_netid, VAR_6->xp_netid) == 0)) {

   VAR_11 = VAR_12->p_xdrbuf;

   (void) FUNC_0(VAR_11, 0, (size_t)VAR_12->p_recvsz);





   if (!FUNC_6(VAR_6, VAR_12->p_inproc, VAR_11)) {
    FUNC_8(VAR_6);
    FUNC_2(&VAR_3);
    return;
   }
   VAR_10 = (*(VAR_12->p_progname))(VAR_11);
   if (VAR_10 == ((void*)0) &&
    VAR_12->p_outproc != (xdrproc_t) VAR_4){

    FUNC_2(&VAR_3);
    return;
   }
   if (!FUNC_7(VAR_6, VAR_12->p_outproc, VAR_10)) {
    FUNC_9(
   "rpc: rpc_reg trouble replying to prog %u vers %u",
    (unsigned)VAR_7, (unsigned)VAR_8);
    FUNC_2(&VAR_3);
    return;
   }

   (void)FUNC_5(VAR_6, VAR_12->p_inproc, VAR_11);
   FUNC_2(&VAR_3);
   return;
  }
 FUNC_2(&VAR_3);

 FUNC_9("rpc: rpc_reg: never registered prog %u vers %u",
  (unsigned)VAR_7, (unsigned)VAR_8);
 return;
}
