
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tv64; } ;
struct hrtimer {TYPE_1__* base; } ;
struct TYPE_6__ {TYPE_4__ interval; struct hrtimer timer; } ;
struct TYPE_7__ {TYPE_2__ real; } ;
struct k_itimer {unsigned int it_overrun; unsigned int it_overrun_last; int it_requeue_pending; TYPE_3__ it; } ;
struct TYPE_5__ {int (* get_time ) () ;} ;


 scalar_t__ FUNC_0 (struct hrtimer*,int ,TYPE_4__) ;
 int FUNC_1 (struct hrtimer*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct k_itimer *VAR_0)
{
 struct hrtimer *VAR_1 = &VAR_0->it.real.timer;

 if (VAR_0->it.real.interval.tv64 == 0)
  return;

 VAR_0->it_overrun += (unsigned int) FUNC_0(VAR_1,
      VAR_1->base->get_time(),
      VAR_0->it.real.interval);

 VAR_0->it_overrun_last = VAR_0->it_overrun;
 VAR_0->it_overrun = -1;
 ++VAR_0->it_requeue_pending;
 FUNC_1(VAR_1);
}
