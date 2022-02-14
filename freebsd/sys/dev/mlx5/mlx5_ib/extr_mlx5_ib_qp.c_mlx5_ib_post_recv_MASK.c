
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_wqe_data_seg {scalar_t__ addr; void* lkey; scalar_t__ byte_count; } ;
struct mlx5_rwqe_sig {int dummy; } ;
struct TYPE_6__ {int head; int wqe_cnt; int max_gs; int lock; int * wrid; } ;
struct TYPE_5__ {void** db; } ;
struct TYPE_4__ {int recv_cq; } ;
struct mlx5_ib_qp {TYPE_3__ rq; TYPE_2__ db; scalar_t__ wq_sig; TYPE_1__ ibqp; } ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {scalar_t__ state; } ;
struct ib_recv_wr {int num_sge; int wr_id; scalar_t__ sg_list; struct ib_recv_wr* next; } ;
struct ib_qp {scalar_t__ qp_type; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 struct mlx5_wqe_data_seg* FUNC_1 (struct mlx5_ib_qp*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ib_qp*,struct ib_recv_wr*,struct ib_recv_wr**) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (struct mlx5_wqe_data_seg*,scalar_t__) ;
 int FUNC_6 (struct mlx5_rwqe_sig*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct mlx5_ib_dev* FUNC_9 (int ) ;
 struct mlx5_ib_qp* FUNC_10 (struct ib_qp*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;

int FUNC_13(struct ib_qp *VAR_6, struct ib_recv_wr *VAR_7,
        struct ib_recv_wr **VAR_8)
{
 struct mlx5_ib_qp *VAR_9 = FUNC_10(VAR_6);
 struct mlx5_wqe_data_seg *VAR_10;
 struct mlx5_rwqe_sig *VAR_11;
 struct mlx5_ib_dev *VAR_12 = FUNC_9(VAR_6->device);
 struct mlx5_core_dev *VAR_13 = VAR_12->mdev;
 unsigned long VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 if (FUNC_11(VAR_6->qp_type == VAR_3))
  return FUNC_3(VAR_6, VAR_7, VAR_8);

 FUNC_7(&VAR_9->rq.lock, VAR_14);

 if (VAR_13->state == VAR_4) {
  VAR_15 = -VAR_1;
  *VAR_8 = VAR_7;
  VAR_16 = 0;
  goto out;
 }

 VAR_17 = VAR_9->rq.head & (VAR_9->rq.wqe_cnt - 1);

 for (VAR_16 = 0; VAR_7; VAR_16++, VAR_7 = VAR_7->next) {
  if (FUNC_4(&VAR_9->rq, VAR_16, VAR_9->ibqp.recv_cq)) {
   VAR_15 = -VAR_2;
   *VAR_8 = VAR_7;
   goto out;
  }

  if (FUNC_11(VAR_7->num_sge > VAR_9->rq.max_gs)) {
   VAR_15 = -VAR_0;
   *VAR_8 = VAR_7;
   goto out;
  }

  VAR_10 = FUNC_1(VAR_9, VAR_17);
  if (VAR_9->wq_sig)
   VAR_10++;

  for (VAR_18 = 0; VAR_18 < VAR_7->num_sge; VAR_18++)
   FUNC_5(VAR_10 + VAR_18, VAR_7->sg_list + VAR_18);

  if (VAR_18 < VAR_9->rq.max_gs) {
   VAR_10[VAR_18].byte_count = 0;
   VAR_10[VAR_18].lkey = FUNC_0(VAR_5);
   VAR_10[VAR_18].addr = 0;
  }

  if (VAR_9->wq_sig) {
   VAR_11 = (struct mlx5_rwqe_sig *)VAR_10;
   FUNC_6(VAR_11, (VAR_9->rq.max_gs + 1) << 2);
  }

  VAR_9->rq.wrid[VAR_17] = VAR_7->wr_id;

  VAR_17 = (VAR_17 + 1) & (VAR_9->rq.wqe_cnt - 1);
 }

out:
 if (FUNC_2(VAR_16)) {
  VAR_9->rq.head += VAR_16;




  FUNC_12();

  *VAR_9->db.db = FUNC_0(VAR_9->rq.head & 0xffff);
 }

 FUNC_8(&VAR_9->rq.lock, VAR_14);

 return VAR_15;
}
