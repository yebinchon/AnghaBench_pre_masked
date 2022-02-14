
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__ len; scalar_t__ page_len; TYPE_3__* tail; TYPE_2__* head; scalar_t__ buflen; struct page** pages; scalar_t__ page_base; } ;
struct svc_rqst {TYPE_4__ rq_arg; struct page** rq_pages; struct page** rq_respages; } ;
struct svc_rdma_op_ctxt {int count; struct page** pages; TYPE_1__* sge; } ;
struct page {int dummy; } ;
struct TYPE_7__ {scalar_t__ iov_len; int * iov_base; } ;
struct TYPE_6__ {scalar_t__ iov_len; int iov_base; } ;
struct TYPE_5__ {scalar_t__ length; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(struct svc_rqst *VAR_0,
          struct svc_rdma_op_ctxt *VAR_1,
          u32 VAR_2)
{
 struct page *VAR_3;
 u32 VAR_4;
 int VAR_5;


 VAR_3 = VAR_1->pages[0];
 FUNC_3(VAR_0->rq_pages[0]);
 VAR_0->rq_pages[0] = VAR_3;


 VAR_0->rq_arg.head[0].iov_base = FUNC_2(VAR_3);
 VAR_0->rq_arg.head[0].iov_len = FUNC_1(VAR_2, VAR_1->sge[0].length);
 VAR_0->rq_arg.len = VAR_2;
 VAR_0->rq_arg.buflen = VAR_2;


 VAR_4 = VAR_2 - VAR_0->rq_arg.head[0].iov_len;


 VAR_0->rq_arg.page_len = VAR_4;
 VAR_0->rq_arg.page_base = 0;
 VAR_0->rq_arg.pages = &VAR_0->rq_pages[1];
 VAR_5 = 1;
 while (VAR_4 && VAR_5 < VAR_1->count) {
  VAR_3 = VAR_1->pages[VAR_5];
  FUNC_3(VAR_0->rq_pages[VAR_5]);
  VAR_0->rq_pages[VAR_5] = VAR_3;
  VAR_4 -= FUNC_1(VAR_4, VAR_1->sge[VAR_5].length);
  VAR_0->rq_arg.buflen += VAR_1->sge[VAR_5].length;
  VAR_5++;
 }
 VAR_0->rq_respages = &VAR_0->rq_pages[VAR_5];




 FUNC_0(VAR_4 && (VAR_5 == VAR_1->count));
 FUNC_0((VAR_0->rq_arg.head[0].iov_len + VAR_0->rq_arg.page_len)
        != VAR_2);
 FUNC_0(VAR_0->rq_arg.len != VAR_2);


 VAR_4 = VAR_5;
 while (VAR_5 < VAR_1->count) {
  VAR_3 = VAR_1->pages[VAR_5++];
  FUNC_3(VAR_3);
 }
 VAR_1->count = VAR_4;


 VAR_0->rq_arg.tail[0].iov_base = ((void*)0);
 VAR_0->rq_arg.tail[0].iov_len = 0;
}
