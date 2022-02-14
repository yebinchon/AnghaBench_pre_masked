
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tp_flags; scalar_t__ tp_idle; scalar_t__ tp_current; scalar_t__ tp_maximum; int tp_mutex; int tp_workcv; int tp_njobs; TYPE_2__* tp_tail; TYPE_2__* tp_head; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_7__ {void (* tpj_func ) (void*) ;struct TYPE_7__* tpj_next; void* tpj_arg; } ;
typedef TYPE_2__ tpool_job_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(tpool_t *VAR_1, void (*VAR_2)(void *), void *VAR_3)
{
 tpool_job_t *VAR_4;

 if ((VAR_4 = FUNC_0(1, sizeof (*VAR_4))) == ((void*)0))
  return (-1);
 VAR_4->tpj_next = ((void*)0);
 VAR_4->tpj_func = VAR_2;
 VAR_4->tpj_arg = VAR_3;

 FUNC_3(&VAR_1->tp_mutex);

 if (VAR_1->tp_head == ((void*)0))
  VAR_1->tp_head = VAR_4;
 else
  VAR_1->tp_tail->tpj_next = VAR_4;
 VAR_1->tp_tail = VAR_4;
 VAR_1->tp_njobs++;

 if (!(VAR_1->tp_flags & VAR_0)) {
  if (VAR_1->tp_idle > 0)
   (void) FUNC_2(&VAR_1->tp_workcv);
  else if (VAR_1->tp_current < VAR_1->tp_maximum &&
      FUNC_1(VAR_1) == 0)
   VAR_1->tp_current++;
 }

 FUNC_4(&VAR_1->tp_mutex);
 return (0);
}
