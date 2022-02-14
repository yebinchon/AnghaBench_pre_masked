
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mlx4_xsrq_table {int num_xsrq; int shift; int mask; int mutex; TYPE_1__* xsrq_table; } ;
struct mlx4_srq {int dummy; } ;
struct TYPE_2__ {struct mlx4_srq** table; int refcnt; } ;


 struct mlx4_srq** FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx4_xsrq_table *VAR_0, uint32_t VAR_1,
      struct mlx4_srq *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 VAR_3 = (VAR_1 & (VAR_0->num_xsrq - 1)) >> VAR_0->shift;
 FUNC_1(&VAR_0->mutex);
 if (!VAR_0->xsrq_table[VAR_3].refcnt) {
  VAR_0->xsrq_table[VAR_3].table = FUNC_0(VAR_0->mask + 1,
            sizeof(struct mlx4_srq *));
  if (!VAR_0->xsrq_table[VAR_3].table) {
   VAR_4 = -1;
   goto out;
  }
 }

 VAR_0->xsrq_table[VAR_3].refcnt++;
 VAR_0->xsrq_table[VAR_3].table[VAR_1 & VAR_0->mask] = VAR_2;

out:
 FUNC_2(&VAR_0->mutex);
 return VAR_4;
}
