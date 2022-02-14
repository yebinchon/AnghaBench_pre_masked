
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
typedef scalar_t__ os_time_t ;


 scalar_t__ FUNC_0 (struct tm*) ;
 int FUNC_1 (struct tm*,int ,int) ;

int FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5,
       os_time_t *VAR_6)
{
 struct tm VAR_7;

 if (VAR_0 < 1970 || VAR_1 < 1 || VAR_1 > 12 || VAR_2 < 1 || VAR_2 > 31 ||
     VAR_3 < 0 || VAR_3 > 23 || VAR_4 < 0 || VAR_4 > 59 || VAR_5 < 0 ||
     VAR_5 > 60)
  return -1;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.tm_year = VAR_0 - 1900;
 VAR_7.tm_mon = VAR_1 - 1;
 VAR_7.tm_mday = VAR_2;
 VAR_7.tm_hour = VAR_3;
 VAR_7.tm_min = VAR_4;
 VAR_7.tm_sec = VAR_5;

 *VAR_6 = (os_time_t) FUNC_0(&VAR_7);
 return 0;
}
