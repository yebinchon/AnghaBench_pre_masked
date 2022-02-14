
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dv_cq {int uar; int dbrec; int buf; int cqe_size; scalar_t__ cqe_cnt; int cqn; scalar_t__ comp_mask; } ;
struct TYPE_3__ {scalar_t__ cqe; } ;
struct mlx5_cq {int flags; int dbrec; TYPE_2__* active_buf; int cqe_sz; TYPE_1__ ibv_cq; int cqn; } ;
struct mlx5_context {int uar; } ;
struct ibv_cq {int context; } ;
struct TYPE_4__ {int buf; } ;


 int VAR_0 ;
 struct mlx5_cq* FUNC_0 (struct ibv_cq*) ;
 struct mlx5_context* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ibv_cq *VAR_1,
    struct mlx5dv_cq *VAR_2)
{
 struct mlx5_cq *VAR_3 = FUNC_0(VAR_1);
 struct mlx5_context *VAR_4 = FUNC_1(VAR_1->context);

 VAR_2->comp_mask = 0;
 VAR_2->cqn = VAR_3->cqn;
 VAR_2->cqe_cnt = VAR_3->ibv_cq.cqe + 1;
 VAR_2->cqe_size = VAR_3->cqe_sz;
 VAR_2->buf = VAR_3->active_buf->buf;
 VAR_2->dbrec = VAR_3->dbrec;
 VAR_2->uar = VAR_4->uar;

 VAR_3->flags |= VAR_0;

 return 0;
}
