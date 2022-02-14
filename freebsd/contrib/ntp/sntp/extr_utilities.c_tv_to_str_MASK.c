
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (size_t const) ;
 int FUNC_3 (int *) ;
 struct tm* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,size_t const,char*,int,int,int,int,int,int,int,int,int) ;

char *
FUNC_7(
 const struct timeval *VAR_0
 )
{
 const size_t VAR_1 = 48;
 char *VAR_2;
 time_t VAR_3, VAR_4;
 struct tm *VAR_5;
 int VAR_6, VAR_7, VAR_8;






 VAR_3 = VAR_0->tv_sec;
 VAR_4 = FUNC_5(FUNC_3(&VAR_3));
 VAR_5 = FUNC_4(&VAR_3);


 VAR_8 = FUNC_1(VAR_4, VAR_3);
 VAR_8 /= 60;
 VAR_6 = VAR_8 / 60;
 VAR_7 = FUNC_0(VAR_8 % 60);

 VAR_2 = FUNC_2(VAR_1);
 FUNC_6(VAR_2, VAR_1,
   "%d-%.2d-%.2d %.2d:%.2d:%.2d.%.6d (%+03d%02d)",
   VAR_5->tm_year + 1900,
   VAR_5->tm_mon + 1,
   VAR_5->tm_mday,
   VAR_5->tm_hour,
   VAR_5->tm_min,
   VAR_5->tm_sec,
   (int)VAR_0->tv_usec,
   VAR_6,
   VAR_7);

 return VAR_2;
}
