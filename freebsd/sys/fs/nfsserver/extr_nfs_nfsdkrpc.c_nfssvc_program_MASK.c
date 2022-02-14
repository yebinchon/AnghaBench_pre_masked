
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct svc_req {scalar_t__ rq_vers; size_t rq_proc; scalar_t__ rq_reply_seq; int rq_xid; int rq_addr; TYPE_1__* rq_args; } ;
struct sockaddr_in {scalar_t__ sin_family; int sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct nfsrvcache {int dummy; } ;
struct nfsrv_descript {size_t nd_procnum; int nd_flag; int nd_repstat; TYPE_1__* nd_mreq; int * nd_cred; TYPE_1__* nd_mrep; struct sockaddr* nd_nam; int nd_nam2; TYPE_1__* nd_md; int nd_dpos; } ;
typedef int nd ;
struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_7__ {scalar_t__ m_len; } ;
typedef int SVCXPRT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 int FUNC_3 () ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_26 ;
 int FUNC_5 (int *) ;
 int VAR_27 ;
 char* FUNC_6 (int ,char*) ;
 char* FUNC_7 (char*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nfsrv_descript*,int ,int) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 scalar_t__* VAR_28 ;
 int FUNC_12 (TYPE_1__**,int ) ;
 scalar_t__ VAR_29 ;
 int FUNC_13 (struct nfsrv_descript*,int ,int *,struct nfsrvcache**) ;
 int VAR_30 ;
 int FUNC_14 (struct nfsrvcache*,int,scalar_t__) ;
 int FUNC_15 (int *,int *,int ,int *) ;
 int FUNC_16 (int *,int ,int *,int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct nfsrv_descript*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (char*,char*,scalar_t__) ;
 TYPE_2__* FUNC_21 (struct sockaddr_in*) ;
 int FUNC_22 (struct svc_req*) ;
 int FUNC_23 (struct svc_req*,int **,int*) ;
 struct sockaddr* FUNC_24 (struct svc_req*) ;
 int FUNC_25 (struct svc_req*,TYPE_1__*) ;
 int FUNC_26 (struct svc_req*,int) ;
 int FUNC_27 (struct svc_req*) ;
 int FUNC_28 (struct svc_req*) ;
 int FUNC_29 (struct svc_req*) ;
 int FUNC_30 (struct svc_req*) ;
 int FUNC_31 (int ) ;

__attribute__((used)) static void
FUNC_32(struct svc_req *VAR_31, SVCXPRT *VAR_32)
{
 struct nfsrv_descript VAR_33;
 struct nfsrvcache *VAR_34 = ((void*)0);
 int VAR_35, VAR_36;

 FUNC_10(&VAR_33, 0, sizeof(VAR_33));
 if (VAR_31->rq_vers == VAR_19) {
  if (VAR_31->rq_proc > VAR_15 ||
      VAR_28[VAR_31->rq_proc] == VAR_13) {
   FUNC_28(VAR_31);
   FUNC_22(VAR_31);
   goto out;
  }
  VAR_33.nd_procnum = VAR_28[VAR_31->rq_proc];
  VAR_33.nd_flag = VAR_9;
 } else if (VAR_31->rq_vers == VAR_20) {
  if (VAR_31->rq_proc >= VAR_18) {
   FUNC_28(VAR_31);
   FUNC_22(VAR_31);
   goto out;
  }
  VAR_33.nd_procnum = VAR_31->rq_proc;
  VAR_33.nd_flag = VAR_10;
 } else {
  if (VAR_31->rq_proc != VAR_14 &&
      VAR_31->rq_proc != VAR_16) {
   FUNC_28(VAR_31);
   FUNC_22(VAR_31);
   goto out;
  }
  VAR_33.nd_procnum = VAR_31->rq_proc;
  VAR_33.nd_flag = VAR_11;
 }






 VAR_33.nd_mrep = VAR_31->rq_args;
 VAR_31->rq_args = ((void*)0);
 FUNC_12(&VAR_33.nd_mrep, VAR_5);
 VAR_33.nd_md = VAR_33.nd_mrep;
 VAR_33.nd_dpos = FUNC_11(VAR_33.nd_md, VAR_26);
 VAR_33.nd_nam = FUNC_24(VAR_31);
 VAR_33.nd_nam2 = VAR_31->rq_addr;
 VAR_33.nd_mreq = ((void*)0);
 VAR_33.nd_cred = ((void*)0);

 if (VAR_29 != 0) {

  u_short VAR_37;
  struct sockaddr *VAR_38 = VAR_33.nd_nam;
  struct sockaddr_in *VAR_39;

  VAR_39 = (struct sockaddr_in *)VAR_38;




  VAR_37 = FUNC_19(VAR_39->sin_port);
  if (VAR_37 >= VAR_4 &&
      VAR_33.nd_procnum != VAR_14) {



   char VAR_40[VAR_3];
   FUNC_20("NFS request from unprivileged port (%s:%d)\n",







       FUNC_6(VAR_39->sin_addr, VAR_40), VAR_37);
   FUNC_30(VAR_31);
   FUNC_22(VAR_31);
   FUNC_8(VAR_33.nd_mrep);
   goto out;
  }
 }

 if (VAR_33.nd_procnum != VAR_14) {
  if (!FUNC_23(VAR_31, &VAR_33.nd_cred, &VAR_36)) {
   FUNC_30(VAR_31);
   FUNC_22(VAR_31);
   FUNC_8(VAR_33.nd_mrep);
   goto out;
  }


  if (VAR_36 == VAR_23) {
   VAR_33.nd_flag |= VAR_6;
  } else if (VAR_36 == VAR_24) {
   VAR_33.nd_flag |= (VAR_6 | VAR_7);
  } else if (VAR_36 == VAR_25) {
   VAR_33.nd_flag |= (VAR_6 | VAR_8);
  } else if (VAR_36 != VAR_1) {
   FUNC_30(VAR_31);
   FUNC_22(VAR_31);
   FUNC_8(VAR_33.nd_mrep);
   goto out;
  }
  FUNC_1();
  FUNC_16(&VAR_30, 0, ((void*)0), VAR_17,
      ((void*)0));
  FUNC_15(&VAR_30, ((void*)0), VAR_17,
      ((void*)0));
  FUNC_3();

  if ((VAR_33.nd_flag & VAR_11) != 0) {
   VAR_33.nd_repstat = FUNC_18(&VAR_33);
   if (VAR_33.nd_repstat != 0) {
    FUNC_1();
    FUNC_17(&VAR_30);
    FUNC_3();
    FUNC_30(VAR_31);
    FUNC_22(VAR_31);
    FUNC_8(VAR_33.nd_mrep);
    goto out;
   }
  }

  VAR_35 = FUNC_13(&VAR_33, VAR_31->rq_xid, VAR_32, &VAR_34);
  FUNC_1();
  FUNC_17(&VAR_30);
  FUNC_3();
 } else {
  FUNC_2(VAR_33.nd_mreq);
  VAR_33.nd_mreq->m_len = 0;
  VAR_35 = VAR_22;
 }
 if (VAR_33.nd_mrep != ((void*)0))
  FUNC_8(VAR_33.nd_mrep);

 if (VAR_33.nd_cred != ((void*)0))
  FUNC_5(VAR_33.nd_cred);

 if (VAR_35 == VAR_21) {
  if (VAR_33.nd_mreq != ((void*)0))
   FUNC_8(VAR_33.nd_mreq);
  FUNC_22(VAR_31);
  goto out;
 }

 if (VAR_33.nd_mreq == ((void*)0)) {
  FUNC_27(VAR_31);
  FUNC_22(VAR_31);
  goto out;
 }

 if (VAR_33.nd_repstat & VAR_12) {
  FUNC_26(VAR_31, VAR_33.nd_repstat & ~VAR_12);
  if (VAR_33.nd_mreq != ((void*)0))
   FUNC_8(VAR_33.nd_mreq);
 } else if (!FUNC_25(VAR_31, VAR_33.nd_mreq)) {
  FUNC_29(VAR_31);
 }
 if (VAR_34 != ((void*)0)) {
  FUNC_14(VAR_34, (VAR_31->rq_reply_seq != 0 ||
      FUNC_4(VAR_32, ((void*)0))), VAR_31->rq_reply_seq);
 }
 FUNC_22(VAR_31);

out:
 FUNC_31(VAR_27);
 FUNC_0(0);
}
