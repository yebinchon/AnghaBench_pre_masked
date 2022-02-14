
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; int (* func ) (int ) ;int callout; } ;
typedef TYPE_1__ ocs_timer_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void
FUNC_4(void *VAR_0)
{
 ocs_timer_t *VAR_1 = VAR_0;

 if (FUNC_2(&VAR_1->callout)) {

  return;
 }

 if (!FUNC_0(&VAR_1->callout)) {

  return;
 }

 FUNC_1(&VAR_1->callout);

 if (VAR_1->func) {
  VAR_1->func(VAR_1->data);
 }
}
