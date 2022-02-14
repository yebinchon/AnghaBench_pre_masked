
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
struct TYPE_4__ {int cq; } ;
struct mlx5_rwq {int wq_sig; TYPE_3__ rq; void** recv_db; TYPE_1__ wq; } ;
struct ibv_wq {int dummy; } ;
struct ibv_recv_wr {int num_sge; int wr_id; TYPE_2__* sg_list; struct ibv_recv_wr* next; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_wqe_data_seg* FUNC_0 (struct mlx5_rwq*,int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct mlx5_rwqe_sig*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (struct mlx5_wqe_data_seg*,TYPE_2__*,int ) ;
 int FUNC_8 (struct mlx5_rwq*,struct mlx5_rwqe_sig*,int,int) ;
 int FUNC_9 (int ) ;
 struct mlx5_rwq* FUNC_10 (struct ibv_wq*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct ibv_wq *VAR_3, struct ibv_recv_wr *VAR_4,
        struct ibv_recv_wr **VAR_5)
{
 struct mlx5_rwq *VAR_6 = FUNC_10(VAR_3);
 struct mlx5_wqe_data_seg *VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;
 struct mlx5_rwqe_sig *VAR_13;

 FUNC_4(&VAR_6->rq.lock);

 VAR_10 = VAR_6->rq.head & (VAR_6->rq.wqe_cnt - 1);

 for (VAR_9 = 0; VAR_4; ++VAR_9, VAR_4 = VAR_4->next) {
  if (FUNC_12(FUNC_6(&VAR_6->rq, VAR_9,
           FUNC_9(VAR_6->wq.cq)))) {
   VAR_8 = VAR_1;
   *VAR_5 = VAR_4;
   goto out;
  }

  if (FUNC_12(VAR_4->num_sge > VAR_6->rq.max_gs)) {
   VAR_8 = VAR_0;
   *VAR_5 = VAR_4;
   goto out;
  }

  VAR_7 = FUNC_0(VAR_6, VAR_10);
  VAR_13 = (struct mlx5_rwqe_sig *)VAR_7;
  if (FUNC_12(VAR_6->wq_sig)) {
   FUNC_3(VAR_13, 0, 1 << VAR_6->rq.wqe_shift);
   ++VAR_7;
  }

  for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_4->num_sge; ++VAR_11) {
   if (FUNC_12(!VAR_4->sg_list[VAR_11].length))
    continue;
   FUNC_7(VAR_7 + VAR_12++, VAR_4->sg_list + VAR_11, 0);
  }

  if (VAR_12 < VAR_6->rq.max_gs) {
   VAR_7[VAR_12].byte_count = 0;
   VAR_7[VAR_12].lkey = FUNC_1(VAR_2);
   VAR_7[VAR_12].addr = 0;
  }

  if (FUNC_12(VAR_6->wq_sig))
   FUNC_8(VAR_6, VAR_13, (VAR_4->num_sge + 1) << 4,
           VAR_6->rq.head & 0xffff);

  VAR_6->rq.wrid[VAR_10] = VAR_4->wr_id;

  VAR_10 = (VAR_10 + 1) & (VAR_6->rq.wqe_cnt - 1);
 }

out:
 if (FUNC_2(VAR_9)) {
  VAR_6->rq.head += VAR_9;




  FUNC_11();
  *(VAR_6->recv_db) = FUNC_1(VAR_6->rq.head & 0xffff);
 }

 FUNC_5(&VAR_6->rq.lock);

 return VAR_8;
}
