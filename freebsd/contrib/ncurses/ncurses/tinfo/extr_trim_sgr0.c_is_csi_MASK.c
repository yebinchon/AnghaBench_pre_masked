
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char const VAR_1 ;
 char const VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_3)
{
    int VAR_4 = 0;
    if (VAR_3 != 0) {
 if (FUNC_0(VAR_3[0]) == VAR_0)
     VAR_4 = 1;
 else if (VAR_3[0] == VAR_1 && VAR_3[1] == VAR_2)
     VAR_4 = 2;
    }
    return VAR_4;
}
