
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct clocktime {int hour; int year; int mon; int day; int min; int sec; int nsec; int dow; } ;
struct bcd_clocktime {int ispm; int year; int mon; int day; int hour; int min; int sec; int nsec; int dow; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct timespec const*,struct clocktime*) ;

void
FUNC_2(const struct timespec *VAR_0, struct bcd_clocktime *VAR_1, bool VAR_2)
{
 struct clocktime VAR_3;

 FUNC_1(VAR_0, &VAR_3);


 VAR_1->ispm = 0;
 if (VAR_2) {
  if (VAR_3.hour >= 12) {
   VAR_3.hour -= 12;
   VAR_1->ispm = 1;
  }
  if (VAR_3.hour == 0)
   VAR_3.hour = 12;
 }

 VAR_1->year = FUNC_0(VAR_3.year % 100) | (FUNC_0(VAR_3.year / 100) << 8);
 VAR_1->mon = FUNC_0(VAR_3.mon);
 VAR_1->day = FUNC_0(VAR_3.day);
 VAR_1->hour = FUNC_0(VAR_3.hour);
 VAR_1->min = FUNC_0(VAR_3.min);
 VAR_1->sec = FUNC_0(VAR_3.sec);
 VAR_1->dow = VAR_3.dow;
 VAR_1->nsec = VAR_3.nsec;
}
