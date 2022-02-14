
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;



__attribute__((used)) static void FUNC_0(struct timeval *VAR_0,
        struct timeval *VAR_1)
{

 if (VAR_0->tv_sec < VAR_1->tv_sec ||
     (VAR_0->tv_sec == VAR_1->tv_sec && VAR_0->tv_usec < VAR_1->tv_usec)) {
  VAR_0->tv_sec = 0;
  VAR_0->tv_usec = 0;
  return;
 }

 VAR_0->tv_sec -= VAR_1->tv_sec;
 VAR_0->tv_usec -= VAR_1->tv_usec;
 while ( VAR_0->tv_usec < 0 ) {
  VAR_0->tv_sec--;
  VAR_0->tv_usec += 1000000;
 }
}
