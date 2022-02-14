
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

void FUNC_2(void)
{
    uint64_t VAR_1;
    uint64_t VAR_2;
    uint64_t VAR_3;
    uint64_t VAR_4;
    asm ("dmfc0 %0, $25, 1\n" : "=r"(VAR_3));
    asm ("dmfc0 %0, $25, 3\n" : "=r"(VAR_4));
    asm ("mfc0 %0, $25, 0\n" : "=r"(VAR_1));
    asm ("mfc0 %0, $25, 2\n" : "=r"(VAR_2));
    FUNC_1(FUNC_0(VAR_0, 3));
    FUNC_1(((VAR_1 & 0xffffffff) << 32) | (VAR_2 & 0xffffffff));
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
}
