
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__* VAR_0 ;

time_t
FUNC_2(const struct tm *VAR_1)
{
 int VAR_2 = 1900 + VAR_1->tm_year;
 time_t VAR_3 = 365 * ((time_t) VAR_2 - 1970) + FUNC_1(1970, VAR_2);
 time_t VAR_4;
 time_t VAR_5;
 time_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1->tm_mon; ++VAR_7) {
  VAR_3 += VAR_0[VAR_7];
 }
 if (VAR_1->tm_mon > 1 && FUNC_0(VAR_2)) {
  ++VAR_3;
 }
 VAR_3 += VAR_1->tm_mday - 1;

 VAR_4 = VAR_3 * 24 + VAR_1->tm_hour;
 VAR_5 = VAR_4 * 60 + VAR_1->tm_min;
 VAR_6 = VAR_5 * 60 + VAR_1->tm_sec;

 return VAR_6;
}
