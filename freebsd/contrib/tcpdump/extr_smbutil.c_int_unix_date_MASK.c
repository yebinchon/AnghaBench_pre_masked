
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct tm {int tm_wday; int tm_yday; scalar_t__ tm_isdst; } ;


 int FUNC_0 (scalar_t__,struct tm*) ;
 int FUNC_1 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_2(uint32_t VAR_0)
{
    struct tm VAR_1;

    if (VAR_0 == 0)
 return(0);

    FUNC_0(VAR_0, &VAR_1);
    VAR_1.tm_wday = 1;
    VAR_1.tm_yday = 1;
    VAR_1.tm_isdst = 0;

    return (FUNC_1(&VAR_1));
}
