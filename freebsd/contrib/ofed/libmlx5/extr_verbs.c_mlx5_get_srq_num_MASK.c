
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx5_srq {int srqn; } ;
struct ibv_srq {int dummy; } ;


 struct mlx5_srq* FUNC_0 (struct ibv_srq*) ;

int FUNC_1(struct ibv_srq *VAR_0, uint32_t *VAR_1)
{
 struct mlx5_srq *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->srqn;

 return 0;
}
