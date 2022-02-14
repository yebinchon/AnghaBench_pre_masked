
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int rsn; } ;
struct mlx5_srq {struct mlx5_srq* wrid; int buf; int db; int srqn; TYPE_1__ rsc; } ;
struct mlx5_context {scalar_t__ cqe_version; } ;
struct ibv_srq {int context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5_srq*) ;
 int FUNC_1 (struct ibv_srq*) ;
 int FUNC_2 (struct mlx5_context*,int ) ;
 int FUNC_3 (struct mlx5_context*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_context*,int ) ;
 struct mlx5_context* FUNC_6 (int ) ;
 struct mlx5_srq* FUNC_7 (struct ibv_srq*) ;

int FUNC_8(struct ibv_srq *VAR_1)
{
 int VAR_2;
 struct mlx5_srq *VAR_3 = FUNC_7(VAR_1);
 struct mlx5_context *VAR_4 = FUNC_6(VAR_1->context);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 if (VAR_4->cqe_version && VAR_3->rsc.type == VAR_0)
  FUNC_3(VAR_4, VAR_3->rsc.rsn);
 else
  FUNC_2(VAR_4, VAR_3->srqn);

 FUNC_5(VAR_4, VAR_3->db);
 FUNC_4(&VAR_3->buf);
 FUNC_0(VAR_3->wrid);
 FUNC_0(VAR_3);

 return 0;
}
