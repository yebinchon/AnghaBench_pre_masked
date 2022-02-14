
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_netobj {scalar_t__ len; int * data; } ;
struct xdr_buf {int dummy; } ;
struct rpc_task {int tk_pid; TYPE_1__* tk_rqstp; } ;
struct rpc_cred {TYPE_2__* cr_auth; int cr_flags; } ;
struct kvec {int iov_len; int * iov_base; } ;
struct gss_cl_ctx {int gc_gss_ctx; } ;
typedef int seq ;
typedef int __be32 ;
struct TYPE_4__ {int au_verfsize; } ;
struct TYPE_3__ {int rq_seqno; struct rpc_cred* rq_cred; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int ,...) ;
 struct gss_cl_ctx* FUNC_3 (struct rpc_cred*) ;
 int FUNC_4 (struct gss_cl_ctx*) ;
 scalar_t__ FUNC_5 (int ,struct xdr_buf*,struct xdr_netobj*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct kvec*,struct xdr_buf*) ;

__attribute__((used)) static __be32 *
FUNC_9(struct rpc_task *VAR_4, __be32 *VAR_5)
{
 struct rpc_cred *VAR_6 = VAR_4->tk_rqstp->rq_cred;
 struct gss_cl_ctx *VAR_7 = FUNC_3(VAR_6);
 __be32 VAR_8;
 struct kvec VAR_9;
 struct xdr_buf VAR_10;
 struct xdr_netobj VAR_11;
 u32 VAR_12,VAR_13;
 u32 VAR_14;

 FUNC_2("RPC: %5u gss_validate\n", VAR_4->tk_pid);

 VAR_12 = FUNC_7(*VAR_5++);
 if ((VAR_13 = FUNC_7(*VAR_5++)) > VAR_3)
  goto out_bad;
 if (VAR_12 != VAR_2)
  goto out_bad;
 VAR_8 = FUNC_6(VAR_4->tk_rqstp->rq_seqno);
 VAR_9.iov_base = &VAR_8;
 VAR_9.iov_len = sizeof(VAR_8);
 FUNC_8(&VAR_9, &VAR_10);
 VAR_11.data = (u8 *)VAR_5;
 VAR_11.len = VAR_13;

 VAR_14 = FUNC_5(VAR_7->gc_gss_ctx, &VAR_10, &VAR_11);
 if (VAR_14 == VAR_0)
  FUNC_1(VAR_1, &VAR_6->cr_flags);
 if (VAR_14) {
  FUNC_2("RPC: %5u gss_validate: gss_verify_mic returned "
    "error 0x%08x\n", VAR_4->tk_pid, VAR_14);
  goto out_bad;
 }


 VAR_6->cr_auth->au_verfsize = FUNC_0(VAR_13) + 2;
 FUNC_4(VAR_7);
 FUNC_2("RPC: %5u gss_validate: gss_verify_mic succeeded.\n",
   VAR_4->tk_pid);
 return VAR_5 + FUNC_0(VAR_13);
out_bad:
 FUNC_4(VAR_7);
 FUNC_2("RPC: %5u gss_validate failed.\n", VAR_4->tk_pid);
 return ((void*)0);
}
