
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

int FUNC_2(void)
{
    int VAR_5 = 0;

    if (FUNC_0(VAR_4))
        VAR_5 = 1;
    else if (FUNC_0(VAR_3))
        VAR_5 = 2;
    else if (FUNC_0(VAR_2))
        VAR_5 = 1;
    else if (FUNC_0(VAR_1))
        VAR_5 = 1;
    else if (FUNC_0(VAR_0))
        VAR_5 = 1;
    else
        VAR_5 = 0;

    return FUNC_1(VAR_5);
}
