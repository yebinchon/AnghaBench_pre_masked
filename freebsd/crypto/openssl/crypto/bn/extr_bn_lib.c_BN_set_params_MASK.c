
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

void FUNC_0(int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
    if (VAR_8 >= 0) {
        if (VAR_8 > (int)(sizeof(int) * 8) - 1)
            VAR_8 = sizeof(int) * 8 - 1;
        VAR_0 = VAR_8;
        VAR_4 = 1 << VAR_8;
    }
    if (VAR_9 >= 0) {
        if (VAR_9 > (int)(sizeof(int) * 8) - 1)
            VAR_9 = sizeof(int) * 8 - 1;
        VAR_1 = VAR_9;
        VAR_5 = 1 << VAR_9;
    }
    if (VAR_10 >= 0) {
        if (VAR_10 > (int)(sizeof(int) * 8) - 1)
            VAR_10 = sizeof(int) * 8 - 1;
        VAR_2 = VAR_10;
        VAR_6 = 1 << VAR_10;
    }
    if (VAR_11 >= 0) {
        if (VAR_11 > (int)(sizeof(int) * 8) - 1)
            VAR_11 = sizeof(int) * 8 - 1;
        VAR_3 = VAR_11;
        VAR_7 = 1 << VAR_11;
    }
}
