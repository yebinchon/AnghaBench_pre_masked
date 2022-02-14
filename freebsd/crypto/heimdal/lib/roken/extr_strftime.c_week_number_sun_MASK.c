
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_yday; int tm_wday; } ;



__attribute__((used)) static int
FUNC_0 (const struct tm *VAR_0)
{
    return (VAR_0->tm_yday + 7 - (VAR_0->tm_yday % 7 - VAR_0->tm_wday + 7) % 7) / 7;
}
