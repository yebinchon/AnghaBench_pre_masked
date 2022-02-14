
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tstamp_t ;
typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_min; int tm_hour; } ;
typedef int buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 int FUNC_3 (char*,int,char*,int,int,int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(
 const char *VAR_1,
 tstamp_t VAR_2
 )
{
 char VAR_3[16];
 int VAR_4;

 time_t VAR_5 = (time_t)VAR_2 - VAR_0;
 struct tm *VAR_6 = FUNC_2(&VAR_5);

 if (((void*)0) == VAR_6)
  return;

 VAR_4 = FUNC_3(VAR_3, sizeof(VAR_3),
        "%04d%02d%02d%02d%02d",
        VAR_6->tm_year + 1900, VAR_6->tm_mon + 1, VAR_6->tm_mday,
        VAR_6->tm_hour, VAR_6->tm_min);
 FUNC_0(VAR_4 >= 0 && (size_t)VAR_4 < sizeof(VAR_3));
 FUNC_1(VAR_1, VAR_3, VAR_4);
}
