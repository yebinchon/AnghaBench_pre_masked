
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static unsigned long
FUNC_1(const char *VAR_0)
{
    unsigned long VAR_1 = 0;

    if ((intptr_t) VAR_0 == (intptr_t) (-1)) {
 VAR_1 = ~VAR_1;
    } else if (VAR_0) {
 while (*VAR_0) {
     VAR_1 += FUNC_0(*VAR_0);
     ++VAR_0;
 }
    }
    return VAR_1;
}
