
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_netobj {scalar_t__ len; } ;
struct TYPE_5__ {struct kvec* head; } ;
struct TYPE_4__ {struct kvec* head; } ;
struct svc_rqst {int rq_chandle; TYPE_2__ rq_res; TYPE_1__ rq_arg; } ;
struct TYPE_6__ {int data; } ;
struct rsi {int h; int out_token; int minor_status; int major_status; int out_handle; TYPE_3__ in_handle; TYPE_3__ in_token; } ;
struct rpc_gss_wire_cred {scalar_t__ gc_proc; struct xdr_netobj gc_ctx; } ;
struct kvec {int iov_len; } ;
typedef int rsikey ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,struct xdr_netobj*) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct rsi*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rsi*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct rsi*) ;
 struct rsi* FUNC_7 (struct rsi*) ;
 scalar_t__ FUNC_8 (struct kvec*) ;
 int FUNC_9 (struct kvec*,int ) ;
 scalar_t__ FUNC_10 (struct kvec*,struct xdr_netobj*) ;
 scalar_t__ FUNC_11 (struct kvec*,int *) ;

__attribute__((used)) static int FUNC_12(struct svc_rqst *VAR_11,
   struct rpc_gss_wire_cred *VAR_12, __be32 *VAR_13)
{
 struct kvec *VAR_14 = &VAR_11->rq_arg.head[0];
 struct kvec *VAR_15 = &VAR_11->rq_res.head[0];
 struct xdr_netobj VAR_16;
 struct rsi *VAR_17, VAR_18;
 int VAR_19;


 *VAR_13 = VAR_9;
 if (VAR_14->iov_len < 2 * 4)
  return VAR_7;
 if (FUNC_8(VAR_14) != VAR_2)
  return VAR_7;
 if (FUNC_8(VAR_14) != 0)
  return VAR_7;


 *VAR_13 = VAR_8;
 if (VAR_12->gc_proc == VAR_3 && VAR_12->gc_ctx.len != 0)
  return VAR_7;
 FUNC_5(&VAR_18, 0, sizeof(VAR_18));
 if (FUNC_2(&VAR_18.in_handle, &VAR_12->gc_ctx))
  return VAR_5;
 *VAR_13 = VAR_9;
 if (FUNC_10(VAR_14, &VAR_16)) {
  FUNC_4(VAR_18.in_handle.data);
  return VAR_7;
 }
 if (FUNC_2(&VAR_18.in_token, &VAR_16)) {
  FUNC_4(VAR_18.in_handle.data);
  return VAR_5;
 }


 VAR_17 = FUNC_7(&VAR_18);
 FUNC_6(&VAR_18);
 if (!VAR_17)
  return VAR_5;
 if (FUNC_0(&VAR_10, &VAR_17->h, &VAR_11->rq_chandle) < 0)

  return VAR_5;

 VAR_19 = VAR_5;

 if (FUNC_3(VAR_11, VAR_17))
  goto out;
 if (VAR_15->iov_len + 4 > VAR_1)
  goto out;
 FUNC_9(VAR_15, VAR_4);
 if (FUNC_11(VAR_15, &VAR_17->out_handle))
  goto out;
 if (VAR_15->iov_len + 3 * 4 > VAR_1)
  goto out;
 FUNC_9(VAR_15, VAR_17->major_status);
 FUNC_9(VAR_15, VAR_17->minor_status);
 FUNC_9(VAR_15, VAR_0);
 if (FUNC_11(VAR_15, &VAR_17->out_token))
  goto out;

 VAR_19 = VAR_6;
out:
 FUNC_1(&VAR_17->h, &VAR_10);
 return VAR_19;
}
