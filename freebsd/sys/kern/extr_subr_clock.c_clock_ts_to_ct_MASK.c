
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct clocktime {int year; int mon; int day; int hour; int min; int sec; int nsec; int dow; } ;
typedef int intmax_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct clocktime*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_6(const struct timespec *VAR_5, struct clocktime *VAR_6)
{
 time_t VAR_7, VAR_8, VAR_9;
 time_t VAR_10;
 time_t VAR_11;

 VAR_11 = VAR_5->tv_sec;
 VAR_9 = VAR_11 / VAR_1;
 VAR_10 = VAR_11 % VAR_1;

 VAR_6->dow = FUNC_2(VAR_9);


 if (VAR_9 >= VAR_3) {
  VAR_8 = VAR_4;
  VAR_9 -= VAR_3;
 } else {
  VAR_8 = VAR_0;
 }
 for (; VAR_9 >= FUNC_4(VAR_8); VAR_8++)
  VAR_9 -= FUNC_4(VAR_8);
 VAR_6->year = VAR_8;


 for (VAR_7 = 1; VAR_9 >= FUNC_3(VAR_8, VAR_7); VAR_7++)
  VAR_9 -= FUNC_3(VAR_8, VAR_7);
 VAR_6->mon = VAR_7;


 VAR_6->day = VAR_9 + 1;


 VAR_6->hour = VAR_10 / 3600;
 VAR_10 = VAR_10 % 3600;
 VAR_6->min = VAR_10 / 60;
 VAR_10 = VAR_10 % 60;
 VAR_6->sec = VAR_10;
 VAR_6->nsec = VAR_5->tv_nsec;
 if (VAR_2) {
  FUNC_5("ts_to_ct(%jd.%09ld) = [",
      (intmax_t)VAR_5->tv_sec, VAR_5->tv_nsec);
  FUNC_1(VAR_6, 9);
  FUNC_5("]\n");
 }

 FUNC_0(VAR_6->year >= 0 && VAR_6->year < 10000,
     ("year %d isn't a 4 digit year", VAR_6->year));
 FUNC_0(VAR_6->mon >= 1 && VAR_6->mon <= 12,
     ("month %d not in 1-12", VAR_6->mon));
 FUNC_0(VAR_6->day >= 1 && VAR_6->day <= 31,
     ("day %d not in 1-31", VAR_6->day));
 FUNC_0(VAR_6->hour >= 0 && VAR_6->hour <= 23,
     ("hour %d not in 0-23", VAR_6->hour));
 FUNC_0(VAR_6->min >= 0 && VAR_6->min <= 59,
     ("minute %d not in 0-59", VAR_6->min));

 FUNC_0(VAR_6->sec >= 0 && VAR_6->sec <= 60,
     ("seconds %d not in 0-60", VAR_6->sec));
}
