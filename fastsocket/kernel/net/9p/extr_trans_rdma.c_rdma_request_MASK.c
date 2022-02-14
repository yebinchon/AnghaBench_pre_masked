
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p9_trans_rdma {scalar_t__ rq_depth; scalar_t__ state; int req_lock; TYPE_2__* cm_id; int qp; int sq_sem; int lkey; int rq_count; } ;
struct p9_req_t {TYPE_1__* tc; struct p9_rdma_context* rc; } ;
struct p9_rdma_context {char* sdata; int capacity; int wc_op; struct p9_req_t* req; int busa; struct p9_rdma_context* rc; } ;
struct p9_fcall {int dummy; } ;
struct p9_client {int msize; struct p9_trans_rdma* trans; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_send_wr {unsigned long wr_id; int num_sge; struct ib_sge* sg_list; int send_flags; int opcode; int * next; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {int size; int sdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct ib_send_wr*,struct ib_send_wr**) ;
 int FUNC_7 (struct p9_rdma_context*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (struct p9_client*,struct p9_rdma_context*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct p9_client *VAR_8, struct p9_req_t *VAR_9)
{
 struct p9_trans_rdma *VAR_10 = VAR_8->trans;
 struct ib_send_wr VAR_11, *VAR_12;
 struct ib_sge VAR_13;
 int VAR_14 = 0;
 unsigned long VAR_15;
 struct p9_rdma_context *VAR_16 = ((void*)0);
 struct p9_rdma_context *VAR_17 = ((void*)0);


 VAR_17 = FUNC_8(sizeof *VAR_17, VAR_2);
 if (!VAR_17)
  goto err_close;






 if (!VAR_9->rc) {
  VAR_9->rc = FUNC_8(sizeof(struct p9_fcall)+VAR_8->msize,
        VAR_2);
  if (VAR_9->rc) {
   VAR_9->rc->sdata = (char *) VAR_9->rc +
      sizeof(struct p9_fcall);
   VAR_9->rc->capacity = VAR_8->msize;
  }
 }
 VAR_17->rc = VAR_9->rc;
 if (!VAR_17->rc) {
  FUNC_7(VAR_17);
  goto err_close;
 }
 if (FUNC_2(&VAR_10->rq_count) <= VAR_10->rq_depth) {
  VAR_14 = FUNC_9(VAR_8, VAR_17);
  if (VAR_14) {
   FUNC_7(VAR_17->rc);
   FUNC_7(VAR_17);
   goto err_close;
  }
 } else
  FUNC_1(&VAR_10->rq_count);


 VAR_9->rc = ((void*)0);


 VAR_16 = FUNC_8(sizeof *VAR_16, VAR_2);
 if (!VAR_16)
  goto err_close;
 VAR_16->req = VAR_9;

 VAR_16->busa = FUNC_4(VAR_10->cm_id->device,
        VAR_16->req->tc->sdata, VAR_16->req->tc->size,
        VAR_0);
 if (FUNC_5(VAR_10->cm_id->device, VAR_16->busa))
  goto error;

 VAR_13.addr = VAR_16->busa;
 VAR_13.length = VAR_16->req->tc->size;
 VAR_13.lkey = VAR_10->lkey;

 VAR_11.next = ((void*)0);
 VAR_16->wc_op = VAR_4;
 VAR_11.wr_id = (unsigned long) VAR_16;
 VAR_11.opcode = VAR_5;
 VAR_11.send_flags = VAR_3;
 VAR_11.sg_list = &VAR_13;
 VAR_11.num_sge = 1;

 if (FUNC_3(&VAR_10->sq_sem))
  goto error;

 return FUNC_6(VAR_10->qp, &VAR_11, &VAR_12);

 error:
 FUNC_0(VAR_6, "EIO\n");
 return -VAR_1;

 err_close:
 FUNC_11(&VAR_10->req_lock, VAR_15);
 if (VAR_10->state < VAR_7) {
  VAR_10->state = VAR_7;
  FUNC_12(&VAR_10->req_lock, VAR_15);
  FUNC_10(VAR_10->cm_id);
 } else
  FUNC_12(&VAR_10->req_lock, VAR_15);
 return VAR_14;
}
