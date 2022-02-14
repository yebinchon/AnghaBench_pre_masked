
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

int
FUNC_0(const char *VAR_1, const char *VAR_2, register size_t VAR_3)
{
    register unsigned char VAR_4, VAR_5;

    for (; VAR_3 != 0; --VAR_3) {
 VAR_4 = (unsigned char) *VAR_1++;
 VAR_5 = (unsigned char) *VAR_2++;
 if (VAR_0[VAR_4] != VAR_0[VAR_5]) {
     return VAR_0[VAR_4] - VAR_0[VAR_5];
 }
 if (VAR_4 == '\0') {
     return 0;
 }
    }
    return 0;
}
