
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eqe {int owner; } ;
struct mlx5_eq {int cons_index; int nent; } ;


 struct mlx5_eqe* FUNC_0 (struct mlx5_eq*,int) ;

__attribute__((used)) static struct mlx5_eqe *FUNC_1(struct mlx5_eq *VAR_0)
{
 struct mlx5_eqe *VAR_1 = FUNC_0(VAR_0, VAR_0->cons_index & (VAR_0->nent - 1));

 return ((VAR_1->owner & 1) ^ !!(VAR_0->cons_index & VAR_0->nent)) ? ((void*)0) : VAR_1;
}
