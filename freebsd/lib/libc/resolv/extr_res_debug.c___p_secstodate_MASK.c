
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_sec; int tm_min; int tm_hour; } ;


 struct tm* FUNC_0 (int *) ;
 struct tm* FUNC_1 (int *,struct tm*) ;
 char* VAR_0 ;
 int FUNC_2 (char*,char*,int,int,int,int ,int ,int ) ;

char *
FUNC_3 (u_long VAR_1) {
 char *VAR_2 = VAR_0;
 time_t VAR_3 = VAR_1;
 struct tm *VAR_4;





 VAR_4 = FUNC_0(&VAR_3);

 VAR_4->tm_year += 1900;
 VAR_4->tm_mon += 1;
 FUNC_2(VAR_2, "%04d%02d%02d%02d%02d%02d",
  VAR_4->tm_year, VAR_4->tm_mon, VAR_4->tm_mday,
  VAR_4->tm_hour, VAR_4->tm_min, VAR_4->tm_sec);
 return (VAR_2);
}
