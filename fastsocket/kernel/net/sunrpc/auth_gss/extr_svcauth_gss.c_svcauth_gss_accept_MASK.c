
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ u32 ;
struct TYPE_15__ {struct kvec* head; } ;
struct TYPE_14__ {int cr_group_info; } ;
struct TYPE_13__ {struct kvec* head; } ;
struct svc_rqst {scalar_t__ rq_proc; int rq_flavor; TYPE_3__ rq_arg; TYPE_2__ rq_cred; struct gss_svc_data* rq_auth_data; TYPE_1__ rq_res; } ;
struct TYPE_12__ {int flags; int expiry_time; } ;
struct rsc {TYPE_10__ h; TYPE_4__* mechctx; TYPE_2__ cred; } ;
struct TYPE_17__ {int len; } ;
struct rpc_gss_wire_cred {int gc_proc; scalar_t__ gc_svc; scalar_t__ gc_seq; TYPE_7__ gc_ctx; } ;
struct kvec {int iov_len; int * iov_base; } ;
struct gss_svc_data {struct rsc* rsci; int * verf_start; struct rpc_gss_wire_cred clcred; } ;
typedef int __be32 ;
struct TYPE_16__ {int mech_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;

 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_10__*,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 struct rsc* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct svc_rqst*,struct rsc*,int *,struct rpc_gss_wire_cred*,int *) ;
 int FUNC_8 (struct svc_rqst*,TYPE_4__*,scalar_t__) ;
 struct gss_svc_data* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (struct kvec*) ;
 int FUNC_13 (struct kvec*,int ) ;
 scalar_t__ FUNC_14 (struct kvec*,TYPE_7__*) ;
 int FUNC_15 (struct svc_rqst*,struct rpc_gss_wire_cred*,int *) ;
 int FUNC_16 (struct svc_rqst*,TYPE_3__*,scalar_t__,TYPE_4__*) ;
 int FUNC_17 (struct svc_rqst*,TYPE_3__*,scalar_t__,TYPE_4__*) ;
 int FUNC_18 (struct svc_rqst*,int *) ;

__attribute__((used)) static int
FUNC_19(struct svc_rqst *VAR_13, __be32 *VAR_14)
{
 struct kvec *VAR_15 = &VAR_13->rq_arg.head[0];
 struct kvec *VAR_16 = &VAR_13->rq_res.head[0];
 u32 VAR_17;
 struct gss_svc_data *VAR_18 = VAR_13->rq_auth_data;
 struct rpc_gss_wire_cred *VAR_19;
 struct rsc *VAR_20 = ((void*)0);
 __be32 *VAR_21;
 __be32 *VAR_22 = VAR_16->iov_base + VAR_16->iov_len;
 int VAR_23;

 FUNC_2("RPC:       svcauth_gss: argv->iov_len = %zd\n",
   VAR_15->iov_len);

 *VAR_14 = VAR_7;
 if (!VAR_18)
  VAR_18 = FUNC_9(sizeof(*VAR_18), VAR_1);
 if (!VAR_18)
  goto auth_err;
 VAR_13->rq_auth_data = VAR_18;
 VAR_18->verf_start = ((void*)0);
 VAR_18->rsci = ((void*)0);
 VAR_19 = &VAR_18->clcred;




 VAR_21 = VAR_15->iov_base;
 VAR_21 -= 7;






 if (VAR_15->iov_len < 5 * 4)
  goto auth_err;
 VAR_17 = FUNC_12(VAR_15);
 if (FUNC_12(VAR_15) != VAR_3)
  goto auth_err;
 VAR_19->gc_proc = FUNC_12(VAR_15);
 VAR_19->gc_seq = FUNC_12(VAR_15);
 VAR_19->gc_svc = FUNC_12(VAR_15);
 if (FUNC_14(VAR_15, &VAR_19->gc_ctx))
  goto auth_err;
 if (VAR_17 != FUNC_10(VAR_19->gc_ctx.len) + 5 * 4)
  goto auth_err;

 if ((VAR_19->gc_proc != 136) && (VAR_13->rq_proc != 0))
  goto auth_err;

 *VAR_14 = VAR_8;
 switch (VAR_19->gc_proc) {
 case 134:
 case 137:
  return FUNC_15(VAR_13, VAR_19, VAR_14);
 case 136:
 case 135:

  *VAR_14 = VAR_10;
  VAR_20 = FUNC_5(&VAR_19->gc_ctx);
  if (!VAR_20)
   goto auth_err;
  switch (FUNC_7(VAR_13, VAR_20, VAR_21, VAR_19, VAR_14)) {
  case 128:
   break;
  case 130:
   goto auth_err;
  case 129:
   goto drop;
  }
  break;
 default:
  *VAR_14 = VAR_9;
  goto auth_err;
 }


 switch (VAR_19->gc_proc) {
 case 135:
  if (FUNC_8(VAR_13, VAR_20->mechctx, VAR_19->gc_seq))
   goto auth_err;
  VAR_20->h.expiry_time = FUNC_4();
  FUNC_11(VAR_0, &VAR_20->h.flags);
  if (VAR_16->iov_len + 4 > VAR_2)
   goto drop;
  FUNC_13(VAR_16, VAR_4);
  goto complete;
 case 136:
  *VAR_14 = VAR_11;
  VAR_18->verf_start = VAR_16->iov_base + VAR_16->iov_len;
  if (FUNC_8(VAR_13, VAR_20->mechctx, VAR_19->gc_seq))
   goto auth_err;
  VAR_13->rq_cred = VAR_20->cred;
  FUNC_3(VAR_20->cred.cr_group_info);
  *VAR_14 = VAR_7;
  switch (VAR_19->gc_svc) {
  case 132:
   break;
  case 133:

   FUNC_13(VAR_16, 0);
   FUNC_13(VAR_16, 0);
   if (FUNC_16(VAR_13, &VAR_13->rq_arg,
     VAR_19->gc_seq, VAR_20->mechctx))
    goto garbage_args;
   break;
  case 131:

   FUNC_13(VAR_16, 0);
   FUNC_13(VAR_16, 0);
   if (FUNC_17(VAR_13, &VAR_13->rq_arg,
     VAR_19->gc_seq, VAR_20->mechctx))
    goto garbage_args;
   break;
  default:
   goto auth_err;
  }
  VAR_18->rsci = VAR_20;
  FUNC_0(&VAR_20->h);
  VAR_13->rq_flavor = FUNC_6(
     VAR_20->mechctx->mech_type, VAR_19->gc_svc);
  VAR_23 = 128;
  goto out;
 }
garbage_args:
 VAR_23 = VAR_6;
 goto out;
auth_err:

 FUNC_18(VAR_13, VAR_22);
 VAR_23 = 130;
 goto out;
complete:
 VAR_23 = VAR_5;
 goto out;
drop:
 VAR_23 = 129;
out:
 if (VAR_20)
  FUNC_1(&VAR_20->h, &VAR_12);
 return VAR_23;
}
