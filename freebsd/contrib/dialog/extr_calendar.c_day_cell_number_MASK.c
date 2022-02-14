
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mday; int tm_wday; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct tm *VAR_1)
{
    int VAR_2;
    VAR_2 = VAR_1->tm_mday - ((6 + VAR_1->tm_mday - VAR_1->tm_wday) % VAR_0);
    if ((VAR_1->tm_mday - 1) % VAR_0 != VAR_1->tm_wday)
 VAR_2 += 6;
    else
 VAR_2--;
    return VAR_2;
}
