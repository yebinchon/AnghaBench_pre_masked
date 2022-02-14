
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_pd {int dummy; } ;
struct mlx5_pd {struct ibv_pd ibv_pd; int pdn; } ;
struct mlx5_alloc_pd_resp {int pdn; int ibv_resp; } ;
struct ibv_context {int dummy; } ;
struct ibv_alloc_pd {int dummy; } ;


 struct mlx5_pd* FUNC_0 (int,int) ;
 int FUNC_1 (struct mlx5_pd*) ;
 scalar_t__ FUNC_2 (struct ibv_context*,struct ibv_pd*,struct ibv_alloc_pd*,int,int *,int) ;

struct ibv_pd *FUNC_3(struct ibv_context *VAR_0)
{
 struct ibv_alloc_pd VAR_1;
 struct mlx5_alloc_pd_resp VAR_2;
 struct mlx5_pd *VAR_3;

 VAR_3 = FUNC_0(1, sizeof *VAR_3);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_2(VAR_0, &VAR_3->ibv_pd, &VAR_1, sizeof VAR_1,
        &VAR_2.ibv_resp, sizeof VAR_2)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 VAR_3->pdn = VAR_2.pdn;

 return &VAR_3->ibv_pd;
}
