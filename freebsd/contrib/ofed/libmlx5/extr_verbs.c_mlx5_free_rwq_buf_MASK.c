
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wrid; } ;
struct mlx5_rwq {TYPE_1__ rq; int buf; } ;
struct mlx5_context {int dummy; } ;
struct ibv_context {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_context*,int *) ;
 struct mlx5_context* FUNC_2 (struct ibv_context*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_rwq *VAR_0, struct ibv_context *VAR_1)
{
 struct mlx5_context *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2, &VAR_0->buf);
 FUNC_0(VAR_0->rq.wrid);
}
