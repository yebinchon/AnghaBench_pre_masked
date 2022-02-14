
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct svcxprt_rdma {int sc_dma_lkey; int sc_dma_used; TYPE_1__* sc_cm_id; } ;
struct svc_rdma_op_ctxt {int count; TYPE_2__* sge; void* wr_op; struct page** pages; int direction; } ;
struct rpcrdma_msg {int dummy; } ;
struct page {int dummy; } ;
struct ib_send_wr {unsigned long wr_id; int num_sge; int send_flags; void* opcode; TYPE_2__* sg_list; } ;
typedef enum rpcrdma_errcode { ____Placeholder_rpcrdma_errcode } rpcrdma_errcode ;
struct TYPE_4__ {int length; int lkey; int addr; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ib_send_wr*,int ,int) ;
 int * FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 struct svc_rdma_op_ctxt* FUNC_7 (struct svcxprt_rdma*) ;
 struct page* FUNC_8 () ;
 int FUNC_9 (struct svc_rdma_op_ctxt*,int) ;
 int FUNC_10 (struct svcxprt_rdma*,struct ib_send_wr*) ;
 int FUNC_11 (struct svc_rdma_op_ctxt*) ;
 int FUNC_12 (struct svcxprt_rdma*,struct rpcrdma_msg*,int,int *) ;

void FUNC_13(struct svcxprt_rdma *VAR_3, struct rpcrdma_msg *VAR_4,
    enum rpcrdma_errcode VAR_5)
{
 struct ib_send_wr VAR_6;
 struct page *VAR_7;
 struct svc_rdma_op_ctxt *VAR_8;
 u32 *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7 = FUNC_8();
 VAR_9 = FUNC_5(VAR_7);


 VAR_10 = FUNC_12(VAR_3, VAR_4, VAR_5, VAR_9);

 VAR_8 = FUNC_7(VAR_3);
 VAR_8->direction = VAR_0;
 VAR_8->count = 1;
 VAR_8->pages[0] = VAR_7;


 VAR_8->sge[0].addr = FUNC_2(VAR_3->sc_cm_id->device,
         VAR_7, 0, VAR_10, VAR_0);
 if (FUNC_3(VAR_3->sc_cm_id->device, VAR_8->sge[0].addr)) {
  FUNC_6(VAR_7);
  FUNC_9(VAR_8, 1);
  return;
 }
 FUNC_0(&VAR_3->sc_dma_used);
 VAR_8->sge[0].lkey = VAR_3->sc_dma_lkey;
 VAR_8->sge[0].length = VAR_10;


 FUNC_4(&VAR_6, 0, sizeof VAR_6);
 VAR_8->wr_op = VAR_2;
 VAR_6.wr_id = (unsigned long)VAR_8;
 VAR_6.sg_list = VAR_8->sge;
 VAR_6.num_sge = 1;
 VAR_6.opcode = VAR_2;
 VAR_6.send_flags = VAR_1;


 VAR_11 = FUNC_10(VAR_3, &VAR_6);
 if (VAR_11) {
  FUNC_1("svcrdma: Error %d posting send for protocol error\n",
   VAR_11);
  FUNC_11(VAR_8);
  FUNC_9(VAR_8, 1);
 }
}
