
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {scalar_t__ tm_year; scalar_t__ tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct os_tm {scalar_t__ year; scalar_t__ month; int day; int hour; int min; int sec; } ;
typedef int os_time_t ;


 struct tm* FUNC_0 (int *) ;

int FUNC_1(os_time_t VAR_0, struct os_tm *VAR_1)
{
 struct tm *VAR_2;
 time_t VAR_3 = VAR_0;

 VAR_2 = FUNC_0(&VAR_3);
 if (VAR_2 == ((void*)0))
  return -1;
 VAR_1->sec = VAR_2->tm_sec;
 VAR_1->min = VAR_2->tm_min;
 VAR_1->hour = VAR_2->tm_hour;
 VAR_1->day = VAR_2->tm_mday;
 VAR_1->month = VAR_2->tm_mon + 1;
 VAR_1->year = VAR_2->tm_year + 1900;
 return 0;
}
