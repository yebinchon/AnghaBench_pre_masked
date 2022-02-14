
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_cq {int wq; } ;
struct mlx5_cqe64 {int op_own; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 struct mlx5_cqe64* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

struct mlx5_cqe64 *
FUNC_4(struct mlx5e_cq *VAR_1)
{
 struct mlx5_cqe64 *VAR_2;

 VAR_2 = FUNC_2(&VAR_1->wq, FUNC_1(&VAR_1->wq));

 if ((VAR_2->op_own ^ FUNC_3(&VAR_1->wq)) & VAR_0)
  return (((void*)0));


 FUNC_0();

 return (VAR_2);
}
