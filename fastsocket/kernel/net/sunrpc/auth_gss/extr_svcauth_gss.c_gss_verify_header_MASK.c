
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_netobj {int dummy; } ;
struct xdr_buf {int dummy; } ;
struct TYPE_2__ {struct kvec* head; } ;
struct svc_rqst {scalar_t__ rq_deferred; TYPE_1__ rq_arg; } ;
struct rsc {struct gss_ctx* mechctx; } ;
struct rpc_gss_wire_cred {scalar_t__ gc_seq; } ;
struct kvec {int iov_len; int * iov_base; } ;
struct gss_ctx {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct rsc*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct gss_ctx*,struct xdr_buf*,struct xdr_netobj*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct kvec*) ;
 scalar_t__ FUNC_4 (struct kvec*,struct xdr_netobj*) ;
 int FUNC_5 (struct kvec*,struct xdr_buf*) ;

__attribute__((used)) static int
FUNC_6(struct svc_rqst *VAR_9, struct rsc *VAR_10,
    __be32 *VAR_11, struct rpc_gss_wire_cred *VAR_12, __be32 *VAR_13)
{
 struct gss_ctx *VAR_14 = VAR_10->mechctx;
 struct xdr_buf VAR_15;
 struct xdr_netobj VAR_16;
 u32 VAR_17 = 0;
 struct kvec *VAR_18 = &VAR_9->rq_arg.head[0];
 struct kvec VAR_19;


 VAR_19.iov_base = VAR_11;
 VAR_19.iov_len = (u8 *)VAR_18->iov_base - (u8 *)VAR_11;
 FUNC_5(&VAR_19, &VAR_15);

 *VAR_13 = VAR_6;
 if (VAR_18->iov_len < 4)
  return VAR_3;
 VAR_17 = FUNC_3(VAR_18);
 if (VAR_17 != VAR_2)
  return VAR_3;
 if (FUNC_4(VAR_18, &VAR_16))
  return VAR_3;

 if (VAR_9->rq_deferred)
  return VAR_5;
 if (FUNC_2(VAR_14, &VAR_15, &VAR_16) != VAR_0) {
  *VAR_13 = VAR_7;
  return VAR_3;
 }

 if (VAR_12->gc_seq > VAR_1) {
  FUNC_0("RPC:       svcauth_gss: discarding request with "
    "large sequence number %d\n", VAR_12->gc_seq);
  *VAR_13 = VAR_8;
  return VAR_3;
 }
 if (!FUNC_1(VAR_10, VAR_12->gc_seq)) {
  FUNC_0("RPC:       svcauth_gss: discarding request with "
    "old sequence number %d\n", VAR_12->gc_seq);
  return VAR_4;
 }
 return VAR_5;
}
