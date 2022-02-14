
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(void)
{
    extern unsigned int VAR_0[];

    if (VAR_0[1] & (1 << (62 - 32))) {
        ENGINE *VAR_1 = FUNC_2();
        if (!VAR_1)
            return;
        FUNC_0(VAR_1);
        FUNC_1(VAR_1);
        FUNC_3();
    }
}
