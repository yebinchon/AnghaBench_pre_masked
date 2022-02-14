
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int sample_period; int period_left; } ;
struct perf_event {TYPE_1__* pmu; struct hw_perf_event hw; } ;
typedef int s64 ;
struct TYPE_2__ {int (* start ) (struct perf_event*,int ) ;int (* stop ) (struct perf_event*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct perf_event*,int ,int ) ;
 int FUNC_3 (struct perf_event*,int ) ;
 int FUNC_4 (struct perf_event*,int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_2, u64 VAR_3, u64 VAR_4, bool VAR_5)
{
 struct hw_perf_event *VAR_6 = &VAR_2->hw;
 s64 VAR_7, VAR_8;
 s64 VAR_9;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);

 VAR_9 = (s64)(VAR_7 - VAR_6->sample_period);
 VAR_9 = (VAR_9 + 7) / 8;

 VAR_8 = VAR_6->sample_period + VAR_9;

 if (!VAR_8)
  VAR_8 = 1;

 VAR_6->sample_period = VAR_8;

 if (FUNC_0(&VAR_6->period_left) > 8*VAR_8) {
  if (VAR_5)
   VAR_2->pmu->stop(VAR_2, VAR_1);

  FUNC_1(&VAR_6->period_left, 0);

  if (VAR_5)
   VAR_2->pmu->start(VAR_2, VAR_0);
 }
}
