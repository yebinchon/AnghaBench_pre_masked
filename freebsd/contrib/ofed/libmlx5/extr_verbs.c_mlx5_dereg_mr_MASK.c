
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_mr {int dummy; } ;
struct ibv_mr {int dummy; } ;


 int FUNC_0 (struct mlx5_mr*) ;
 int FUNC_1 (struct ibv_mr*) ;
 struct mlx5_mr* FUNC_2 (struct ibv_mr*) ;

int FUNC_3(struct ibv_mr *VAR_0)
{
 int VAR_1;
 struct mlx5_mr *VAR_2 = FUNC_2(VAR_0);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_2);
 return 0;
}
