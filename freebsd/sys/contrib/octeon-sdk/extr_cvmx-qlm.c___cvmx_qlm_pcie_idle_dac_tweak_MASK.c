
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int,char*,int) ;

void FUNC_2(void)
{
    int VAR_4 = 0;
    int VAR_5;

    if (FUNC_0(VAR_3))
        VAR_4 = 5;
    else if (FUNC_0(VAR_2))
        VAR_4 = 3;
    else if (FUNC_0(VAR_0) ||
             FUNC_0(VAR_1))
        VAR_4 = 3;
    else
        return;


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        FUNC_1(VAR_5, -1, "idle_dac", 0x2);
}
