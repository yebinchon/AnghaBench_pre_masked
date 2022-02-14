
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdr_seq ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_netobj {scalar_t__ len; int * data; } ;
struct xdr_buf {int dummy; } ;
struct TYPE_3__ {TYPE_2__* head; } ;
struct svc_rqst {TYPE_1__ rq_res; } ;
struct kvec {int iov_len; void** iov_base; } ;
struct gss_ctx {int dummy; } ;
typedef void* __be32 ;
struct TYPE_4__ {int iov_len; void** iov_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct gss_ctx*,struct xdr_buf*,struct xdr_netobj*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct kvec*,struct xdr_buf*) ;
 int FUNC_7 (struct svc_rqst*,void**) ;

__attribute__((used)) static int
FUNC_8(struct svc_rqst *VAR_2, struct gss_ctx *VAR_3, u32 VAR_4)
{
 __be32 VAR_5;
 u32 VAR_6;
 struct xdr_buf VAR_7;
 struct xdr_netobj VAR_8;
 __be32 *VAR_9;
 struct kvec VAR_10;

 FUNC_5(VAR_2->rq_res.head, VAR_1);
 VAR_5 = FUNC_2(VAR_4);

 VAR_10.iov_base = &VAR_5;
 VAR_10.iov_len = sizeof(VAR_5);
 FUNC_6(&VAR_10, &VAR_7);
 VAR_9 = VAR_2->rq_res.head->iov_base + VAR_2->rq_res.head->iov_len;
 VAR_8.data = (u8 *)(VAR_9 + 1);
 VAR_6 = FUNC_1(VAR_3, &VAR_7, &VAR_8);
 if (VAR_6 != VAR_0)
  return -1;
 *VAR_9++ = FUNC_2(VAR_8.len);
 FUNC_3((u8 *)VAR_9 + VAR_8.len, 0, FUNC_4(VAR_8.len) - VAR_8.len);
 VAR_9 += FUNC_0(VAR_8.len);
 if (!FUNC_7(VAR_2, VAR_9))
  return -1;
 return 0;
}
