
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cqe {int dummy; } ;
struct mlx4_cq {int cons_index; } ;


 struct mlx4_cqe* FUNC_0 (struct mlx4_cq*,int ) ;

__attribute__((used)) static struct mlx4_cqe *FUNC_1(struct mlx4_cq *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->cons_index);
}
