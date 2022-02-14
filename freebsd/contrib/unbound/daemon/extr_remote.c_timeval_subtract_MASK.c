
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;



__attribute__((used)) static void
FUNC_0(struct timeval* VAR_0, const struct timeval* VAR_1,
 const struct timeval* VAR_2)
{

 time_t VAR_3 = VAR_1->tv_usec;
 VAR_0->tv_sec = VAR_1->tv_sec - VAR_2->tv_sec;
 if(VAR_3 < VAR_2->tv_usec) {
  VAR_3 += 1000000;
  VAR_0->tv_sec--;
 }
 VAR_0->tv_usec = VAR_3 - VAR_2->tv_usec;

}
