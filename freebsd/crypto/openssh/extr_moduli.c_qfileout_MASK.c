
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
typedef int FILE ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 struct tm* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(FILE * VAR_0, u_int32_t VAR_1, u_int32_t VAR_2, u_int32_t VAR_3,
    u_int32_t VAR_4, u_int32_t VAR_5, BIGNUM * VAR_6)
{
 struct tm *VAR_7;
 time_t VAR_8;
 int VAR_9;

 FUNC_4(&VAR_8);
 VAR_7 = FUNC_3(&VAR_8);

 VAR_9 = FUNC_2(VAR_0, "%04d%02d%02d%02d%02d%02d %u %u %u %u %x ",
     VAR_7->tm_year + 1900, VAR_7->tm_mon + 1, VAR_7->tm_mday,
     VAR_7->tm_hour, VAR_7->tm_min, VAR_7->tm_sec,
     VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_9 < 0)
  return (-1);

 if (FUNC_0(VAR_0, VAR_6) < 1)
  return (-1);

 VAR_9 = FUNC_2(VAR_0, "\n");
 FUNC_1(VAR_0);

 return (VAR_9 > 0 ? 0 : -1);
}
