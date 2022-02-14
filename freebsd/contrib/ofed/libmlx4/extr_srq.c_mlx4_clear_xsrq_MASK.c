
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mlx4_xsrq_table {int num_xsrq; int shift; int mask; int mutex; TYPE_1__* xsrq_table; } ;
struct TYPE_2__ {int ** table; scalar_t__ refcnt; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx4_xsrq_table *VAR_0, uint32_t VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_1 & (VAR_0->num_xsrq - 1)) >> VAR_0->shift;
 FUNC_1(&VAR_0->mutex);

 if (--VAR_0->xsrq_table[VAR_2].refcnt)
  VAR_0->xsrq_table[VAR_2].table[VAR_1 & VAR_0->mask] = ((void*)0);
 else
  FUNC_0(VAR_0->xsrq_table[VAR_2].table);

 FUNC_2(&VAR_0->mutex);
}
