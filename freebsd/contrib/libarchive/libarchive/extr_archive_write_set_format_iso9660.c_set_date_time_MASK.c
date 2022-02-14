
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;


 int FUNC_0 (struct tm*) ;
 int FUNC_1 (struct tm*,int *) ;
 int FUNC_2 (unsigned char*,int,scalar_t__) ;
 int FUNC_3 (unsigned char*,char) ;

__attribute__((used)) static void
FUNC_4(unsigned char *VAR_0, time_t VAR_1)
{
 struct tm VAR_2;

 FUNC_1(&VAR_2, &VAR_1);
 FUNC_2(VAR_0, 4, VAR_2.tm_year + 1900);
 FUNC_2(VAR_0+4, 2, VAR_2.tm_mon + 1);
 FUNC_2(VAR_0+6, 2, VAR_2.tm_mday);
 FUNC_2(VAR_0+8, 2, VAR_2.tm_hour);
 FUNC_2(VAR_0+10, 2, VAR_2.tm_min);
 FUNC_2(VAR_0+12, 2, VAR_2.tm_sec);
 FUNC_2(VAR_0+14, 2, 0);
 FUNC_3(VAR_0+16, (char)(FUNC_0(&VAR_2)/(60*15)));
}
