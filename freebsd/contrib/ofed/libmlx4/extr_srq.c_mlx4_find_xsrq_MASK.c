
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mlx4_xsrq_table {int num_xsrq; int shift; int mask; TYPE_1__* xsrq_table; } ;
struct mlx4_srq {int dummy; } ;
struct TYPE_2__ {struct mlx4_srq** table; scalar_t__ refcnt; } ;



struct mlx4_srq *FUNC_0(struct mlx4_xsrq_table *VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_1 & (VAR_0->num_xsrq - 1)) >> VAR_0->shift;
 if (VAR_0->xsrq_table[VAR_2].refcnt)
  return VAR_0->xsrq_table[VAR_2].table[VAR_1 & VAR_0->mask];

 return ((void*)0);
}
