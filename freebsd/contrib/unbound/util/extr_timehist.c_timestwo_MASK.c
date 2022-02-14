
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;



__attribute__((used)) static void
FUNC_0(struct timeval* VAR_0)
{

 if(VAR_0->tv_sec == 0 && VAR_0->tv_usec == 0) {
  VAR_0->tv_usec = 1;
  return;
 }
 VAR_0->tv_sec *= 2;
 VAR_0->tv_usec *= 2;
 if(VAR_0->tv_usec == 1024*1024) {

  VAR_0->tv_sec = 1;
  VAR_0->tv_usec = 0;
 }

}
