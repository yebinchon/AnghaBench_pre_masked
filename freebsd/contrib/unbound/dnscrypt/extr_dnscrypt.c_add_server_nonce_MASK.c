
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(uint8_t *VAR_1)
{
    uint64_t VAR_2;
    uint64_t VAR_3;
    uint32_t VAR_4;
    VAR_2 = FUNC_0();


    VAR_3 = (VAR_2 << 10) | (FUNC_3() & 0x3ff);

    VAR_3 =
        (((uint64_t)FUNC_1((uint32_t)VAR_3)) << 32) | FUNC_1((uint32_t)(VAR_3 >> 32));

    FUNC_2(VAR_1 + VAR_0, &VAR_3, 8);
    VAR_4 = FUNC_3();
    FUNC_2(VAR_1 + VAR_0 + 8, &VAR_4, 4);
}
