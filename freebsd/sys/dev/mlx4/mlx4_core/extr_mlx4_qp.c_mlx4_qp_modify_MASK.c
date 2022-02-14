
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp_context {int dummy; } ;
struct mlx4_qp {int dummy; } ;
struct mlx4_mtt {int dummy; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_qp_state { ____Placeholder_mlx4_qp_state } mlx4_qp_state ;
typedef enum mlx4_qp_optpar { ____Placeholder_mlx4_qp_optpar } mlx4_qp_optpar ;


 int FUNC_0 (struct mlx4_dev*,struct mlx4_mtt*,int,int,struct mlx4_qp_context*,int,int,struct mlx4_qp*,int ) ;

int FUNC_1(struct mlx4_dev *VAR_0, struct mlx4_mtt *VAR_1,
     enum mlx4_qp_state VAR_2, enum mlx4_qp_state VAR_3,
     struct mlx4_qp_context *VAR_4,
     enum mlx4_qp_optpar VAR_5,
     int VAR_6, struct mlx4_qp *VAR_7)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
    VAR_5, VAR_6, VAR_7, 0);
}
