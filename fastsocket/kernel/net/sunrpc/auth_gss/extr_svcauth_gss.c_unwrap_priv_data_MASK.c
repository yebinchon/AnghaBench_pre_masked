
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdr_buf {int len; TYPE_1__* head; int buflen; } ;
struct svc_rqst {scalar_t__ rq_deferred; scalar_t__ rq_splice_ok; } ;
struct gss_ctx {int dummy; } ;
struct TYPE_2__ {int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xdr_buf*,int) ;
 int FUNC_1 (struct gss_ctx*,int ,struct xdr_buf*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct xdr_buf*) ;
 int FUNC_4 (struct xdr_buf*,int) ;

__attribute__((used)) static int
FUNC_5(struct svc_rqst *VAR_3, struct xdr_buf *VAR_4, u32 VAR_5, struct gss_ctx *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_3->rq_splice_ok = 0;

 VAR_7 = FUNC_2(&VAR_4->head[0]);
 if (VAR_3->rq_deferred) {


  goto out_seq;
 }



 VAR_11 = FUNC_3(VAR_4);
 if (VAR_7 > VAR_11)
  return -VAR_0;
 VAR_9 = VAR_11 - VAR_7;
 VAR_4->len -= VAR_9;
 FUNC_0(VAR_4, VAR_9);


 VAR_10 = VAR_4->len;
 VAR_4->len = VAR_7;
 VAR_8 = FUNC_1(VAR_6, 0, VAR_4);
 VAR_9 = VAR_7 - VAR_4->len;
 VAR_4->len = VAR_10;
 VAR_4->len -= VAR_9;






 VAR_12 = VAR_4->head[0].iov_len % 4;
 if (VAR_12) {
  VAR_4->buflen = VAR_2;
  FUNC_4(VAR_4, VAR_12);
  FUNC_0(VAR_4, VAR_9);
 }
 if (VAR_8 != VAR_1)
  return -VAR_0;
out_seq:
 if (FUNC_2(&VAR_4->head[0]) != VAR_5)
  return -VAR_0;
 return 0;
}
