
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_10__ {scalar_t__ th_thread; int th_tid; TYPE_2__ const* th_ta; } ;
typedef TYPE_1__ td_thrhandle_t ;
struct TYPE_11__ {scalar_t__ thread_off_event_buf; scalar_t__ thread_off_tid; int ph; int thread_last_event_addr; } ;
typedef TYPE_2__ const td_thragent_t ;
typedef scalar_t__ td_thr_events_e ;
struct TYPE_12__ {scalar_t__ event; scalar_t__ th_p; } ;
typedef TYPE_3__ td_event_msg_t ;
typedef int td_err_e ;
typedef scalar_t__ psaddr_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__,TYPE_3__*,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (TYPE_2__ const*,scalar_t__,int *) ;
 int FUNC_5 (TYPE_2__ const*,int ,scalar_t__*) ;
 int FUNC_6 (TYPE_2__ const*,int ,int ) ;

__attribute__((used)) static td_err_e
FUNC_7(const td_thrhandle_t *VAR_2, td_event_msg_t *VAR_3)
{
 static td_thrhandle_t VAR_4;
 const td_thragent_t *VAR_5 = VAR_2->th_ta;
 psaddr_t VAR_6, VAR_7;
 int64_t VAR_8;
 int VAR_9;
 td_thr_events_e VAR_10;

 FUNC_1();
 VAR_6 = VAR_2->th_thread;
 VAR_9 = FUNC_5(VAR_5, VAR_5->thread_last_event_addr, &VAR_7);
 if (VAR_9 != 0)
  return (VAR_0);

 VAR_9 = FUNC_2(VAR_5->ph, VAR_6 + VAR_5->thread_off_event_buf, VAR_3, sizeof(*VAR_3));
 if (VAR_9 != 0)
  return (FUNC_0(VAR_9));
 if (VAR_3->event == 0)
  return (VAR_1);




 if (VAR_6 == VAR_7)
  FUNC_6(VAR_5, VAR_5->thread_last_event_addr, 0);


 VAR_10 = 0;
 FUNC_3(VAR_5->ph, VAR_6 + VAR_5->thread_off_event_buf, &VAR_10, sizeof(VAR_10));

 VAR_6 = VAR_3->th_p;
 VAR_9 = FUNC_4(VAR_5, VAR_6 + VAR_5->thread_off_tid, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_0);
 VAR_4.th_ta = VAR_5;
 VAR_4.th_tid = VAR_8;
 VAR_4.th_thread = VAR_6;
 VAR_3->th_p = (uintptr_t)&VAR_4;
 return (0);
}
