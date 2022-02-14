
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_STATE_T ;
struct TYPE_6__ {unsigned long data; int function; } ;
struct TYPE_5__ {scalar_t__ first_connect; TYPE_4__ suspend_timer; scalar_t__ suspend_timer_running; int suspend_timer_timeout; int blocked_blocker; int resume_blocker; int vc_resume_complete; int vc_suspend_complete; int ka_release_count; int ka_use_ack_count; int ka_use_count; int ka_evt; int susp_res_lock; } ;
typedef TYPE_1__ VCHIQ_ARM_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_3 ;

VCHIQ_STATUS_T
FUNC_6(VCHIQ_STATE_T *VAR_4, VCHIQ_ARM_STATE_T *VAR_5)
{
 VCHIQ_STATUS_T VAR_6 = VAR_1;

 if (VAR_5) {
  FUNC_4(&VAR_5->susp_res_lock);

  FUNC_2(&VAR_5->ka_evt);
  FUNC_0(&VAR_5->ka_use_count, 0);
  FUNC_0(&VAR_5->ka_use_ack_count, 0);
  FUNC_0(&VAR_5->ka_release_count, 0);

  FUNC_2(&VAR_5->vc_suspend_complete);

  FUNC_2(&VAR_5->vc_resume_complete);


  FUNC_5(VAR_5, VAR_2);

  FUNC_2(&VAR_5->resume_blocker);


  FUNC_1(&VAR_5->resume_blocker);

  FUNC_2(&VAR_5->blocked_blocker);


  FUNC_1(&VAR_5->blocked_blocker);

  VAR_5->suspend_timer_timeout = VAR_0;
  VAR_5->suspend_timer_running = 0;
  FUNC_3(&VAR_5->suspend_timer);
  VAR_5->suspend_timer.data = (unsigned long)(VAR_4);
  VAR_5->suspend_timer.function = VAR_3;

  VAR_5->first_connect = 0;

 }
 return VAR_6;
}
