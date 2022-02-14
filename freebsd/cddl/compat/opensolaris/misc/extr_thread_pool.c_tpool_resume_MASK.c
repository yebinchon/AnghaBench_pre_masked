
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tp_flags; int tp_njobs; int tp_idle; scalar_t__ tp_current; scalar_t__ tp_maximum; int tp_mutex; int tp_workcv; } ;
typedef TYPE_1__ tpool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(tpool_t *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_1->tp_mutex);
 if (!(VAR_1->tp_flags & VAR_0)) {
  FUNC_3(&VAR_1->tp_mutex);
  return;
 }
 VAR_1->tp_flags &= ~VAR_0;
 (void) FUNC_1(&VAR_1->tp_workcv);
 VAR_2 = VAR_1->tp_njobs - VAR_1->tp_idle;
 while (VAR_2-- > 0 && VAR_1->tp_current < VAR_1->tp_maximum) {
  if (FUNC_0(VAR_1) != 0)
   break;
  VAR_1->tp_current++;
 }
 FUNC_3(&VAR_1->tp_mutex);
}
