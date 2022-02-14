
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ah {scalar_t__ kern_ah; } ;
struct ibv_ah {int dummy; } ;


 int FUNC_0 (struct mlx5_ah*) ;
 int FUNC_1 (struct ibv_ah*) ;
 struct mlx5_ah* FUNC_2 (struct ibv_ah*) ;

int FUNC_3(struct ibv_ah *VAR_0)
{
 struct mlx5_ah *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->kern_ah) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_0(VAR_1);
 return 0;
}
