
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 struct timespec VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct timespec*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static long FUNC_2(struct timespec *VAR_4)
{
 struct timespec VAR_5;
 long VAR_6;

 if (VAR_4) {
  if (FUNC_1(VAR_4->tv_nsec < 0 || VAR_4->tv_sec < 0
   || VAR_4->tv_nsec >= VAR_3))
   return -VAR_1;
  VAR_5 = VAR_0;

  VAR_4->tv_sec -= VAR_5.tv_sec;
  if (VAR_4->tv_nsec < VAR_5.tv_nsec) {
   VAR_4->tv_nsec += VAR_3;
   VAR_4->tv_sec--;
  }
  VAR_4->tv_nsec -= VAR_5.tv_nsec;
  if (VAR_4->tv_sec < 0)
   return 0;

  VAR_6 = FUNC_0(VAR_4) + 1;
 } else
  return VAR_2;

 return VAR_6;
}
