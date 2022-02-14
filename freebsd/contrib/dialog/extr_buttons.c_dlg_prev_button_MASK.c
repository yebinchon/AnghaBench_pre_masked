
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0(const char **VAR_1, int VAR_2)
{
    if (VAR_2 > VAR_0) {
 --VAR_2;
    } else {
 if (VAR_2 < -1)
     VAR_2 = -1;

 while (VAR_1[VAR_2 + 1] != 0)
     ++VAR_2;
    }
    return VAR_2;
}
