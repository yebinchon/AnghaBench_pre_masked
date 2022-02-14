
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_wqe_data_seg {scalar_t__ addr; void* lkey; scalar_t__ byte_count; } ;
struct mlx5_rwqe_sig {int dummy; } ;
struct TYPE_6__ {int head; int wqe_cnt; int max_gs; int wqe_shift; int lock; int * wrid; } ;
struct mlx5_qp {int wq_sig; TYPE_3__ rq; void** db; TYPE_1__* ibv_qp; } ;
struct ibv_recv_wr {int num_sge; int wr_id; TYPE_2__* sg_list; struct ibv_recv_wr* next; } ;
struct ibv_qp {scalar_t__ qp_type; scalar_t__ state; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_4__ {int recv_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct mlx5_wqe_data_seg* FUNC_0 (struct mlx5_qp*,int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mlx5_rwqe_sig*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (struct mlx5_wqe_data_seg*,TYPE_2__*,int ) ;
 int FUNC_8 (struct mlx5_qp*,struct mlx5_rwqe_sig*,int,int) ;
 int FUNC_9 (int ) ;
 struct mlx5_qp* FUNC_10 (struct ibv_qp*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct ibv_qp *VAR_6, struct ibv_recv_wr *VAR_7,
     struct ibv_recv_wr **VAR_8)
{
 struct mlx5_qp *VAR_9 = FUNC_10(VAR_6);
 struct mlx5_wqe_data_seg *VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 struct mlx5_rwqe_sig *VAR_16;

 FUNC_4(&VAR_9->rq.lock);

 VAR_13 = VAR_9->rq.head & (VAR_9->rq.wqe_cnt - 1);

 for (VAR_12 = 0; VAR_7; ++VAR_12, VAR_7 = VAR_7->next) {
  if (FUNC_12(FUNC_6(&VAR_9->rq, VAR_12,
           FUNC_9(VAR_9->ibv_qp->recv_cq)))) {
   VAR_11 = VAR_1;
   *VAR_8 = VAR_7;
   goto out;
  }

  if (FUNC_12(VAR_7->num_sge > VAR_9->rq.max_gs)) {
   VAR_11 = VAR_0;
   *VAR_8 = VAR_7;
   goto out;
  }

  VAR_10 = FUNC_0(VAR_9, VAR_13);
  VAR_16 = (struct mlx5_rwqe_sig *)VAR_10;
  if (FUNC_12(VAR_9->wq_sig)) {
   FUNC_3(VAR_16, 0, 1 << VAR_9->rq.wqe_shift);
   ++VAR_10;
  }

  for (VAR_14 = 0, VAR_15 = 0; VAR_14 < VAR_7->num_sge; ++VAR_14) {
   if (FUNC_12(!VAR_7->sg_list[VAR_14].length))
    continue;
   FUNC_7(VAR_10 + VAR_15++, VAR_7->sg_list + VAR_14, 0);
  }

  if (VAR_15 < VAR_9->rq.max_gs) {
   VAR_10[VAR_15].byte_count = 0;
   VAR_10[VAR_15].lkey = FUNC_1(VAR_4);
   VAR_10[VAR_15].addr = 0;
  }

  if (FUNC_12(VAR_9->wq_sig))
   FUNC_8(VAR_9, VAR_16, (VAR_7->num_sge + 1) << 4,
        VAR_9->rq.head & 0xffff);

  VAR_9->rq.wrid[VAR_13] = VAR_7->wr_id;

  VAR_13 = (VAR_13 + 1) & (VAR_9->rq.wqe_cnt - 1);
 }

out:
 if (FUNC_2(VAR_12)) {
  VAR_9->rq.head += VAR_12;





  FUNC_11();
  if (FUNC_2(!(VAR_6->qp_type == VAR_3 &&
        VAR_6->state < VAR_2)))
   VAR_9->db[VAR_5] = FUNC_1(VAR_9->rq.head & 0xffff);
 }

 FUNC_5(&VAR_9->rq.lock);

 return VAR_11;
}
