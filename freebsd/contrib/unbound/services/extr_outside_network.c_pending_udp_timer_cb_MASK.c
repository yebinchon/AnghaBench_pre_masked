
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pending {TYPE_1__* pc; TYPE_2__* timer; int (* cb ) (int ,int ,int ,int *) ;int cb_arg; struct outside_network* outnet; } ;
struct outside_network {int delay_tv; int udp_wait_first; scalar_t__ delayclose; } ;
struct TYPE_4__ {int * callback; } ;
struct TYPE_3__ {int cp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int (*) (int ,int ,int ,int *)) ;
 int FUNC_3 (struct outside_network*) ;
 int FUNC_4 (struct outside_network*,struct pending*) ;
 int VAR_2 ;
 int FUNC_5 (struct outside_network*,TYPE_1__*) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,char*) ;

void
FUNC_8(void *VAR_3)
{
 struct pending* VAR_4 = (struct pending*)VAR_3;
 struct outside_network* VAR_5 = VAR_4->outnet;

 FUNC_7(VAR_1, "timeout udp");
 if(VAR_4->cb) {
  FUNC_1(FUNC_2(VAR_4->cb));
  (void)(*VAR_4->cb)(VAR_4->pc->cp, VAR_4->cb_arg, VAR_0, ((void*)0));
 }




 if(VAR_5->delayclose && !VAR_5->udp_wait_first) {
  VAR_4->cb = ((void*)0);
  VAR_4->timer->callback = &VAR_2;
  FUNC_0(VAR_4->timer, &VAR_5->delay_tv);
  return;
 }
 FUNC_5(VAR_5, VAR_4->pc);
 FUNC_4(VAR_5, VAR_4);
 FUNC_3(VAR_5);
}
