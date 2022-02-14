
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ t_dtrace_start; } ;
typedef TYPE_1__ kthread_t ;
typedef scalar_t__ hrtime_t ;
typedef int dtrace_icookie_t ;
struct TYPE_5__ {scalar_t__ t_dtrace_start; int t_dtrace_vtime; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

void
FUNC_3(kthread_t *VAR_1)
{
 dtrace_icookie_t VAR_2;
 hrtime_t VAR_3;

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_0();

 if (VAR_0->t_dtrace_start != 0) {
  VAR_0->t_dtrace_vtime += VAR_3 - VAR_0->t_dtrace_start;
  VAR_0->t_dtrace_start = 0;
 }

 if (VAR_1 != ((void*)0))
  VAR_1->t_dtrace_start = VAR_3;

 FUNC_2(VAR_2);
}
