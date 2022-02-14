
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {unsigned int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 size_t FUNC_0 (unsigned int) ;

time_t
FUNC_1 (struct tm *VAR_0)
{
  static const unsigned VAR_1[2][12] ={
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
  time_t VAR_2 = 0;
  unsigned VAR_3;

  if (VAR_0->tm_year < 0)
      return -1;
  if (VAR_0->tm_mon < 0 || VAR_0->tm_mon > 11)
      return -1;
  if (VAR_0->tm_mday < 1 || VAR_0->tm_mday > VAR_1[FUNC_0(VAR_0->tm_year)][VAR_0->tm_mon])
      return -1;
  if (VAR_0->tm_hour < 0 || VAR_0->tm_hour > 23)
      return -1;
  if (VAR_0->tm_min < 0 || VAR_0->tm_min > 59)
      return -1;
  if (VAR_0->tm_sec < 0 || VAR_0->tm_sec > 59)
      return -1;

  for (VAR_3 = 70; VAR_3 < VAR_0->tm_year; ++VAR_3)
    VAR_2 += FUNC_0(VAR_3) ? 366 : 365;

  for (VAR_3 = 0; VAR_3 < VAR_0->tm_mon; ++VAR_3)
    VAR_2 += VAR_1[FUNC_0(VAR_0->tm_year)][VAR_3];
  VAR_2 += VAR_0->tm_mday - 1;
  VAR_2 *= 24;
  VAR_2 += VAR_0->tm_hour;
  VAR_2 *= 60;
  VAR_2 += VAR_0->tm_min;
  VAR_2 *= 60;
  VAR_2 += VAR_0->tm_sec;
  return VAR_2;
}
