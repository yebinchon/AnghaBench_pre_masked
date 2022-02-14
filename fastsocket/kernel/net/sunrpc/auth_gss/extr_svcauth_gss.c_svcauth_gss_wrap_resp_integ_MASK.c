
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xdr_netobj {int len; int * data; } ;
struct xdr_buf {int len; struct kvec* tail; TYPE_1__* head; } ;
struct svc_rqst {struct xdr_buf rq_res; scalar_t__ rq_auth_data; } ;
struct rpc_gss_wire_cred {int gc_seq; } ;
struct kvec {int iov_len; int * iov_base; } ;
struct gss_svc_data {TYPE_2__* rsci; struct rpc_gss_wire_cred clcred; } ;
typedef int __be32 ;
struct TYPE_4__ {int mechctx; } ;
struct TYPE_3__ {scalar_t__ iov_len; int * iov_base; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,struct xdr_buf*,struct xdr_netobj*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct kvec*,int) ;
 int * FUNC_8 (struct xdr_buf*,struct gss_svc_data*) ;
 scalar_t__ FUNC_9 (struct xdr_buf*,struct xdr_buf*,int,int) ;

__attribute__((used)) static inline int
FUNC_10(struct svc_rqst *VAR_3)
{
 struct gss_svc_data *VAR_4 = (struct gss_svc_data *)VAR_3->rq_auth_data;
 struct rpc_gss_wire_cred *VAR_5 = &VAR_4->clcred;
 struct xdr_buf *VAR_6 = &VAR_3->rq_res;
 struct xdr_buf VAR_7;
 struct xdr_netobj VAR_8;
 struct kvec *VAR_9;
 __be32 *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = -VAR_0;

 VAR_10 = FUNC_8(VAR_6, VAR_4);
 if (VAR_10 == ((void*)0))
  goto out;
 VAR_11 = (u8 *)(VAR_10 + 1) - (u8 *)VAR_6->head[0].iov_base;
 VAR_12 = VAR_6->len - VAR_11;
 FUNC_1(VAR_12 % 4);
 *VAR_10++ = FUNC_4(VAR_12);
 *VAR_10++ = FUNC_4(VAR_5->gc_seq);
 if (FUNC_9(VAR_6, &VAR_7, VAR_11,
    VAR_12))
  FUNC_0();
 if (VAR_6->tail[0].iov_base == ((void*)0)) {
  if (VAR_6->head[0].iov_len + VAR_2 > VAR_1)
   goto out_err;
  VAR_6->tail[0].iov_base = VAR_6->head[0].iov_base
      + VAR_6->head[0].iov_len;
  VAR_6->tail[0].iov_len = 0;
  VAR_9 = &VAR_6->tail[0];
 } else {
  VAR_9 = &VAR_6->tail[0];
 }
 VAR_8.data = (u8 *)VAR_9->iov_base + VAR_9->iov_len + 4;
 if (FUNC_3(VAR_4->rsci->mechctx, &VAR_7, &VAR_8))
  goto out_err;
 FUNC_7(VAR_9, VAR_8.len);
 FUNC_5(VAR_8.data + VAR_8.len, 0,
   FUNC_6(VAR_8.len) - VAR_8.len);
 VAR_9->iov_len += FUNC_2(VAR_8.len) << 2;

 VAR_6->len += FUNC_2(VAR_8.len) << 2;
 FUNC_1(VAR_9->iov_len > VAR_1);
out:
 VAR_13 = 0;
out_err:
 return VAR_13;
}
