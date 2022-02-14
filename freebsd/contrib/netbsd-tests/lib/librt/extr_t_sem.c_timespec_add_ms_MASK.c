
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;



__attribute__((used)) static inline void
FUNC_0(struct timespec *VAR_0, int VAR_1)
{
 VAR_0->tv_nsec += VAR_1 * 1000*1000;
 if (VAR_0->tv_nsec > 1000*1000*1000) {
  VAR_0->tv_sec++;
  VAR_0->tv_nsec -= 1000*1000*1000;
 }
}
