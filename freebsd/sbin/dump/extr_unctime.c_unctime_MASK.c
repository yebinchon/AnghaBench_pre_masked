
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; } ;


 int FUNC_0 (struct tm*) ;
 char* FUNC_1 (char*,char*,struct tm*) ;

time_t
FUNC_2(char *VAR_0)
{
 struct tm VAR_1;

 VAR_0 = FUNC_1(VAR_0, "%a %b %e %T %Y", &VAR_1);
 if (VAR_0 == ((void*)0) || (*VAR_0 != '\n' && *VAR_0 != '\0'))
  return ((time_t)-1);
 VAR_1.tm_isdst = -1;
 return (FUNC_0(&VAR_1));
}
