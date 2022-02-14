
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; scalar_t__ tm_isdst; } ;


 int FUNC_0 (char const*,char*,int*,int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct tm*) ;

__attribute__((used)) static int
FUNC_3(time_t *VAR_0, const char *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
    struct tm VAR_8;

    if(FUNC_1(VAR_1, "-") == 0)
 return 0;
    if(FUNC_0(VAR_1, "%04d%02d%02d%02d%02d%02d",
       &VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7) != 6)
 return -1;
    VAR_8.tm_year = VAR_2 - 1900;
    VAR_8.tm_mon = VAR_3 - 1;
    VAR_8.tm_mday = VAR_4;
    VAR_8.tm_hour = VAR_5;
    VAR_8.tm_min = VAR_6;
    VAR_8.tm_sec = VAR_7;
    VAR_8.tm_isdst = 0;
    *VAR_0 = FUNC_2(&VAR_8);
    return 1;
}
