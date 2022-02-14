
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;



__attribute__((used)) static void
FUNC_0(uint32_t VAR_0, struct tm *VAR_1)
{
    uint32_t VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_2 = VAR_0 & 0xFF;
    VAR_3 = ((VAR_0 & 0xFF00) >> 8) & 0xFF;
    VAR_4 = ((VAR_0 & 0xFF0000) >> 16) & 0xFF;
    VAR_5 = ((VAR_0 & 0xFF000000) >> 24) & 0xFF;

    VAR_1->tm_sec = 2 * (VAR_2 & 0x1F);
    VAR_1->tm_min = ((VAR_2 >> 5) & 0xFF) + ((VAR_3 & 0x7) << 3);
    VAR_1->tm_hour = (VAR_3 >> 3) & 0xFF;
    VAR_1->tm_mday = (VAR_4 & 0x1F);
    VAR_1->tm_mon = ((VAR_4 >> 5) & 0xFF) + ((VAR_5 & 0x1) << 3) - 1;
    VAR_1->tm_year = ((VAR_5 >> 1) & 0xFF) + 80;
}
