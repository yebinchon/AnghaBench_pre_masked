
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mtx; int watchdog; } ;
struct mlx5e_channel {TYPE_1__* sq; TYPE_2__ rq; } ;
struct TYPE_3__ {int comp_lock; int lock; int cev_callout; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct mlx5e_channel *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->rq.watchdog);

 FUNC_1(&VAR_1->rq.mtx);

 for (VAR_2 = 0; VAR_2 != VAR_0; VAR_2++) {
  FUNC_0(&VAR_1->sq[VAR_2].cev_callout);
  FUNC_1(&VAR_1->sq[VAR_2].lock);
  FUNC_1(&VAR_1->sq[VAR_2].comp_lock);
 }
}
