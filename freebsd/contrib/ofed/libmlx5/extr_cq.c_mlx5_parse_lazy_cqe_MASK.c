
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cqe64 {int dummy; } ;
struct mlx5_cq {int cur_srq; int cur_rsc; } ;


 int FUNC_0 (struct mlx5_cq*,struct mlx5_cqe64*,void*,int *,int *,int *,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct mlx5_cq *VAR_0,
          struct mlx5_cqe64 *VAR_1,
          void *VAR_2, int VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_0->cur_rsc, &VAR_0->cur_srq, ((void*)0), VAR_3, 1);
}
