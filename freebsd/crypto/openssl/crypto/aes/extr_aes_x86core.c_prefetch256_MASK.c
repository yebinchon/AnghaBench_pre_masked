
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;



__attribute__((used)) static void FUNC_0(const void *VAR_0)
{
    volatile unsigned long *VAR_1=(void *)VAR_0,VAR_2;
    unsigned long VAR_3;
    int VAR_4;


    for (VAR_3=0,VAR_4=0;VAR_4<256/sizeof(VAR_1[0]);VAR_4+=32/sizeof(VAR_1[0])) VAR_3 ^= VAR_1[VAR_4];

    VAR_2 = VAR_3;
}
