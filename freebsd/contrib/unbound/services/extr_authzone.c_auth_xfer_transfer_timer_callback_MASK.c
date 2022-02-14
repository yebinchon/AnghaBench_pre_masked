
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module_env {TYPE_1__* outnet; } ;
struct auth_xfer {TYPE_3__* task_transfer; int lock; } ;
struct TYPE_7__ {scalar_t__ ixfr_possible_timeout_count; int ixfr_fail; int * cp; TYPE_2__* master; scalar_t__ on_ixfr; struct module_env* env; } ;
struct TYPE_6__ {int host; } ;
struct TYPE_5__ {scalar_t__ want_to_quit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct auth_xfer*) ;
 int FUNC_7 (struct auth_xfer*,struct module_env*) ;

void
FUNC_8(void* VAR_2)
{
 struct auth_xfer* VAR_3 = (struct auth_xfer*)VAR_2;
 struct module_env* VAR_4;
 int VAR_5 = 1;
 FUNC_4(VAR_3->task_transfer);
 FUNC_2(&VAR_3->lock);
 VAR_4 = VAR_3->task_transfer->env;
 if(VAR_4->outnet->want_to_quit) {
  FUNC_3(&VAR_3->lock);
  return;
 }

 FUNC_5(VAR_1, "xfr stopped, connection timeout to %s",
  VAR_3->task_transfer->master->host);


 if(VAR_3->task_transfer->on_ixfr) {
  VAR_3->task_transfer->ixfr_possible_timeout_count++;
  if(VAR_3->task_transfer->ixfr_possible_timeout_count >=
   VAR_0) {
   FUNC_5(VAR_1, "xfr to %s, fallback "
    "from IXFR to AXFR (because of timeouts)",
    VAR_3->task_transfer->master->host);
   VAR_3->task_transfer->ixfr_fail = 1;
   VAR_5 = 0;
  }
 }


 FUNC_0(VAR_3->task_transfer);
 FUNC_1(VAR_3->task_transfer->cp);
 VAR_3->task_transfer->cp = ((void*)0);
 if(VAR_5)
  FUNC_6(VAR_3);
 FUNC_7(VAR_3, VAR_4);
}
