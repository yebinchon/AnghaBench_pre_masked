
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct svc_req {scalar_t__ rq_proc; int rq_xid; int rq_addr; TYPE_1__* rq_args; } ;
struct nfsrv_descript {scalar_t__ nd_procnum; int nd_flag; int nd_repstat; TYPE_1__* nd_mreq; int * nd_cred; TYPE_1__* nd_mrep; int nd_nam2; int nd_nam; TYPE_1__* nd_md; int nd_dpos; } ;
typedef int nd ;
struct TYPE_6__ {scalar_t__ m_len; } ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfsrv_descript*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__**,int ) ;
 int FUNC_8 (struct nfsrv_descript*,int ) ;
 int FUNC_9 (struct svc_req*) ;
 int FUNC_10 (struct svc_req*,int **,int*) ;
 int FUNC_11 (struct svc_req*) ;
 int FUNC_12 (struct svc_req*,TYPE_1__*) ;
 int FUNC_13 (struct svc_req*,int) ;
 int FUNC_14 (struct svc_req*) ;
 int FUNC_15 (struct svc_req*) ;
 int FUNC_16 (struct svc_req*) ;
 int FUNC_17 (struct svc_req*) ;

__attribute__((used)) static void
FUNC_18(struct svc_req *VAR_9, SVCXPRT *VAR_10)
{
 struct nfsrv_descript VAR_11;
 int VAR_12, VAR_13;

 FUNC_5(&VAR_11, 0, sizeof(VAR_11));
 if (VAR_9->rq_proc != VAR_4 &&
     VAR_9->rq_proc != VAR_5) {
  FUNC_15(VAR_9);
  FUNC_9(VAR_9);
  return;
 }
 VAR_11.nd_procnum = VAR_9->rq_proc;
 VAR_11.nd_flag = (VAR_1 | VAR_2);






 VAR_11.nd_mrep = VAR_9->rq_args;
 VAR_9->rq_args = ((void*)0);
 FUNC_7(&VAR_11.nd_mrep, VAR_0);
 VAR_11.nd_md = VAR_11.nd_mrep;
 VAR_11.nd_dpos = FUNC_6(VAR_11.nd_md, VAR_8);
 VAR_11.nd_nam = FUNC_11(VAR_9);
 VAR_11.nd_nam2 = VAR_9->rq_addr;
 VAR_11.nd_mreq = ((void*)0);
 VAR_11.nd_cred = ((void*)0);

 FUNC_0(1, "cbproc=%d\n",VAR_11.nd_procnum);
 if (VAR_11.nd_procnum != VAR_4) {
  if (!FUNC_10(VAR_9, &VAR_11.nd_cred, &VAR_13)) {
   FUNC_17(VAR_9);
   FUNC_9(VAR_9);
   FUNC_3(VAR_11.nd_mrep);
   return;
  }







  VAR_12 = FUNC_8(&VAR_11, VAR_9->rq_xid);
 } else {
  FUNC_1(VAR_11.nd_mreq);
  VAR_11.nd_mreq->m_len = 0;
  VAR_12 = VAR_7;
 }
 if (VAR_11.nd_mrep != ((void*)0))
  FUNC_3(VAR_11.nd_mrep);

 if (VAR_11.nd_cred != ((void*)0))
  FUNC_2(VAR_11.nd_cred);

 if (VAR_12 == VAR_6) {
  if (VAR_11.nd_mreq != ((void*)0))
   FUNC_3(VAR_11.nd_mreq);
  FUNC_9(VAR_9);
  return;
 }

 if (VAR_11.nd_mreq == ((void*)0)) {
  FUNC_14(VAR_9);
  FUNC_9(VAR_9);
  return;
 }

 if (VAR_11.nd_repstat & VAR_3) {
  FUNC_13(VAR_9, VAR_11.nd_repstat & ~VAR_3);
  if (VAR_11.nd_mreq != ((void*)0))
   FUNC_3(VAR_11.nd_mreq);
 } else if (!FUNC_12(VAR_9, VAR_11.nd_mreq))
  FUNC_16(VAR_9);
 else
  FUNC_0(1, "cbrep sent\n");
 FUNC_9(VAR_9);
}
