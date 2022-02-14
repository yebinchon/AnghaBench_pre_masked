
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bar_numin; scalar_t__ bar_nthr; int bar_lock; int bar_sem; } ;
typedef TYPE_1__ barrier_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(barrier_t *VAR_0)
{
 FUNC_0(&VAR_0->bar_lock);

 if (++VAR_0->bar_numin < VAR_0->bar_nthr) {
  FUNC_1(&VAR_0->bar_lock);



  FUNC_3(&VAR_0->bar_sem);


  return (0);

 } else {
  int VAR_1;


  VAR_0->bar_numin = 0;
  for (VAR_1 = 1; VAR_1 < VAR_0->bar_nthr; VAR_1++)



   FUNC_2(&VAR_0->bar_sem);

  FUNC_1(&VAR_0->bar_lock);

  return (1);
 }
}
