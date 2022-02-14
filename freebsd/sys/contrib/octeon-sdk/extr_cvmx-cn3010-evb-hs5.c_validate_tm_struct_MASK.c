
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; int tm_mon; int tm_year; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct tm * VAR_0)
{
    int VAR_1 = 0;

    if (!VAR_0)
 return -1;

    FUNC_0(VAR_0->tm_sec < 0 || VAR_0->tm_sec > 60, "second");
    FUNC_0(VAR_0->tm_min < 0 || VAR_0->tm_min > 59, "minute");
    FUNC_0(VAR_0->tm_hour < 0 || VAR_0->tm_hour > 23, "hour");
    FUNC_0(VAR_0->tm_mday < 1 || VAR_0->tm_mday > 31, "day");
    FUNC_0(VAR_0->tm_wday < 0 || VAR_0->tm_wday > 6, "day of week");
    FUNC_0(VAR_0->tm_mon < 0 || VAR_0->tm_mon > 11, "month");
    FUNC_0(VAR_0->tm_year < 0 || VAR_0->tm_year > 200,"year");

    return VAR_1;
}
