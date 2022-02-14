
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 scalar_t__** VAR_1 ;

time_t
FUNC_1 (struct tm *VAR_2)
{
  time_t VAR_3 = 0;
  int VAR_4;




  if (VAR_2->tm_year > VAR_0)
      return 0;

  if (VAR_2->tm_year < 0)
      return -1;
  if (VAR_2->tm_mon < 0 || VAR_2->tm_mon > 11)
      return -1;
  if (VAR_2->tm_mday < 1 || VAR_2->tm_mday > (int)VAR_1[FUNC_0(VAR_2->tm_year)][VAR_2->tm_mon])
      return -1;
  if (VAR_2->tm_hour < 0 || VAR_2->tm_hour > 23)
      return -1;
  if (VAR_2->tm_min < 0 || VAR_2->tm_min > 59)
      return -1;
  if (VAR_2->tm_sec < 0 || VAR_2->tm_sec > 59)
      return -1;

  for (VAR_4 = 70; VAR_4 < VAR_2->tm_year; ++VAR_4)
    VAR_3 += FUNC_0(VAR_4) ? 366 : 365;

  for (VAR_4 = 0; VAR_4 < VAR_2->tm_mon; ++VAR_4)
    VAR_3 += VAR_1[FUNC_0(VAR_2->tm_year)][VAR_4];
  VAR_3 += VAR_2->tm_mday - 1;
  VAR_3 *= 24;
  VAR_3 += VAR_2->tm_hour;
  VAR_3 *= 60;
  VAR_3 += VAR_2->tm_min;
  VAR_3 *= 60;
  VAR_3 += VAR_2->tm_sec;
  return VAR_3;
}
