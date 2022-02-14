
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (char*,int,char*,int,int,int,int,int,int) ;

__attribute__((used)) static char *
FUNC_2(time_t VAR_0)
{
 static char VAR_1[32];
 struct tm *VAR_2;

 VAR_2 = FUNC_0(&VAR_0);
 FUNC_1(VAR_1, sizeof(VAR_1), "%04d-%02d-%02dT%02d:%02d:%02d",
     VAR_2->tm_year + 1900, VAR_2->tm_mon + 1, VAR_2->tm_mday, VAR_2->tm_hour,
     VAR_2->tm_min, VAR_2->tm_sec);

 return (VAR_1);
}
