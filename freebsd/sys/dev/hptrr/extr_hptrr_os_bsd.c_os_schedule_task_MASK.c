
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ta_context; } ;
struct TYPE_6__ {scalar_t__ next; } ;
struct TYPE_5__ {TYPE_4__ worker; TYPE_2__* tasks; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef TYPE_2__ OSM_TASK ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;

void FUNC_2(void *VAR_0, OSM_TASK *VAR_1)
{
 PVBUS_EXT VAR_2 = VAR_0;

 FUNC_0(VAR_1->next==0);

 if (VAR_2->tasks==0)
  VAR_2->tasks = VAR_1;
 else {
  OSM_TASK *VAR_3 = VAR_2->tasks;
  while (VAR_3->next) VAR_3 = VAR_3->next;
  VAR_3->next = VAR_1;
 }

 if (VAR_2->worker.ta_context)
  FUNC_1(&VAR_2->worker);
}
