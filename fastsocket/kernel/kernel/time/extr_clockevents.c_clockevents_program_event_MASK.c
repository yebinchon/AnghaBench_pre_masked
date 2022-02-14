
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tv64; } ;
struct clock_event_device {scalar_t__ mode; unsigned long long max_delta_ns; unsigned long long min_delta_ns; unsigned long long mult; unsigned long long shift; int (* set_next_event ) (unsigned long,struct clock_event_device*) ;TYPE_1__ next_event; } ;
typedef TYPE_1__ ktime_t ;
typedef unsigned long long int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__,TYPE_1__) ;
 unsigned long long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,struct clock_event_device*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct clock_event_device *VAR_2, ktime_t VAR_3,
         ktime_t VAR_4)
{
 unsigned long long VAR_5;
 int64_t VAR_6;

 if (FUNC_4(VAR_3.tv64 < 0)) {
  FUNC_0(1);
  return -VAR_1;
 }

 VAR_6 = FUNC_2(FUNC_1(VAR_3, VAR_4));

 if (VAR_6 <= 0)
  return -VAR_1;

 VAR_2->next_event = VAR_3;

 if (VAR_2->mode == VAR_0)
  return 0;

 if (VAR_6 > VAR_2->max_delta_ns)
  VAR_6 = VAR_2->max_delta_ns;
 if (VAR_6 < VAR_2->min_delta_ns)
  VAR_6 = VAR_2->min_delta_ns;

 VAR_5 = VAR_6 * VAR_2->mult;
 VAR_5 >>= VAR_2->shift;

 return VAR_2->set_next_event((unsigned long) VAR_5, VAR_2);
}
