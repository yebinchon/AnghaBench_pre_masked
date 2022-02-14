
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t prod; } ;
struct qlnxr_qp {scalar_t__ state; int q_lock; TYPE_2__ rq; TYPE_3__* rqe_wr_id; } ;
struct qlnxr_dev {int ha; int gsi_ll2_handle; int rdma_ctx; } ;
struct ib_recv_wr {scalar_t__ num_sge; struct ib_recv_wr* next; int wr_id; TYPE_1__* sg_list; } ;
struct ib_qp {int device; } ;
struct TYPE_6__ {int wr_id; TYPE_1__* sg_list; } ;
struct TYPE_4__ {int length; int addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int) ;
 struct qlnxr_dev* FUNC_3 (int ) ;
 struct qlnxr_qp* FUNC_4 (struct ib_qp*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int
FUNC_9(struct ib_qp *VAR_5,
  struct ib_recv_wr *VAR_6,
  struct ib_recv_wr **VAR_7)
{
 struct qlnxr_dev *VAR_8 = FUNC_3((VAR_5->device));
 struct qlnxr_qp *VAR_9 = FUNC_4(VAR_5);
 unsigned long VAR_10;
 int VAR_11 = 0;

 FUNC_1(VAR_8->ha, "enter, wr: %p\n", VAR_6);

 if ((VAR_9->state != VAR_0) &&
     (VAR_9->state != VAR_1)) {
  *VAR_7 = VAR_6;
  FUNC_0(VAR_8->ha, "exit 0\n");
  return -VAR_2;
 }

 FUNC_7(&VAR_9->q_lock, VAR_10);

 while (VAR_6) {
  if (VAR_6->num_sge > VAR_4) {
   FUNC_0(VAR_8->ha, "exit 1\n");
   goto err;
  }

  VAR_11 = FUNC_2(VAR_8->rdma_ctx,
    VAR_8->gsi_ll2_handle,
    VAR_6->sg_list[0].addr,
    VAR_6->sg_list[0].length,
    0 ,
    1 );
  if (VAR_11) {
   FUNC_0(VAR_8->ha, "exit 2\n");
   goto err;
  }

  FUNC_5(&VAR_9->rqe_wr_id[VAR_9->rq.prod], 0,
   sizeof(VAR_9->rqe_wr_id[VAR_9->rq.prod]));
  VAR_9->rqe_wr_id[VAR_9->rq.prod].sg_list[0] = VAR_6->sg_list[0];
  VAR_9->rqe_wr_id[VAR_9->rq.prod].wr_id = VAR_6->wr_id;

  FUNC_6(&VAR_9->rq);

  VAR_6 = VAR_6->next;
 }

 FUNC_8(&VAR_9->q_lock, VAR_10);

 FUNC_1(VAR_8->ha, "exit rc = %d\n", VAR_11);
 return VAR_11;
err:

 FUNC_8(&VAR_9->q_lock, VAR_10);
 *VAR_7 = VAR_6;

 FUNC_1(VAR_8->ha, "exit with -ENOMEM\n");
 return -VAR_3;
}
