
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct osm_opensm {int disp; int p_vendor; int mad_pool; int log; int sm; int subn; } ;
typedef int osm_subn_opt_t ;
struct TYPE_6__ {scalar_t__ cc_disp_h; int * log; int cc_poller; int thread_state; int sig_mads_on_wire_continue; int outstanding_mads_done_event; int cc_poller_wakeup; int mad_queue_lock; int mad_queue; int vendor; int trans_id; int * mad_pool; int * sm; int * subn; struct osm_opensm* osm; } ;
typedef TYPE_1__ osm_congestion_control_t ;
typedef scalar_t__ ib_api_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

ib_api_status_t FUNC_9(osm_congestion_control_t * VAR_8,
         struct osm_opensm *VAR_9,
         const osm_subn_opt_t * VAR_10)
{
 ib_api_status_t VAR_11 = VAR_3;

 FUNC_0(&VAR_9->log);

 FUNC_8(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->osm = VAR_9;
 VAR_8->subn = &VAR_9->subn;
 VAR_8->sm = &VAR_9->sm;
 VAR_8->log = &VAR_9->log;
 VAR_8->mad_pool = &VAR_9->mad_pool;
 VAR_8->trans_id = VAR_1;
 VAR_8->vendor = VAR_9->p_vendor;

 VAR_8->cc_disp_h = FUNC_2(&VAR_9->disp, VAR_4,
        VAR_7, VAR_8);
 if (VAR_8->cc_disp_h == VAR_0)
  goto Exit;

 FUNC_5(&VAR_8->mad_queue);

 VAR_11 = FUNC_6(&VAR_8->mad_queue_lock);
 if (VAR_11 != VAR_3)
  goto Exit;

 FUNC_3(&VAR_8->cc_poller_wakeup);
 VAR_11 = FUNC_4(&VAR_8->cc_poller_wakeup, VAR_2);
 if (VAR_11 != VAR_3)
  goto Exit;

 FUNC_3(&VAR_8->outstanding_mads_done_event);
 VAR_11 = FUNC_4(&VAR_8->outstanding_mads_done_event, VAR_2);
 if (VAR_11 != VAR_3)
  goto Exit;

 FUNC_3(&VAR_8->sig_mads_on_wire_continue);
 VAR_11 = FUNC_4(&VAR_8->sig_mads_on_wire_continue, VAR_2);
 if (VAR_11 != VAR_3)
  goto Exit;

 VAR_8->thread_state = VAR_5;

 VAR_11 = FUNC_7(&VAR_8->cc_poller, VAR_6, VAR_8,
    "cc poller");
 if (VAR_11 != VAR_3)
  goto Exit;

 VAR_11 = VAR_3;
Exit:
 FUNC_1(VAR_8->log);
 return VAR_11;
}
