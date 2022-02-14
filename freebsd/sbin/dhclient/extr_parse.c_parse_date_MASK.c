
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; scalar_t__ tm_yday; scalar_t__ tm_isdst; void* tm_wday; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char**,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

time_t
FUNC_4(FILE *VAR_4)
{
 static int VAR_5[11] = { 31, 59, 90, 120, 151, 181,
     212, 243, 273, 304, 334 };
 int VAR_6, VAR_7;
 struct tm VAR_8;
 char *VAR_9;


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_1) {
  FUNC_2("numeric day of week expected.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }
 VAR_8.tm_wday = FUNC_0(VAR_9);


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_1) {
  FUNC_2("numeric year expected.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }
 VAR_8.tm_year = FUNC_0(VAR_9);
 if (VAR_8.tm_year > 1900)
  VAR_8.tm_year -= 1900;


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_3) {
  FUNC_2("expected slash separating year from month.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_1) {
  FUNC_2("numeric month expected.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }
 VAR_8.tm_mon = FUNC_0(VAR_9) - 1;


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_3) {
  FUNC_2("expected slash separating month from day.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_1) {
  FUNC_2("numeric day of month expected.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }
 VAR_8.tm_mday = FUNC_0(VAR_9);


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_1) {
  FUNC_2("numeric hour expected.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }
 VAR_8.tm_hour = FUNC_0(VAR_9);


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_0) {
  FUNC_2("expected colon separating hour from minute.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_1) {
  FUNC_2("numeric minute expected.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }
 VAR_8.tm_min = FUNC_0(VAR_9);


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_0) {
  FUNC_2("expected colon separating hour from minute.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_1) {
  FUNC_2("numeric minute expected.");
  if (VAR_7 != VAR_2)
   FUNC_3(VAR_4);
  return (0);
 }
 VAR_8.tm_sec = FUNC_0(VAR_9);
 VAR_8.tm_isdst = 0;


 VAR_8.tm_yday = 0;


 VAR_7 = FUNC_1(&VAR_9, VAR_4);
 if (VAR_7 != VAR_2) {
  FUNC_2("semicolon expected.");
  FUNC_3(VAR_4);
  return (0);
 }


 VAR_6 = ((((((365 * (VAR_8.tm_year - 70) +
      (VAR_8.tm_year - 69) / 4 +
      (VAR_8.tm_mon
      ? VAR_5[VAR_8.tm_mon - 1]
      : 0) +
      (VAR_8.tm_mon > 1 &&
      !((VAR_8.tm_year - 72) & 3)) +
      VAR_8.tm_mday - 1) * 24) +
      VAR_8.tm_hour) * 60) +
      VAR_8.tm_min) * 60) + VAR_8.tm_sec;
 return (VAR_6);
}
