
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_buf {TYPE_2__* tail; int page_len; TYPE_1__* head; int len; } ;
struct svc_xprt {int xpt_bc_pending; int xpt_mutex; TYPE_3__* xpt_ops; int xpt_flags; } ;
struct svc_rqst {struct xdr_buf rq_res; struct svc_xprt* rq_xprt; } ;
struct TYPE_6__ {int (* xpo_sendto ) (struct svc_rqst*) ;int (* xpo_release_rqst ) (struct svc_rqst*) ;} ;
struct TYPE_5__ {int iov_len; } ;
struct TYPE_4__ {int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_rqst*) ;
 int FUNC_4 (struct svc_rqst*) ;
 int FUNC_5 (struct svc_rqst*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct svc_rqst *VAR_6)
{
 struct svc_xprt *VAR_7;
 int VAR_8;
 struct xdr_buf *VAR_9;

 VAR_7 = VAR_6->rq_xprt;
 if (!VAR_7)
  return -VAR_2;


 VAR_6->rq_xprt->xpt_ops->xpo_release_rqst(VAR_6);


 VAR_9 = &VAR_6->rq_res;
 VAR_9->len = VAR_9->head[0].iov_len +
  VAR_9->page_len +
  VAR_9->tail[0].iov_len;


 FUNC_0(&VAR_7->xpt_mutex);
 if (FUNC_6(VAR_5, &VAR_7->xpt_flags)
   || FUNC_6(VAR_4, &VAR_7->xpt_flags))
  VAR_8 = -VAR_3;
 else
  VAR_8 = VAR_7->xpt_ops->xpo_sendto(VAR_6);
 FUNC_1(&VAR_7->xpt_mutex);
 FUNC_2(&VAR_7->xpt_bc_pending);
 FUNC_5(VAR_6);

 if (VAR_8 == -VAR_1 || VAR_8 == -VAR_3 || VAR_8 == -VAR_0)
  return 0;
 return VAR_8;
}
