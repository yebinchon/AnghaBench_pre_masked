
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_rq_param {int dummy; } ;
struct mlx5e_rq {int dummy; } ;
struct TYPE_2__ {int enabled; } ;
struct mlx5e_channel {TYPE_1__ rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_channel*,struct mlx5e_rq_param*,struct mlx5e_rq*) ;
 int FUNC_1 (struct mlx5e_rq*) ;
 int FUNC_2 (struct mlx5e_rq*) ;
 int FUNC_3 (struct mlx5e_rq*,struct mlx5e_rq_param*) ;
 int FUNC_4 (struct mlx5e_rq*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct mlx5e_channel *VAR_2,
    struct mlx5e_rq_param *VAR_3,
    struct mlx5e_rq *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return (VAR_5);

 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5)
  goto err_destroy_rq;

 VAR_5 = FUNC_4(VAR_4, VAR_1, VAR_0);
 if (VAR_5)
  goto err_disable_rq;

 VAR_2->rq.enabled = 1;

 return (0);

err_disable_rq:
 FUNC_2(VAR_4);
err_destroy_rq:
 FUNC_1(VAR_4);

 return (VAR_5);
}
