
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mlx4_qp {int dummy; } ;
struct mlx4_context {int num_qps; int qp_table_shift; int qp_table_mask; TYPE_1__* qp_table; } ;
struct TYPE_2__ {struct mlx4_qp** table; int refcnt; } ;


 struct mlx4_qp** FUNC_0 (int,int) ;

int FUNC_1(struct mlx4_context *VAR_0, uint32_t VAR_1, struct mlx4_qp *VAR_2)
{
 int VAR_3 = (VAR_1 & (VAR_0->num_qps - 1)) >> VAR_0->qp_table_shift;

 if (!VAR_0->qp_table[VAR_3].refcnt) {
  VAR_0->qp_table[VAR_3].table = FUNC_0(VAR_0->qp_table_mask + 1,
         sizeof (struct mlx4_qp *));
  if (!VAR_0->qp_table[VAR_3].table)
   return -1;
 }

 ++VAR_0->qp_table[VAR_3].refcnt;
 VAR_0->qp_table[VAR_3].table[VAR_1 & VAR_0->qp_table_mask] = VAR_2;
 return 0;
}
