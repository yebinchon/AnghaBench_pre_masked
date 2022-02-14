
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_netobj {scalar_t__ len; int data; } ;
struct xdr_buf {int len; int * head; } ;
struct svc_rqst {scalar_t__ rq_deferred; } ;
struct gss_ctx {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct gss_ctx*,struct xdr_buf*,struct xdr_netobj*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct xdr_buf*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct xdr_buf*,int,scalar_t__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct xdr_buf*,struct xdr_buf*,int ,int) ;
 int FUNC_8 (struct xdr_buf*,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct svc_rqst *VAR_4, struct xdr_buf *VAR_5, u32 VAR_6, struct gss_ctx *VAR_7)
{
 int VAR_8 = -VAR_0;
 u32 VAR_9, VAR_10;
 struct xdr_netobj VAR_11;
 struct xdr_buf VAR_12;


 if (VAR_4->rq_deferred)
  return 0;

 VAR_9 = FUNC_6(&VAR_5->head[0]);
 if (VAR_9 & 3)
  return VAR_8;
 if (VAR_9 > VAR_5->len)
  return VAR_8;
 if (FUNC_7(VAR_5, &VAR_12, 0, VAR_9))
  FUNC_0();

 if (FUNC_5(VAR_5, VAR_9, &VAR_11.len))
  FUNC_0();
 if (VAR_11.len > VAR_3)
  return VAR_8;
 VAR_11.data = FUNC_3(VAR_11.len, VAR_1);
 if (!VAR_11.data)
  return VAR_8;
 if (FUNC_4(VAR_5, VAR_9 + 4, VAR_11.data, VAR_11.len))
  goto out;
 VAR_10 = FUNC_1(VAR_7, &VAR_12, &VAR_11);
 if (VAR_10 != VAR_2)
  goto out;
 if (FUNC_6(&VAR_5->head[0]) != VAR_6)
  goto out;

 FUNC_8(VAR_5, VAR_11.len + 4);
 VAR_8 = 0;
out:
 FUNC_2(VAR_11.data);
 return VAR_8;
}
