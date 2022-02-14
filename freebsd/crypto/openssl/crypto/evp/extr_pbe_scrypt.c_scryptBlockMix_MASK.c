
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int X ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(uint32_t *VAR_0, uint32_t *VAR_1, uint64_t VAR_2)
{
    uint64_t VAR_3, VAR_4;
    uint32_t VAR_5[16], *VAR_6;

    FUNC_1(VAR_5, VAR_1 + (VAR_2 * 2 - 1) * 16, sizeof(VAR_5));
    VAR_6 = VAR_1;
    for (VAR_3 = 0; VAR_3 < VAR_2 * 2; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
            VAR_5[VAR_4] ^= *VAR_6++;
        FUNC_2(VAR_5);
        FUNC_1(VAR_0 + (VAR_3 / 2 + (VAR_3 & 1) * VAR_2) * 16, VAR_5, sizeof(VAR_5));
    }
    FUNC_0(VAR_5, sizeof(VAR_5));
}
