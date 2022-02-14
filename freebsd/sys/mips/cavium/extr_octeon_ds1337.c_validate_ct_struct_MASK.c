
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocktime {int sec; int min; int hour; int day; int dow; int mon; int year; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static int FUNC_1(struct clocktime *VAR_0)
{
    int VAR_1 = 0;

    if (!VAR_0)
 return -1;

    FUNC_0(VAR_0->sec < 0 || VAR_0->sec > 60, "second");
    FUNC_0(VAR_0->min < 0 || VAR_0->min > 59, "minute");
    FUNC_0(VAR_0->hour < 0 || VAR_0->hour > 23, "hour");
    FUNC_0(VAR_0->day < 1 || VAR_0->day > 31, "day");
    FUNC_0(VAR_0->dow < 0 || VAR_0->dow > 6, "day of week");
    FUNC_0(VAR_0->mon < 1 || VAR_0->mon > 12, "month");
    FUNC_0(VAR_0->year > 2037,"year");

    return VAR_1;
}
