
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ emulate_tgt_wqe_timeout; } ;
struct TYPE_6__ {int os; scalar_t__ in_active_wqe_timer; int wqe_timer; int active_wqe_timer_shutdown; TYPE_1__ config; } ;
typedef TYPE_2__ ocs_hw_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(ocs_hw_t *VAR_1)
{
 uint32_t VAR_2 = 100;

 if (VAR_1->config.emulate_tgt_wqe_timeout) {

  VAR_1->active_wqe_timer_shutdown = VAR_0;


  FUNC_0(&VAR_1->wqe_timer);


  while (VAR_1->in_active_wqe_timer && VAR_2) {




   FUNC_1(VAR_1);
   VAR_2--;
  }

  if (VAR_2 == 0) {
   FUNC_2(VAR_1->os, "Failed to shutdown active wqe timer\n");
  }
 }
}
