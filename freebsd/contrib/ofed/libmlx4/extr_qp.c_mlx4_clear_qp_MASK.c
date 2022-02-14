
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mlx4_context {int num_qps; int qp_table_shift; int qp_table_mask; TYPE_1__* qp_table; } ;
struct TYPE_2__ {int ** table; int refcnt; } ;


 int FUNC_0 (int **) ;

void FUNC_1(struct mlx4_context *VAR_0, uint32_t VAR_1)
{
 int VAR_2 = (VAR_1 & (VAR_0->num_qps - 1)) >> VAR_0->qp_table_shift;

 if (!--VAR_0->qp_table[VAR_2].refcnt)
  FUNC_0(VAR_0->qp_table[VAR_2].table);
 else
  VAR_0->qp_table[VAR_2].table[VAR_1 & VAR_0->qp_table_mask] = ((void*)0);
}
