
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cpu_time_count {int cpu; int sched; } ;
struct timespec {int dummy; } ;
typedef int clockid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int ,struct timespec*) ;
 struct timespec FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const clockid_t VAR_1,
          union cpu_time_count VAR_2,
          struct timespec *VAR_3)
{
 if (FUNC_0(VAR_1) == VAR_0)
  *VAR_3 = FUNC_2(VAR_2.sched);
 else
  FUNC_1(VAR_2.cpu, VAR_3);
}
