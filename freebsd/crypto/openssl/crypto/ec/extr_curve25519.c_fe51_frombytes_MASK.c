
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int* fe51 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(fe51 VAR_1, const uint8_t *VAR_2)
{
    uint64_t VAR_3 = FUNC_1(VAR_2);
    uint64_t VAR_4 = FUNC_0(VAR_2 + 7) << 5;
    uint64_t VAR_5 = FUNC_1(VAR_2 + 13) << 2;
    uint64_t VAR_6 = FUNC_0(VAR_2 + 20) << 7;
    uint64_t VAR_7 = (FUNC_0(VAR_2 + 26) & 0x7fffffffffff) << 4;

    VAR_4 |= VAR_3 >> 51; VAR_3 &= VAR_0;
    VAR_5 |= VAR_4 >> 51; VAR_4 &= VAR_0;
    VAR_6 |= VAR_5 >> 51; VAR_5 &= VAR_0;
    VAR_7 |= VAR_6 >> 51; VAR_6 &= VAR_0;

    VAR_1[0] = VAR_3;
    VAR_1[1] = VAR_4;
    VAR_1[2] = VAR_5;
    VAR_1[3] = VAR_6;
    VAR_1[4] = VAR_7;
}
