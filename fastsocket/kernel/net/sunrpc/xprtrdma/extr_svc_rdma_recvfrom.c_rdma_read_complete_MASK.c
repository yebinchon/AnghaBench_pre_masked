
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int page_len; TYPE_3__* head; int len; TYPE_2__* tail; int buflen; int * pages; int page_base; } ;
struct svc_rqst {TYPE_4__ rq_arg; int rq_xprt; int rq_prot; scalar_t__ rq_resused; int * rq_respages; int * rq_pages; } ;
struct TYPE_5__ {int page_len; int buflen; int len; TYPE_2__* tail; TYPE_3__* head; int page_base; } ;
struct svc_rdma_op_ctxt {int count; size_t hdr_count; TYPE_1__ arg; int * pages; } ;
struct TYPE_7__ {int iov_len; int iov_base; } ;
struct TYPE_6__ {int iov_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct svc_rdma_op_ctxt*,int ) ;
 int FUNC_4 (struct svc_rqst*,int ) ;

__attribute__((used)) static int FUNC_5(struct svc_rqst *VAR_1,
         struct svc_rdma_op_ctxt *VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_0(!VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++) {
  FUNC_2(VAR_1->rq_pages[VAR_3]);
  VAR_1->rq_pages[VAR_3] = VAR_2->pages[VAR_3];
 }

 VAR_1->rq_arg.pages = &VAR_1->rq_pages[VAR_2->hdr_count];
 VAR_1->rq_arg.page_len = VAR_2->arg.page_len;
 VAR_1->rq_arg.page_base = VAR_2->arg.page_base;


 VAR_1->rq_respages = &VAR_1->rq_arg.pages[VAR_3];
 VAR_1->rq_resused = 0;


 VAR_1->rq_arg.head[0] = VAR_2->arg.head[0];
 VAR_1->rq_arg.tail[0] = VAR_2->arg.tail[0];
 VAR_1->rq_arg.len = VAR_2->arg.len;
 VAR_1->rq_arg.buflen = VAR_2->arg.buflen;


 FUNC_3(VAR_2, 0);


 VAR_1->rq_prot = VAR_0;
 FUNC_4(VAR_1, VAR_1->rq_xprt);

 VAR_4 = VAR_1->rq_arg.head[0].iov_len
  + VAR_1->rq_arg.page_len
  + VAR_1->rq_arg.tail[0].iov_len;
 FUNC_1("svcrdma: deferred read ret=%d, rq_arg.len =%d, "
  "rq_arg.head[0].iov_base=%p, rq_arg.head[0].iov_len = %zd\n",
  VAR_4, VAR_1->rq_arg.len, VAR_1->rq_arg.head[0].iov_base,
  VAR_1->rq_arg.head[0].iov_len);

 return VAR_4;
}
