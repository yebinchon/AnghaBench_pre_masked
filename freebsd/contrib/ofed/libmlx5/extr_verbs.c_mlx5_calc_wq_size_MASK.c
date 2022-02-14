
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_3__ {int offset; } ;
struct mlx5_qp {TYPE_2__ rq; TYPE_1__ sq; } ;
struct mlx5_context {int dummy; } ;
struct ibv_qp_init_attr_ex {int dummy; } ;


 int FUNC_0 (struct mlx5_context*,struct ibv_qp_init_attr_ex*,struct mlx5_qp*) ;
 int FUNC_1 (struct mlx5_context*,struct ibv_qp_init_attr_ex*,struct mlx5_qp*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_context *VAR_0,
        struct ibv_qp_init_attr_ex *VAR_1,
        struct mlx5_qp *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 += VAR_3;

 VAR_2->sq.offset = VAR_3;
 VAR_2->rq.offset = 0;

 return VAR_4;
}
