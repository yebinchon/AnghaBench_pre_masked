
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; scalar_t__ tm_mon; int tm_mday; } ;


 char const* FUNC_0 (char const*,char*,struct tm*) ;

int
FUNC_1(void)
{
 struct tm VAR_0;
 const char VAR_1[] = "2014-01-04";
 return ! (FUNC_0(VAR_1, "%Y-%m-%d", &VAR_0) == VAR_1 + 10 &&
     VAR_0.tm_year == 114 && VAR_0.tm_mon == 0 && VAR_0.tm_mday == 4);
}
