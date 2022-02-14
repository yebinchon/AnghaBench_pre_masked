
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mlx5_qp {int dummy; } ;
struct mlx5_context {TYPE_1__* qp_table; } ;
struct TYPE_2__ {struct mlx5_qp** table; scalar_t__ refcnt; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

struct mlx5_qp *FUNC_0(struct mlx5_context *VAR_2, uint32_t VAR_3)
{
 int VAR_4 = VAR_3 >> VAR_1;

 if (VAR_2->qp_table[VAR_4].refcnt)
  return VAR_2->qp_table[VAR_4].table[VAR_3 & VAR_0];
 else
  return ((void*)0);
}
