
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union cpu_time_count {scalar_t__ sched; int cpu; } ;
struct TYPE_6__ {scalar_t__ sched; int cpu; } ;
struct TYPE_5__ {scalar_t__ sched; int cpu; } ;
struct TYPE_7__ {TYPE_2__ expires; TYPE_1__ incr; } ;
struct TYPE_8__ {TYPE_3__ cpu; } ;
struct k_itimer {int it_overrun; TYPE_4__ it; int it_clock; } ;
typedef int cputime_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct k_itimer *VAR_1,
      union cpu_time_count VAR_2)
{
 int VAR_3;

 if (VAR_1->it.cpu.incr.sched == 0)
  return;

 if (FUNC_0(VAR_1->it_clock) == VAR_0) {
  unsigned long long VAR_4, VAR_5;

  if (VAR_2.sched < VAR_1->it.cpu.expires.sched)
   return;
  VAR_5 = VAR_1->it.cpu.incr.sched;
  VAR_4 = VAR_2.sched + VAR_5 - VAR_1->it.cpu.expires.sched;

  for (VAR_3 = 0; VAR_5 < VAR_4 - VAR_5; VAR_3++)
   VAR_5 = VAR_5 << 1;
  for (; VAR_3 >= 0; VAR_5 >>= 1, VAR_3--) {
   if (VAR_4 < VAR_5)
    continue;
   VAR_1->it.cpu.expires.sched += VAR_5;
   VAR_1->it_overrun += 1 << VAR_3;
   VAR_4 -= VAR_5;
  }
 } else {
  cputime_t VAR_6, VAR_7;

  if (FUNC_3(VAR_2.cpu, VAR_1->it.cpu.expires.cpu))
   return;
  VAR_7 = VAR_1->it.cpu.incr.cpu;
  VAR_6 = FUNC_4(FUNC_1(VAR_2.cpu, VAR_7),
        VAR_1->it.cpu.expires.cpu);

  for (VAR_3 = 0; FUNC_3(VAR_7, FUNC_4(VAR_6, VAR_7)); VAR_3++)
        VAR_7 = FUNC_1(VAR_7, VAR_7);
  for (; VAR_3 >= 0; VAR_7 = FUNC_2(VAR_7), VAR_3--) {
   if (FUNC_3(VAR_6, VAR_7))
    continue;
   VAR_1->it.cpu.expires.cpu =
    FUNC_1(VAR_1->it.cpu.expires.cpu, VAR_7);
   VAR_1->it_overrun += 1 << VAR_3;
   VAR_6 = FUNC_4(VAR_6, VAR_7);
  }
 }
}
