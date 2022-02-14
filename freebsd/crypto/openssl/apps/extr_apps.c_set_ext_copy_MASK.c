
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

int FUNC_1(int *VAR_3, const char *VAR_4)
{
    if (FUNC_0(VAR_4, "none") == 0)
        *VAR_3 = VAR_2;
    else if (FUNC_0(VAR_4, "copy") == 0)
        *VAR_3 = VAR_0;
    else if (FUNC_0(VAR_4, "copyall") == 0)
        *VAR_3 = VAR_1;
    else
        return 0;
    return 1;
}
