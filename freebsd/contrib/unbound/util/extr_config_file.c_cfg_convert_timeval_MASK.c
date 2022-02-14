
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (char const*,char*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_3 (char const*) ;

time_t
FUNC_4(const char* VAR_0)
{
 time_t VAR_1;
 struct tm VAR_2;
 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 if(FUNC_3(VAR_0) < 14)
  return 0;
 if(FUNC_2(VAR_0, "%4d%2d%2d%2d%2d%2d", &VAR_2.tm_year, &VAR_2.tm_mon,
  &VAR_2.tm_mday, &VAR_2.tm_hour, &VAR_2.tm_min, &VAR_2.tm_sec) != 6)
  return 0;
 VAR_2.tm_year -= 1900;
 VAR_2.tm_mon--;

 if (VAR_2.tm_year < 70) return 0;
 if (VAR_2.tm_mon < 0 || VAR_2.tm_mon > 11) return 0;
 if (VAR_2.tm_mday < 1 || VAR_2.tm_mday > 31) return 0;
 if (VAR_2.tm_hour < 0 || VAR_2.tm_hour > 23) return 0;
 if (VAR_2.tm_min < 0 || VAR_2.tm_min > 59) return 0;
 if (VAR_2.tm_sec < 0 || VAR_2.tm_sec > 59) return 0;

 VAR_1 = FUNC_1(&VAR_2);
 return VAR_1;
}
