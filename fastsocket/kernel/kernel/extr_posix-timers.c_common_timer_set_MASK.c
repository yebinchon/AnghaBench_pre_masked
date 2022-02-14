
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tv64; } ;
struct hrtimer {TYPE_3__* base; int function; } ;
struct TYPE_7__ {TYPE_4__ interval; struct hrtimer timer; } ;
struct TYPE_8__ {TYPE_1__ real; } ;
struct k_itimer {int it_requeue_pending; int it_sigev_notify; TYPE_2__ it; int it_clock; scalar_t__ it_overrun_last; } ;
struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct itimerspec {TYPE_5__ it_interval; TYPE_5__ it_value; } ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;
struct TYPE_9__ {int (* get_time ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct k_itimer*,struct itimerspec*) ;
 int FUNC_1 (struct hrtimer*,int ) ;
 int FUNC_2 (struct hrtimer*,int ,int) ;
 int FUNC_3 (struct hrtimer*,TYPE_4__) ;
 int FUNC_4 (struct hrtimer*,int) ;
 scalar_t__ FUNC_5 (struct hrtimer*) ;
 int VAR_7 ;
 int FUNC_6 () ;
 TYPE_4__ FUNC_7 (TYPE_5__) ;

__attribute__((used)) static int
FUNC_8(struct k_itimer *VAR_8, int VAR_9,
   struct itimerspec *VAR_10, struct itimerspec *VAR_11)
{
 struct hrtimer *VAR_12 = &VAR_8->it.real.timer;
 enum hrtimer_mode VAR_13;

 if (VAR_11)
  FUNC_0(VAR_8, VAR_11);


 VAR_8->it.real.interval.tv64 = 0;




 if (FUNC_5(VAR_12) < 0)
  return VAR_6;

 VAR_8->it_requeue_pending = (VAR_8->it_requeue_pending + 2) &
  ~VAR_2;
 VAR_8->it_overrun_last = 0;


 if (!VAR_10->it_value.tv_sec && !VAR_10->it_value.tv_nsec)
  return 0;

 VAR_13 = VAR_9 & VAR_5 ? VAR_0 : VAR_1;
 FUNC_2(&VAR_8->it.real.timer, VAR_8->it_clock, VAR_13);
 VAR_8->it.real.timer.function = VAR_7;

 FUNC_3(VAR_12, FUNC_7(VAR_10->it_value));


 VAR_8->it.real.interval = FUNC_7(VAR_10->it_interval);


 if (((VAR_8->it_sigev_notify & ~VAR_4) == VAR_3)) {

  if (VAR_13 == VAR_1) {
   FUNC_1(VAR_12, VAR_12->base->get_time());
  }
  return 0;
 }

 FUNC_4(VAR_12, VAR_13);
 return 0;
}
