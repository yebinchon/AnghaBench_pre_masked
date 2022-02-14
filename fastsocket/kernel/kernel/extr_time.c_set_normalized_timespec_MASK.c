
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct timespec *VAR_1, time_t VAR_2, s64 VAR_3)
{
 while (VAR_3 >= VAR_0) {





  asm("" : "+rm"(VAR_3));
  VAR_3 -= VAR_0;
  ++VAR_2;
 }
 while (VAR_3 < 0) {
  asm("" : "+rm"(VAR_3));
  VAR_3 += VAR_0;
  --VAR_2;
 }
 VAR_1->tv_sec = VAR_2;
 VAR_1->tv_nsec = VAR_3;
}
