
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_yday; int tm_wday; scalar_t__ tm_year; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct tm *VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_0 (VAR_1->tm_year + VAR_0);

    VAR_1->tm_yday = VAR_2 * 7 + VAR_1->tm_wday - VAR_3;
    if (VAR_1->tm_yday < 0) {
 VAR_1->tm_wday = VAR_3;
 VAR_1->tm_yday = 0;
    }
}
