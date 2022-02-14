
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, uint64_t VAR_1, uint64_t VAR_2,
                        uint32_t *VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
    unsigned char *VAR_6;
    uint32_t *VAR_7;
    uint64_t VAR_8, VAR_9;


    for (VAR_7 = VAR_5, VAR_8 = 0, VAR_6 = VAR_0; VAR_8 < 32 * VAR_1; VAR_8++, VAR_7++) {
        *VAR_7 = *VAR_6++;
        *VAR_7 |= *VAR_6++ << 8;
        *VAR_7 |= *VAR_6++ << 16;
        *VAR_7 |= (uint32_t)*VAR_6++ << 24;
    }

    for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++, VAR_7 += 32 * VAR_1)
        FUNC_0(VAR_7, VAR_7 - 32 * VAR_1, VAR_1);

    FUNC_0(VAR_3, VAR_5 + (VAR_2 - 1) * 32 * VAR_1, VAR_1);

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        uint32_t VAR_10;
        VAR_10 = VAR_3[16 * (2 * VAR_1 - 1)] % VAR_2;
        VAR_7 = VAR_5 + 32 * VAR_1 * VAR_10;
        for (VAR_9 = 0; VAR_9 < 32 * VAR_1; VAR_9++)
            VAR_4[VAR_9] = VAR_3[VAR_9] ^ *VAR_7++;
        FUNC_0(VAR_3, VAR_4, VAR_1);
    }

    for (VAR_8 = 0, VAR_6 = VAR_0; VAR_8 < 32 * VAR_1; VAR_8++) {
        uint32_t VAR_11 = VAR_3[VAR_8];
        *VAR_6++ = VAR_11 & 0xff;
        *VAR_6++ = (VAR_11 >> 8) & 0xff;
        *VAR_6++ = (VAR_11 >> 16) & 0xff;
        *VAR_6++ = (VAR_11 >> 24) & 0xff;
    }
}
