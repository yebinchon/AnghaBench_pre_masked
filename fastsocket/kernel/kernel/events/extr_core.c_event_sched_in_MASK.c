
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct perf_event_context {int nr_freq; int nr_active; } ;
struct TYPE_6__ {scalar_t__ exclusive; scalar_t__ sample_freq; scalar_t__ freq; } ;
struct TYPE_4__ {scalar_t__ interrupts; } ;
struct perf_event {scalar_t__ state; int oncpu; TYPE_3__ attr; scalar_t__ tstamp_stopped; int tstamp_running; TYPE_2__* pmu; TYPE_1__ hw; } ;
struct perf_cpu_context {int exclusive; int active_oncpu; } ;
struct TYPE_5__ {scalar_t__ (* add ) (struct perf_event*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,int) ;
 int FUNC_3 (struct perf_event*,struct perf_event_context*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct perf_event*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct perf_event *VAR_6,
   struct perf_cpu_context *VAR_7,
   struct perf_event_context *VAR_8)
{
 u64 VAR_9 = FUNC_1(VAR_6);

 if (VAR_6->state <= VAR_5)
  return 0;

 VAR_6->state = VAR_3;
 VAR_6->oncpu = FUNC_4();






 if (FUNC_7(VAR_6->hw.interrupts == VAR_1)) {
  FUNC_2(VAR_6, 1);
  VAR_6->hw.interrupts = 0;
 }




 FUNC_5();

 if (VAR_6->pmu->add(VAR_6, VAR_2)) {
  VAR_6->state = VAR_4;
  VAR_6->oncpu = -1;
  return -VAR_0;
 }

 VAR_6->tstamp_running += VAR_9 - VAR_6->tstamp_stopped;

 FUNC_3(VAR_6, VAR_8, VAR_9);

 if (!FUNC_0(VAR_6))
  VAR_7->active_oncpu++;
 VAR_8->nr_active++;
 if (VAR_6->attr.freq && VAR_6->attr.sample_freq)
  VAR_8->nr_freq++;

 if (VAR_6->attr.exclusive)
  VAR_7->exclusive = 1;

 return 0;
}
