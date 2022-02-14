
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_wday; int tm_yday; } ;



__attribute__((used)) static int
FUNC_0 (const struct tm *VAR_0)
{
    int VAR_1 = (VAR_0->tm_wday + 6) % 7;
    int VAR_2 = (VAR_1 - VAR_0->tm_yday % 7 + 7) % 7;
    int VAR_3;

    VAR_3 = (VAR_0->tm_yday + VAR_2) / 7;
    if (VAR_2 >= 4)
 --VAR_3;
    if (VAR_3 == -1)
 VAR_3 = 53;
    else
 ++VAR_3;
    return VAR_3;
}
