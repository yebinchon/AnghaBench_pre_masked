
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_year; scalar_t__ tm_mon; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 struct tm* FUNC_2 (scalar_t__*) ;

__attribute__((used)) static time_t
FUNC_3(time_t VAR_1, time_t VAR_2, time_t VAR_3)
{
 struct tm *VAR_4;
 time_t VAR_5;
 time_t VAR_6;

 if (VAR_3 == 0)
  return 0;
 VAR_4 = FUNC_2(&VAR_1);
 VAR_5 = 12 * (VAR_4->tm_year + 1900) + VAR_4->tm_mon + VAR_3;
 VAR_6 = VAR_5 / 12;
 VAR_5 = VAR_5 % 12 + 1;
 return FUNC_1(VAR_1,
     FUNC_0(VAR_5, (time_t)VAR_4->tm_mday, VAR_6,
  (time_t)VAR_4->tm_hour, (time_t)VAR_4->tm_min, (time_t)VAR_4->tm_sec,
  VAR_2, VAR_0));
}
