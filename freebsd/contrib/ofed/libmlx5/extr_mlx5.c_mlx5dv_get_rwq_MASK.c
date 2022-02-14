
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dv_rwq {int stride; int wqe_cnt; int dbrec; int buf; scalar_t__ comp_mask; } ;
struct TYPE_2__ {int wqe_shift; int wqe_cnt; } ;
struct mlx5_rwq {TYPE_1__ rq; int recv_db; int pbuff; } ;
struct ibv_wq {int dummy; } ;


 struct mlx5_rwq* FUNC_0 (struct ibv_wq*) ;

__attribute__((used)) static int FUNC_1(struct ibv_wq *VAR_0,
     struct mlx5dv_rwq *VAR_1)
{
 struct mlx5_rwq *VAR_2 = FUNC_0(VAR_0);

 VAR_1->comp_mask = 0;
 VAR_1->buf = VAR_2->pbuff;
 VAR_1->dbrec = VAR_2->recv_db;
 VAR_1->wqe_cnt = VAR_2->rq.wqe_cnt;
 VAR_1->stride = 1 << VAR_2->rq.wqe_shift;

 return 0;
}
