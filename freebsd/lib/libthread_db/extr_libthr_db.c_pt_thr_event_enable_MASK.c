
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ th_thread; TYPE_2__* th_ta; } ;
typedef TYPE_1__ td_thrhandle_t ;
struct TYPE_5__ {scalar_t__ thread_off_report_events; int ph; } ;
typedef TYPE_2__ td_thragent_t ;
typedef int td_err_e ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__,int*,int) ;

__attribute__((used)) static td_err_e
FUNC_3(const td_thrhandle_t *VAR_0, int VAR_1)
{
 const td_thragent_t *VAR_2 = VAR_0->th_ta;
 int VAR_3;

 FUNC_1();
 VAR_3 = FUNC_2(VAR_2->ph, VAR_0->th_thread + VAR_2->thread_off_report_events,
  &VAR_1, sizeof(int));
 return (FUNC_0(VAR_3));
}
