
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 void* FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 struct tm* FUNC_5 (int*) ;
 int FUNC_6 (struct tm*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char**,int) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(char *VAR_4)
{
 struct tm *VAR_5;
 char *VAR_6;
 time_t VAR_7;
 int VAR_8, VAR_9;
 char *VAR_10;

 (void)FUNC_10(&VAR_7);

 if (!FUNC_7(VAR_4, "now")) {
  VAR_2 = 0;
  VAR_3 = VAR_7;
  return;
 }

 if (*VAR_4 == '+') {
  if (!FUNC_4(*++VAR_4))
   FUNC_1();
  VAR_1 = 0;
  VAR_2 = FUNC_9(VAR_4, &VAR_10, 10);
  if (VAR_2 < 0 || VAR_2 == VAR_0 || VAR_1 != 0)
   FUNC_1();
  if (VAR_10[0] == '\0' || FUNC_7(VAR_10, "m") == 0 ||
      FUNC_7(VAR_10, "min") == 0 ||
      FUNC_7(VAR_10, "mins") == 0) {
   VAR_2 *= 60;
  } else if (FUNC_7(VAR_10, "h") == 0 ||
      FUNC_7(VAR_10, "hour") == 0 ||
      FUNC_7(VAR_10, "hours") == 0) {
   VAR_2 *= 60 * 60;
  } else if (FUNC_7(VAR_10, "s") == 0 ||
      FUNC_7(VAR_10, "sec") == 0 ||
      FUNC_7(VAR_10, "secs") == 0) {
   VAR_2 *= 1;
  } else {
   FUNC_1();
  }
  VAR_3 = VAR_7 + VAR_2;
  return;
 }


 for (VAR_6 = VAR_4; *VAR_6; ++VAR_6)
  if (!FUNC_3(*VAR_6) || !FUNC_4(*VAR_6)) {
   if (*VAR_6 == ':' && FUNC_8(VAR_6) == 3) {
    VAR_6[0] = VAR_6[1];
    VAR_6[1] = VAR_6[2];
    VAR_6[2] = '\0';
   }
   else
    FUNC_1();
  }

 FUNC_11("TZ");
 VAR_5 = FUNC_5(&VAR_7);
 VAR_8 = 1;

 switch(FUNC_8(VAR_4)) {
 case 10:
  VAR_9 = VAR_5->tm_year;
  VAR_5->tm_year = FUNC_0(VAR_4);





  if (VAR_5->tm_year < (VAR_9 % 100) - 1)
   VAR_5->tm_year += 100;

  VAR_5->tm_year += (VAR_9 - (VAR_9 % 100));

 case 8:
  VAR_5->tm_mon = FUNC_0(VAR_4);
  if (--VAR_5->tm_mon < 0 || VAR_5->tm_mon > 11)
   FUNC_1();

 case 6:
  VAR_8 = 0;
  VAR_5->tm_mday = FUNC_0(VAR_4);
  if (VAR_5->tm_mday < 1 || VAR_5->tm_mday > 31)
   FUNC_1();

 case 4:
  VAR_5->tm_hour = FUNC_0(VAR_4);
  if (VAR_5->tm_hour < 0 || VAR_5->tm_hour > 23)
   FUNC_1();
  VAR_5->tm_min = FUNC_0(VAR_4);
  if (VAR_5->tm_min < 0 || VAR_5->tm_min > 59)
   FUNC_1();
  VAR_5->tm_sec = 0;
  if ((VAR_3 = FUNC_6(VAR_5)) == -1)
   FUNC_1();

  if ((VAR_2 = VAR_3 - VAR_7) < 0) {
   if (!VAR_8)
    FUNC_2(1, "that time is already past.");






   VAR_5->tm_mday++;
   if ((VAR_3 = FUNC_6(VAR_5)) == -1)
    FUNC_1();
   if ((VAR_2 = VAR_3 - VAR_7) < 0) {
    FUNC_2(1, "tomorrow is before today?");
   }
  }
  break;
 default:
  FUNC_1();
 }
}
