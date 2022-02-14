
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_yday; int tm_wday; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct tm *VAR_0)
{
    static const int VAR_1[12] = {
        0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334
    };
    int VAR_2 = VAR_0->tm_year + 1900;
    int VAR_3 = VAR_0->tm_mon;
    int VAR_4 = VAR_0->tm_mday;
    int VAR_5;

    VAR_0->tm_yday = VAR_1[VAR_3] + VAR_4 - 1;
    if (VAR_3 >= 2) {

        VAR_0->tm_yday += FUNC_0(VAR_2);
        VAR_3 += 2;
    } else {

        VAR_3 += 14;
        VAR_2--;
    }
    VAR_5 = VAR_2 / 100;
    VAR_2 %= 100;

    VAR_0->tm_wday = (VAR_4 + (13 * VAR_3) / 5 + VAR_2 + VAR_2 / 4 + VAR_5 / 4 + 5 * VAR_5 + 6) % 7;
}
