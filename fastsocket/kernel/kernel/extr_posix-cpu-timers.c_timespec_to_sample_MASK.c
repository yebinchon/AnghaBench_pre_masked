
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cpu_time_count {int cpu; scalar_t__ sched; } ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef int clockid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 unsigned long long VAR_1 ;
 int FUNC_1 (struct timespec const*) ;

__attribute__((used)) static inline union cpu_time_count
FUNC_2(const clockid_t VAR_2, const struct timespec *VAR_3)
{
 union cpu_time_count VAR_4;
 VAR_4.sched = 0;
 if (FUNC_0(VAR_2) == VAR_0) {
  VAR_4.sched = (unsigned long long)VAR_3->tv_sec * VAR_1 + VAR_3->tv_nsec;
 } else {
  VAR_4.cpu = FUNC_1(VAR_3);
 }
 return VAR_4;
}
