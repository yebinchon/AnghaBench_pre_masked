
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct timespec*) ;

__attribute__((used)) static void
FUNC_1(struct timespec *VAR_2)
{
 time_t VAR_3;

 if (VAR_0) {
  FUNC_0(VAR_2);
 } else {
  VAR_3 = VAR_1;
  if (VAR_2->tv_sec != VAR_3) {
   VAR_2->tv_sec = VAR_3;
   VAR_2->tv_nsec = 0;
  }
 }
}
