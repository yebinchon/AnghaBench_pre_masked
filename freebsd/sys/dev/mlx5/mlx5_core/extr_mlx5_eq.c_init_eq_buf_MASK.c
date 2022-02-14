
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_eqe {int owner; } ;
struct mlx5_eq {int nent; } ;


 int VAR_0 ;
 struct mlx5_eqe* FUNC_0 (struct mlx5_eq*,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5_eq *VAR_1)
{
 struct mlx5_eqe *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nent; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_3);
  VAR_2->owner = VAR_0;
 }
}
