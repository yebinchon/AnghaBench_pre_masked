
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_qp {int * bf; } ;
struct mlx5_context {int * bfs; } ;
struct ibv_context {int dummy; } ;


 struct mlx5_context* FUNC_0 (struct ibv_context*) ;

__attribute__((used)) static void FUNC_1(struct ibv_context *VAR_0, struct mlx5_qp *VAR_1,
       int VAR_2)
{
 struct mlx5_context *VAR_3 = FUNC_0(VAR_0);

 VAR_1->bf = &VAR_3->bfs[VAR_2];
}
