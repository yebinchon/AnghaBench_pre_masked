
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int thread_event_mask_addr; int ph; } ;
typedef TYPE_1__ td_thragent_t ;
typedef int td_thr_events_t ;
typedef int td_err_e ;
typedef int mask ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static td_err_e
FUNC_4(const td_thragent_t *VAR_0, td_thr_events_t *VAR_1)
{
 td_thr_events_t VAR_2;
 int VAR_3;

 FUNC_1();
 VAR_3 = FUNC_2(VAR_0->ph, VAR_0->thread_event_mask_addr, &VAR_2,
  sizeof(VAR_2));
 if (VAR_3 != 0)
  return (FUNC_0(VAR_3));
 VAR_2 |= *VAR_1;
 VAR_3 = FUNC_3(VAR_0->ph, VAR_0->thread_event_mask_addr, &VAR_2,
  sizeof(VAR_2));
 return (FUNC_0(VAR_3));
}
