
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mlx5_qp {int dummy; } ;
struct mlx5_context {TYPE_1__* qp_table; } ;
struct TYPE_2__ {struct mlx5_qp** table; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_qp** FUNC_0 (int,int) ;

int FUNC_1(struct mlx5_context *VAR_2, uint32_t VAR_3, struct mlx5_qp *VAR_4)
{
 int VAR_5 = VAR_3 >> VAR_1;

 if (!VAR_2->qp_table[VAR_5].refcnt) {
  VAR_2->qp_table[VAR_5].table = FUNC_0(VAR_0 + 1,
         sizeof(struct mlx5_qp *));
  if (!VAR_2->qp_table[VAR_5].table)
   return -1;
 }

 ++VAR_2->qp_table[VAR_5].refcnt;
 VAR_2->qp_table[VAR_5].table[VAR_3 & VAR_0] = VAR_4;
 return 0;
}
