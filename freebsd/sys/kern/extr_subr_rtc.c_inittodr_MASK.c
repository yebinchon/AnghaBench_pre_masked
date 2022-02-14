
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;




 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct timespec*,int) ;
 int FUNC_3 (struct timespec*) ;

void
FUNC_4(time_t VAR_0)
{
 struct timespec VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1, 0);






 if (VAR_2 != 0) {
  switch (VAR_2) {
  case 128:
   FUNC_1("Warning: no time-of-day clock registered, ");
   break;
  case 129:
   FUNC_1("Warning: bad time from time-of-day clock, ");
   break;
  default:
   FUNC_1("Error reading time-of-day clock (%d), ", VAR_2);
   break;
  }
  FUNC_1("system time will not be set accurately\n");
  VAR_1.tv_sec = (VAR_0 > 0) ? VAR_0 : -1;
  VAR_1.tv_nsec = 0;
 }

 if (VAR_1.tv_sec >= 0) {
  FUNC_3(&VAR_1);



 }
}
