
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct svcxprt_rdma {int sc_max_req_size; int sc_max_sge; int sc_xprt; int sc_qp; int sc_dma_lkey; int sc_dma_used; TYPE_1__* sc_cm_id; } ;
struct svc_rdma_op_ctxt {int count; TYPE_2__* sge; struct page** pages; int direction; } ;
struct page {int dummy; } ;
struct ib_recv_wr {int num_sge; scalar_t__ wr_id; TYPE_2__* sg_list; int * next; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int lkey; scalar_t__ length; int addr; } ;
struct TYPE_3__ {int device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct page*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct ib_recv_wr*,struct ib_recv_wr**) ;
 struct svc_rdma_op_ctxt* FUNC_5 (struct svcxprt_rdma*) ;
 struct page* FUNC_6 () ;
 int FUNC_7 (struct svc_rdma_op_ctxt*,int) ;
 int FUNC_8 (struct svc_rdma_op_ctxt*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct svcxprt_rdma *VAR_3)
{
 struct ib_recv_wr VAR_4, *VAR_5;
 struct svc_rdma_op_ctxt *VAR_6;
 struct page *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_6 = FUNC_5(VAR_3);
 VAR_10 = 0;
 VAR_6->direction = VAR_0;
 for (VAR_9 = 0; VAR_10 < VAR_3->sc_max_req_size; VAR_9++) {
  FUNC_0(VAR_9 >= VAR_3->sc_max_sge);
  VAR_7 = FUNC_6();
  VAR_6->pages[VAR_9] = VAR_7;
  VAR_8 = FUNC_2(VAR_3->sc_cm_id->device,
         VAR_7, 0, VAR_2,
         VAR_0);
  if (FUNC_3(VAR_3->sc_cm_id->device, VAR_8))
   goto err_put_ctxt;
  FUNC_1(&VAR_3->sc_dma_used);
  VAR_6->sge[VAR_9].addr = VAR_8;
  VAR_6->sge[VAR_9].length = VAR_2;
  VAR_6->sge[VAR_9].lkey = VAR_3->sc_dma_lkey;
  VAR_6->count = VAR_9 + 1;
  VAR_10 += VAR_2;
 }
 VAR_4.next = ((void*)0);
 VAR_4.sg_list = &VAR_6->sge[0];
 VAR_4.num_sge = VAR_6->count;
 VAR_4.wr_id = (u64)(unsigned long)VAR_6;

 FUNC_9(&VAR_3->sc_xprt);
 VAR_11 = FUNC_4(VAR_3->sc_qp, &VAR_4, &VAR_5);
 if (VAR_11) {
  FUNC_8(VAR_6);
  FUNC_7(VAR_6, 1);
  FUNC_10(&VAR_3->sc_xprt);
 }
 return VAR_11;

 err_put_ctxt:
 FUNC_8(VAR_6);
 FUNC_7(VAR_6, 1);
 return -VAR_1;
}
