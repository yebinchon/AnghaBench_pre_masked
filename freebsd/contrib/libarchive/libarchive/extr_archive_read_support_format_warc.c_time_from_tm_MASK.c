
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_yday; int tm_year; } ;


 scalar_t__ FUNC_0 (struct tm*) ;
 scalar_t__ FUNC_1 (struct tm*) ;
 scalar_t__ FUNC_2 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_3(struct tm *VAR_0)
{
        if (FUNC_1(VAR_0) == (time_t)-1)
                return ((time_t)-1);

        return (VAR_0->tm_sec
            + VAR_0->tm_min * 60
            + VAR_0->tm_hour * 3600
            + VAR_0->tm_yday * 86400
            + (VAR_0->tm_year - 70) * 31536000
            + ((VAR_0->tm_year - 69) / 4) * 86400
            - ((VAR_0->tm_year - 1) / 100) * 86400
            + ((VAR_0->tm_year + 299) / 400) * 86400);

}
