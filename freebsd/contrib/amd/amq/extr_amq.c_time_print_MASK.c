
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_type ;
typedef int time_t ;
struct tm {int tm_mon; int tm_mday; int tm_year; int tm_hour; int tm_min; int tm_sec; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(time_type VAR_0)
{
  time_t VAR_1 = (time_t)(intptr_t)VAR_0;
  struct tm *VAR_2 = FUNC_0(&VAR_1);
  FUNC_1("%02d/%02d/%04d %02d:%02d:%02d",
  VAR_2->tm_mon + 1, VAR_2->tm_mday,
  VAR_2->tm_year < 1900 ? VAR_2->tm_year + 1900 : VAR_2->tm_year,
  VAR_2->tm_hour, VAR_2->tm_min, VAR_2->tm_sec);
}
