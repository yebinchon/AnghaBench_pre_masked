
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xdr_netobj {int dummy; } ;
struct xdr_buf {int len; TYPE_1__* head; } ;
struct rpc_rqst {scalar_t__ rq_seqno; struct xdr_buf rq_rcv_buf; } ;
struct rpc_cred {int cr_flags; } ;
struct gss_cl_ctx {int gc_gss_ctx; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct xdr_buf*,struct xdr_netobj*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct xdr_buf*,struct xdr_netobj*,int) ;
 scalar_t__ FUNC_4 (struct xdr_buf*,struct xdr_buf*,int,int) ;

__attribute__((used)) static inline int
FUNC_5(struct rpc_cred *VAR_4, struct gss_cl_ctx *VAR_5,
  struct rpc_rqst *VAR_6, __be32 **VAR_7)
{
 struct xdr_buf *VAR_8 = &VAR_6->rq_rcv_buf;
 struct xdr_buf VAR_9;
 struct xdr_netobj VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15 = -VAR_0;

 VAR_13 = FUNC_2(*(*VAR_7)++);
 if (VAR_13 & 3)
  return VAR_15;
 VAR_11 = (u8 *)(*VAR_7) - (u8 *)VAR_8->head[0].iov_base;
 VAR_12 = VAR_13 + VAR_11;
 if (VAR_12 > VAR_8->len)
  return VAR_15;
 if (FUNC_2(*(*VAR_7)++) != VAR_6->rq_seqno)
  return VAR_15;

 if (FUNC_4(VAR_8, &VAR_9, VAR_11,
    VAR_12 - VAR_11))
  return VAR_15;

 if (FUNC_3(VAR_8, &VAR_10, VAR_12))
  return VAR_15;

 VAR_14 = FUNC_1(VAR_5->gc_gss_ctx, &VAR_9, &VAR_10);
 if (VAR_14 == VAR_2)
  FUNC_0(VAR_3, &VAR_4->cr_flags);
 if (VAR_14 != VAR_1)
  return VAR_15;
 return 0;
}
