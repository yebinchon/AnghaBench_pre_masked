
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct clocktime {int year; int mon; int day; int hour; int min; int sec; int nsec; int dow; } ;
struct bcd_clocktime {int year; int mon; int day; int hour; int min; int sec; scalar_t__ ispm; int nsec; int dow; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct clocktime*,struct timespec*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int,int,int,int,int,int) ;
 int FUNC_3 (int) ;

int
FUNC_4(const struct bcd_clocktime *VAR_2, struct timespec *VAR_3, bool VAR_4)
{
 struct clocktime VAR_5;
 int VAR_6, VAR_7;





 VAR_6 = VAR_2->year >> 8;
 VAR_7 = VAR_2->year & 0xff;






 if (!FUNC_3(VAR_6) || !FUNC_3(VAR_7) || !FUNC_3(VAR_2->mon) ||
     !FUNC_3(VAR_2->day) || !FUNC_3(VAR_2->hour) ||
     !FUNC_3(VAR_2->min) || !FUNC_3(VAR_2->sec)) {
  if (VAR_1)
   FUNC_2("clock_bcd_to_ts: bad BCD: "
       "[%04x-%02x-%02x %02x:%02x:%02x]\n",
       VAR_2->year, VAR_2->mon, VAR_2->day,
       VAR_2->hour, VAR_2->min, VAR_2->sec);
  return (VAR_0);
 }

 VAR_5.year = FUNC_0(VAR_7) + FUNC_0(VAR_6) * 100;
 VAR_5.mon = FUNC_0(VAR_2->mon);
 VAR_5.day = FUNC_0(VAR_2->day);
 VAR_5.hour = FUNC_0(VAR_2->hour);
 VAR_5.min = FUNC_0(VAR_2->min);
 VAR_5.sec = FUNC_0(VAR_2->sec);
 VAR_5.dow = VAR_2->dow;
 VAR_5.nsec = VAR_2->nsec;


 if (VAR_4) {
  if (VAR_5.hour == 12)
   VAR_5.hour = 0;
  if (VAR_2->ispm)
   VAR_5.hour += 12;
 }

 return (FUNC_1(&VAR_5, VAR_3));
}
