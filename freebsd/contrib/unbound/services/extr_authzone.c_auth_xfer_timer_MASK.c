
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module_env {scalar_t__* now; TYPE_1__* outnet; } ;
struct auth_xfer {scalar_t__ lease_time; scalar_t__ expiry; int lock; int zone_expired; scalar_t__ have_zone; TYPE_2__* task_nextprobe; } ;
struct TYPE_4__ {struct module_env* env; } ;
struct TYPE_3__ {scalar_t__ want_to_quit; } ;


 int FUNC_0 (struct auth_xfer*,struct module_env*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct auth_xfer*) ;
 int FUNC_5 (struct auth_xfer*,struct module_env*,int *) ;

void
FUNC_6(void* VAR_0)
{
 struct auth_xfer* VAR_1 = (struct auth_xfer*)VAR_0;
 struct module_env* VAR_2;
 FUNC_3(VAR_1->task_nextprobe);
 FUNC_1(&VAR_1->lock);
 VAR_2 = VAR_1->task_nextprobe->env;
 if(VAR_2->outnet->want_to_quit) {
  FUNC_2(&VAR_1->lock);
  return;
 }


 if(VAR_1->have_zone && !VAR_1->zone_expired &&
    *VAR_2->now >= VAR_1->lease_time + VAR_1->expiry) {
  FUNC_2(&VAR_1->lock);
  FUNC_0(VAR_1, VAR_2, 1);
  FUNC_1(&VAR_1->lock);
 }

 FUNC_4(VAR_1);

 if(!FUNC_5(VAR_1, VAR_2, ((void*)0))) {

  FUNC_2(&VAR_1->lock);
 }
}
