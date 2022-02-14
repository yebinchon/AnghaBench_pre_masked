
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_buf {scalar_t__ len; TYPE_1__* head; } ;
struct rpc_rqst {scalar_t__ rq_seqno; struct xdr_buf rq_rcv_buf; } ;
struct rpc_cred {int cr_flags; } ;
struct gss_cl_ctx {int gc_gss_ctx; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,struct xdr_buf*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int
FUNC_3(struct rpc_cred *VAR_4, struct gss_cl_ctx *VAR_5,
  struct rpc_rqst *VAR_6, __be32 **VAR_7)
{
 struct xdr_buf *VAR_8 = &VAR_6->rq_rcv_buf;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12 = -VAR_0;

 VAR_10 = FUNC_2(*(*VAR_7)++);
 VAR_9 = (u8 *)(*VAR_7) - (u8 *)VAR_8->head[0].iov_base;
 if (VAR_9 + VAR_10 > VAR_8->len)
  return VAR_12;

 VAR_8->len = VAR_9 + VAR_10;

 VAR_11 = FUNC_1(VAR_5->gc_gss_ctx, VAR_9, VAR_8);
 if (VAR_11 == VAR_2)
  FUNC_0(VAR_3, &VAR_4->cr_flags);
 if (VAR_11 != VAR_1)
  return VAR_12;
 if (FUNC_2(*(*VAR_7)++) != VAR_6->rq_seqno)
  return VAR_12;

 return 0;
}
