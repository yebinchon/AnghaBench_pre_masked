
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_qp {void* sq_start; } ;


 int VAR_0 ;

void *FUNC_0(struct mlx5_qp *VAR_1, int VAR_2)
{
 return VAR_1->sq_start + (VAR_2 << VAR_0);
}
