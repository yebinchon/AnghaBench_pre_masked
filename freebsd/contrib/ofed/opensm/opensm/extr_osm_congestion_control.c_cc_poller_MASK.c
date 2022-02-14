
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int osm_madw_t ;
struct TYPE_3__ {scalar_t__ thread_state; int log; int cc_poller_wakeup; int mad_queue; int mad_queue_lock; } ;
typedef TYPE_1__ osm_congestion_control_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_4)
{
 osm_congestion_control_t *VAR_5 = VAR_4;
 osm_madw_t *VAR_6;

 FUNC_0(VAR_5->log);

 if (VAR_5->thread_state == VAR_1)
  VAR_5->thread_state = VAR_2;

 while (VAR_5->thread_state == VAR_2) {
  FUNC_6(&VAR_5->mad_queue_lock);

  VAR_6 = (osm_madw_t *) FUNC_5(&VAR_5->mad_queue);

  FUNC_7(&VAR_5->mad_queue_lock);

  if (VAR_6 != (osm_madw_t *) FUNC_4(&VAR_5->mad_queue))
   FUNC_2(VAR_5, VAR_6);
  else
   FUNC_3(&VAR_5->cc_poller_wakeup,
      VAR_0, VAR_3);
 }

 FUNC_1(VAR_5->log);
}
