
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_netobj {int len; int * data; } ;
struct xdr_buf {scalar_t__ len; struct kvec* head; struct kvec* tail; scalar_t__ page_len; } ;
struct rpc_rqst {scalar_t__ rq_seqno; struct xdr_buf rq_snd_buf; } ;
struct rpc_cred {int cr_flags; } ;
struct kvec {int iov_len; void** iov_base; } ;
struct gss_cl_ctx {int gc_gss_ctx; } ;
typedef int (* kxdrproc_t ) (struct rpc_rqst*,void**,void*) ;
typedef void* __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,struct xdr_buf*,struct xdr_netobj*) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct xdr_buf*,struct xdr_buf*,scalar_t__,scalar_t__) ;
 void** FUNC_4 (void**,int *,int ) ;

__attribute__((used)) static inline int
FUNC_5(struct rpc_cred *VAR_3, struct gss_cl_ctx *VAR_4,
  kxdrproc_t VAR_5, struct rpc_rqst *VAR_6, __be32 *VAR_7, void *VAR_8)
{
 struct xdr_buf *VAR_9 = &VAR_6->rq_snd_buf;
 struct xdr_buf VAR_10;
 __be32 *VAR_11 = ((void*)0);
 struct xdr_netobj VAR_12;
 u32 VAR_13;
 __be32 *VAR_14;
 struct kvec *VAR_15;
 u32 VAR_16 = 0;
 int VAR_17 = -VAR_0;

 VAR_11 = VAR_7++;
 VAR_13 = (u8 *)VAR_7 - (u8 *)VAR_9->head[0].iov_base;
 *VAR_7++ = FUNC_2(VAR_6->rq_seqno);

 VAR_17 = VAR_5(VAR_6, VAR_7, VAR_8);
 if (VAR_17)
  return VAR_17;

 if (FUNC_3(VAR_9, &VAR_10,
    VAR_13, VAR_9->len - VAR_13))
  return VAR_17;
 *VAR_11 = FUNC_2(VAR_10.len);


 if (VAR_9->page_len || VAR_9->tail[0].iov_len)
  VAR_15 = VAR_9->tail;
 else
  VAR_15 = VAR_9->head;
 VAR_7 = VAR_15->iov_base + VAR_15->iov_len;
 VAR_12.data = (u8 *)(VAR_7 + 1);

 VAR_16 = FUNC_1(VAR_4->gc_gss_ctx, &VAR_10, &VAR_12);
 VAR_17 = -VAR_0;
 if (VAR_16 == VAR_1)
  FUNC_0(VAR_2, &VAR_3->cr_flags);
 else if (VAR_16)
  return VAR_17;
 VAR_14 = FUNC_4(VAR_7, ((void*)0), VAR_12.len);

 VAR_13 = (u8 *)VAR_14 - (u8 *)VAR_7;
 VAR_15->iov_len += VAR_13;
 VAR_9->len += VAR_13;
 return 0;
}
