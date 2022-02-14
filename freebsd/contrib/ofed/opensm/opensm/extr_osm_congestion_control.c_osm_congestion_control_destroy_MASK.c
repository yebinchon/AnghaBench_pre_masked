
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int osm_madw_t ;
struct TYPE_3__ {int log; int sig_mads_on_wire_continue; int outstanding_mads_done_event; int cc_poller_wakeup; int mad_queue_lock; int mad_pool; int mad_queue; int cc_poller; int thread_state; } ;
typedef TYPE_1__ osm_congestion_control_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

void FUNC_11(osm_congestion_control_t * VAR_1)
{
 osm_madw_t *VAR_2;

 FUNC_0(VAR_1->log);

 VAR_1->thread_state = VAR_0;

 FUNC_3(&VAR_1->sig_mads_on_wire_continue);
 FUNC_3(&VAR_1->cc_poller_wakeup);

 FUNC_9(&VAR_1->cc_poller);

 FUNC_6(&VAR_1->mad_queue_lock);

 while (!FUNC_4(&VAR_1->mad_queue)) {
  VAR_2 = (osm_madw_t *) FUNC_5(&VAR_1->mad_queue);
  FUNC_10(VAR_1->mad_pool, VAR_2);
 }

 FUNC_8(&VAR_1->mad_queue_lock);

 FUNC_7(&VAR_1->mad_queue_lock);

 FUNC_2(&VAR_1->cc_poller_wakeup);
 FUNC_2(&VAR_1->outstanding_mads_done_event);
 FUNC_2(&VAR_1->sig_mads_on_wire_continue);

 FUNC_1(VAR_1->log);
}
