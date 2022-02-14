
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tp_current; int tp_mutex; int tp_workcv; int tp_flags; } ;
typedef TYPE_1__ tpool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(tpool_t *VAR_2)
{

 FUNC_2(&VAR_2->tp_mutex);
 if (VAR_2->tp_current == 0) {

  FUNC_3(&VAR_2->tp_mutex);
  FUNC_0(VAR_2);
 } else {

  VAR_2->tp_flags |= VAR_0;
  VAR_2->tp_flags &= ~VAR_1;
  (void) FUNC_1(&VAR_2->tp_workcv);
  FUNC_3(&VAR_2->tp_mutex);
 }
}
