
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int ) ;

void FUNC_1(int VAR_0, int VAR_1)
{
    while (VAR_1 > 0)
    {
        int VAR_2 = VAR_1;
        if (VAR_2 > 32)
            VAR_2 = 32;
        FUNC_0(VAR_0, VAR_2, 0);
        VAR_1 -= VAR_2;
    }
}
