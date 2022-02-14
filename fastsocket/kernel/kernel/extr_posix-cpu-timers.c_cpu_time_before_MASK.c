
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cpu_time_count {scalar_t__ sched; int cpu; } ;
typedef int clockid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int FUNC_2(const clockid_t VAR_1,
      union cpu_time_count VAR_2,
      union cpu_time_count VAR_3)
{
 if (FUNC_0(VAR_1) == VAR_0) {
  return VAR_2.sched < VAR_3.sched;
 } else {
  return FUNC_1(VAR_2.cpu, VAR_3.cpu);
 }
}
