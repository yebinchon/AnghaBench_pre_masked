
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cqe {int dummy; } ;
struct mlx4_cq {int cur_qp; } ;


 int FUNC_0 (struct mlx4_cq*,struct mlx4_cqe*,int *,int *,int) ;

__attribute__((used)) static inline int FUNC_1(struct mlx4_cq *VAR_0,
          struct mlx4_cqe *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, &VAR_0->cur_qp, ((void*)0), 1);
}
