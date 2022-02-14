
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(void)
{
    if (FUNC_0(VAR_0))
        return 64;
    else if (FUNC_0(VAR_1) || FUNC_0(VAR_2))
        return 256;
    else if (FUNC_0(VAR_3)
             || FUNC_0(VAR_4)
             || FUNC_0(VAR_7))
        return 512;
    else if (FUNC_0(VAR_5) || FUNC_0(VAR_6))
 return 1024;
    else
        return 2048;
}
