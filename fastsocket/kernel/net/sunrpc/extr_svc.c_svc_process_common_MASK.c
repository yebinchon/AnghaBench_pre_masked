
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct svc_version {int vs_nproc; int (* vs_dispatch ) (struct svc_rqst*,scalar_t__*) ;struct svc_procedure* vs_proc; } ;
struct svc_serv {TYPE_2__* sv_stats; struct svc_program* sv_program; } ;
struct svc_rqst {int rq_splice_ok; int rq_usedeferral; int rq_dropme; int rq_prog; int rq_vers; int rq_proc; int rq_resp; int rq_argp; struct svc_procedure* rq_procinfo; TYPE_3__* rq_xprt; int rq_xid; struct svc_serv* rq_server; } ;
struct svc_program {int pg_prog; int (* pg_authenticate ) (struct svc_rqst*) ;int pg_nvers; int pg_lovers; int pg_hivers; int pg_name; struct svc_version** pg_vers; struct svc_program* pg_next; } ;
struct svc_procedure {scalar_t__ (* pc_func ) (struct svc_rqst*,int ,int ) ;int pc_xdrressize; int (* pc_encode ) (struct svc_rqst*,void*,int ) ;int (* pc_release ) (struct svc_rqst*,int *,int ) ;int (* pc_decode ) (struct svc_rqst*,void*,int ) ;int pc_ressize; int pc_argsize; int pc_count; } ;
struct kvec {int iov_len; void* iov_base; } ;
typedef int (* kxdrproc_t ) (struct svc_rqst*,void*,int ) ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int xpt_flags; TYPE_1__* xpt_ops; } ;
struct TYPE_5__ {int rpcbadfmt; int rpcbadauth; int rpccnt; } ;
struct TYPE_4__ {int (* xpo_prep_reply_hdr ) (struct svc_rqst*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct svc_rqst*) ;
 int FUNC_4 (struct svc_rqst*) ;
 scalar_t__ FUNC_5 (struct svc_rqst*,int ,int ) ;
 int FUNC_6 (struct svc_rqst*,int *,int ) ;
 int FUNC_7 (struct svc_rqst*,scalar_t__*) ;
 int FUNC_8 (struct svc_rqst*,int *,int ) ;
 int FUNC_9 (struct svc_rqst*,int *,int ) ;
 int FUNC_10 (struct svc_rqst*,scalar_t__*) ;
 scalar_t__ FUNC_11 (struct svc_rqst*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct kvec*) ;
 int FUNC_14 (struct svc_rqst*,char*,...) ;
 int FUNC_15 (struct kvec*,int) ;
 int FUNC_16 (struct kvec*,int ) ;
 int FUNC_17 (struct svc_rqst*,int) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (struct svc_rqst*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_20(struct svc_rqst *VAR_9, struct kvec *VAR_10, struct kvec *VAR_11)
{
 struct svc_program *VAR_12;
 struct svc_version *VAR_13 = ((void*)0);
 struct svc_procedure *VAR_14 = ((void*)0);
 struct svc_serv *VAR_15 = VAR_9->rq_server;
 kxdrproc_t VAR_16;
 __be32 *VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 __be32 VAR_21, VAR_22;
 int VAR_23;
 __be32 *VAR_24;

 VAR_22 = VAR_7;

 if (VAR_10->iov_len < 6*4)
  goto err_short_len;


 VAR_9->rq_splice_ok = 1;

 VAR_9->rq_usedeferral = 1;
 VAR_9->rq_dropme = 0;


 VAR_9->rq_xprt->xpt_ops->xpo_prep_reply_hdr(VAR_9);

 FUNC_16(VAR_11, VAR_9->rq_xid);

 VAR_19 = FUNC_13(VAR_10);


 FUNC_15(VAR_11, 1);

 if (VAR_19 != 2)
  goto err_bad_rpc;


 VAR_24 = VAR_11->iov_base + VAR_11->iov_len;

 FUNC_15(VAR_11, 0);

 VAR_9->rq_prog = VAR_18 = FUNC_13(VAR_10);
 VAR_9->rq_vers = VAR_19 = FUNC_13(VAR_10);
 VAR_9->rq_proc = VAR_20 = FUNC_13(VAR_10);

 VAR_12 = VAR_15->sv_program;

 for (VAR_12 = VAR_15->sv_program; VAR_12; VAR_12 = VAR_12->pg_next)
  if (VAR_18 == VAR_12->pg_prog)
   break;






 VAR_23 = FUNC_10(VAR_9, &VAR_21);

 if (VAR_23 == 129 && VAR_12) {
  VAR_21 = VAR_5;
  VAR_23 = VAR_12->pg_authenticate(VAR_9);
 }
 switch (VAR_23) {
 case 129:
  break;
 case 130:
  goto err_garbage;
 case 128:
  VAR_22 = VAR_8;
  goto err_bad;
 case 132:
  goto err_bad_auth;
 case 134:
  if (FUNC_18(VAR_4, &VAR_9->rq_xprt->xpt_flags))
   FUNC_12(VAR_9->rq_xprt);
 case 131:
  goto dropit;
 case 133:
  goto sendit;
 }

 if (VAR_12 == ((void*)0))
  goto err_bad_prog;

 if (VAR_19 >= VAR_12->pg_nvers ||
   !(VAR_13 = VAR_12->pg_vers[VAR_19]))
  goto err_bad_vers;

 VAR_14 = VAR_13->vs_proc + VAR_20;
 if (VAR_20 >= VAR_13->vs_nproc || !VAR_14->pc_func)
  goto err_bad_proc;
 VAR_9->rq_procinfo = VAR_14;


 VAR_15->sv_stats->rpccnt++;


 VAR_17 = VAR_11->iov_base +VAR_11->iov_len;
 FUNC_15(VAR_11, VAR_3);


 VAR_14->pc_count++;


 FUNC_1(VAR_9->rq_argp, 0, VAR_14->pc_argsize);
 FUNC_1(VAR_9->rq_resp, 0, VAR_14->pc_ressize);




 if (VAR_14->pc_xdrressize)
  FUNC_17(VAR_9, VAR_14->pc_xdrressize<<2);


 if (!VAR_13->vs_dispatch) {

  VAR_16 = VAR_14->pc_decode;
  if (VAR_16 && !VAR_16(VAR_9, VAR_10->iov_base, VAR_9->rq_argp))
   goto err_garbage;

  *VAR_17 = VAR_14->pc_func(VAR_9, VAR_9->rq_argp, VAR_9->rq_resp);


  if (VAR_9->rq_dropme) {
   if (VAR_14->pc_release)
    VAR_14->pc_release(VAR_9, ((void*)0), VAR_9->rq_resp);
   goto dropit;
  }
  if (*VAR_17 == VAR_7 && (VAR_16 = VAR_14->pc_encode)
   && !VAR_16(VAR_9, VAR_11->iov_base+VAR_11->iov_len, VAR_9->rq_resp)) {
   FUNC_0("svc: failed to encode reply\n");

   *VAR_17 = VAR_8;
  }
 } else {
  FUNC_0("svc: calling dispatcher\n");
  if (!VAR_13->vs_dispatch(VAR_9, VAR_17)) {

   if (VAR_14->pc_release)
    VAR_14->pc_release(VAR_9, ((void*)0), VAR_9->rq_resp);
   goto dropit;
  }
 }


 if (*VAR_17 != VAR_7)
  VAR_11->iov_len = ((void*)VAR_17) - VAR_11->iov_base + 4;


 if (VAR_14->pc_release)
  VAR_14->pc_release(VAR_9, ((void*)0), VAR_9->rq_resp);

 if (VAR_14->pc_encode == ((void*)0))
  goto dropit;

 sendit:
 if (FUNC_11(VAR_9))
  goto dropit;
 return 1;

 dropit:
 FUNC_11(VAR_9);
 FUNC_0("svc: svc_process dropit\n");
 return 0;

err_short_len:
 FUNC_14(VAR_9, "short len %Zd, dropping request\n",
   VAR_10->iov_len);

 goto dropit;

err_bad_rpc:
 VAR_15->sv_stats->rpcbadfmt++;
 FUNC_15(VAR_11, 1);
 FUNC_15(VAR_11, 0);
 FUNC_15(VAR_11, 2);
 FUNC_15(VAR_11, 2);
 goto sendit;

err_bad_auth:
 FUNC_0("svc: authentication failed (%d)\n", FUNC_2(VAR_21));
 VAR_15->sv_stats->rpcbadauth++;

 FUNC_19(VAR_9, VAR_24);
 FUNC_15(VAR_11, 1);
 FUNC_15(VAR_11, 1);
 FUNC_15(VAR_11, FUNC_2(VAR_21));
 goto sendit;

err_bad_prog:
 FUNC_0("svc: unknown program %d\n", VAR_18);
 VAR_15->sv_stats->rpcbadfmt++;
 FUNC_15(VAR_11, VAR_2);
 goto sendit;

err_bad_vers:
 FUNC_14(VAR_9, "unknown version (%d for prog %d, %s)\n",
         VAR_19, VAR_18, VAR_12->pg_name);

 VAR_15->sv_stats->rpcbadfmt++;
 FUNC_15(VAR_11, VAR_1);
 FUNC_15(VAR_11, VAR_12->pg_lovers);
 FUNC_15(VAR_11, VAR_12->pg_hivers);
 goto sendit;

err_bad_proc:
 FUNC_14(VAR_9, "unknown procedure (%d)\n", VAR_20);

 VAR_15->sv_stats->rpcbadfmt++;
 FUNC_15(VAR_11, VAR_0);
 goto sendit;

err_garbage:
 FUNC_14(VAR_9, "failed to decode args\n");

 VAR_22 = VAR_6;
err_bad:
 VAR_15->sv_stats->rpcbadfmt++;
 FUNC_15(VAR_11, FUNC_2(VAR_22));
 goto sendit;
}
