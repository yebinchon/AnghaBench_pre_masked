
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tp_mutex; TYPE_2__* tp_active; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_5__ {scalar_t__ tpa_tid; struct TYPE_5__* tpa_next; } ;
typedef TYPE_2__ tpool_active_t ;
typedef scalar_t__ pthread_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

int
FUNC_3(tpool_t *VAR_0)
{
 pthread_t VAR_1 = FUNC_2();
 tpool_active_t *VAR_2;

 FUNC_0(&VAR_0->tp_mutex);
 for (VAR_2 = VAR_0->tp_active; VAR_2; VAR_2 = VAR_2->tpa_next) {
  if (VAR_2->tpa_tid == VAR_1) {
   FUNC_1(&VAR_0->tp_mutex);
   return (1);
  }
 }
 FUNC_1(&VAR_0->tp_mutex);
 return (0);
}
