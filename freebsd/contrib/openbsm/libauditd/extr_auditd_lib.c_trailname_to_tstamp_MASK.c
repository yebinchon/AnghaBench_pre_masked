
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
typedef int tm ;
typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; scalar_t__ tm_year; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (struct tm*,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (struct tm*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_2, time_t *VAR_3)
{
 struct tm VAR_4;
 char VAR_5[VAR_1 + 1];
 char *VAR_6;

 *VAR_3 = 0;




 if ((VAR_6 = FUNC_2(VAR_2, '.')) == ((void*)0))
  return (1);
 FUNC_3(VAR_5, ++VAR_6, sizeof(VAR_5));
 if (FUNC_4(VAR_5) != VAR_0)
  return (1);

 FUNC_1(&VAR_4, sizeof(VAR_4));


 VAR_6 = VAR_5 + VAR_0 - 2;
 VAR_4.tm_sec = FUNC_0(VAR_6);
 if (VAR_4.tm_sec < 0 || VAR_4.tm_sec > 60)
  return (1);


 *VAR_6 = '\0'; VAR_6 -= 2;
 VAR_4.tm_min = FUNC_0(VAR_6);
 if (VAR_4.tm_min < 0 || VAR_4.tm_min > 59)
  return (1);


 *VAR_6 = '\0'; VAR_6 -= 2;
 VAR_4.tm_hour = FUNC_0(VAR_6);
 if (VAR_4.tm_hour < 0 || VAR_4.tm_hour > 23)
  return (1);


 *VAR_6 = '\0'; VAR_6 -= 2;
 VAR_4.tm_mday = FUNC_0(VAR_6);
 if (VAR_4.tm_mday < 1 || VAR_4.tm_mday > 31)
  return (1);


 *VAR_6 = '\0'; VAR_6 -= 2;
 VAR_4.tm_mon = FUNC_0(VAR_6) - 1;
 if (VAR_4.tm_mon < 0 || VAR_4.tm_mon > 11)
  return (1);


 *VAR_6 = '\0'; VAR_6 -= 4;
 VAR_4.tm_year = FUNC_0(VAR_6) - 1900;
 if (VAR_4.tm_year < 0)
  return (1);

 *VAR_3 = FUNC_5(&VAR_4);

 return (0);
}
