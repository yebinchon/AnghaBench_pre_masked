
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p9_trans_rdma {int qp; int lkey; TYPE_2__* cm_id; } ;
struct p9_rdma_context {int wc_op; int busa; TYPE_1__* rc; } ;
struct p9_client {int msize; struct p9_trans_rdma* trans; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_recv_wr {unsigned long wr_id; int num_sge; struct ib_sge* sg_list; int * next; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int sdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct ib_recv_wr*,struct ib_recv_wr**) ;

__attribute__((used)) static int
FUNC_4(struct p9_client *VAR_4, struct p9_rdma_context *VAR_5)
{
 struct p9_trans_rdma *VAR_6 = VAR_4->trans;
 struct ib_recv_wr VAR_7, *VAR_8;
 struct ib_sge VAR_9;

 VAR_5->busa = FUNC_1(VAR_6->cm_id->device,
        VAR_5->rc->sdata, VAR_4->msize,
        VAR_0);
 if (FUNC_2(VAR_6->cm_id->device, VAR_5->busa))
  goto error;

 VAR_9.addr = VAR_5->busa;
 VAR_9.length = VAR_4->msize;
 VAR_9.lkey = VAR_6->lkey;

 VAR_7.next = ((void*)0);
 VAR_5->wc_op = VAR_2;
 VAR_7.wr_id = (unsigned long) VAR_5;
 VAR_7.sg_list = &VAR_9;
 VAR_7.num_sge = 1;
 return FUNC_3(VAR_6->qp, &VAR_7, &VAR_8);

 error:
 FUNC_0(VAR_3, "EIO\n");
 return -VAR_1;
}
