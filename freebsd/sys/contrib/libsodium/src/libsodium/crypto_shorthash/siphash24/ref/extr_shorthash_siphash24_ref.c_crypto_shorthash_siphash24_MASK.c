
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (unsigned char const*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,int) ;

int
FUNC_2(unsigned char *VAR_1, const unsigned char *VAR_2,
                           unsigned long long VAR_3, const unsigned char *VAR_4)
{

    uint64_t VAR_5 = 0x736f6d6570736575ULL;
    uint64_t VAR_6 = 0x646f72616e646f6dULL;
    uint64_t VAR_7 = 0x6c7967656e657261ULL;
    uint64_t VAR_8 = 0x7465646279746573ULL;
    uint64_t VAR_9;
    uint64_t VAR_10 = FUNC_0(VAR_4);
    uint64_t VAR_11 = FUNC_0(VAR_4 + 8);
    uint64_t VAR_12;
    const uint8_t *VAR_13 = VAR_2 + VAR_3 - (VAR_3 % sizeof(uint64_t));
    const int VAR_14 = VAR_3 & 7;

    VAR_9 = ((uint64_t) VAR_3) << 56;
    VAR_8 ^= VAR_11;
    VAR_7 ^= VAR_10;
    VAR_6 ^= VAR_11;
    VAR_5 ^= VAR_10;
    for (; VAR_2 != VAR_13; VAR_2 += 8) {
        VAR_12 = FUNC_0(VAR_2);
        VAR_8 ^= VAR_12;
        VAR_0;
        VAR_0;
        VAR_5 ^= VAR_12;
    }
    switch (VAR_14) {
    case 7:
        VAR_9 |= ((uint64_t) VAR_2[6]) << 48;

    case 6:
        VAR_9 |= ((uint64_t) VAR_2[5]) << 40;

    case 5:
        VAR_9 |= ((uint64_t) VAR_2[4]) << 32;

    case 4:
        VAR_9 |= ((uint64_t) VAR_2[3]) << 24;

    case 3:
        VAR_9 |= ((uint64_t) VAR_2[2]) << 16;

    case 2:
        VAR_9 |= ((uint64_t) VAR_2[1]) << 8;

    case 1:
        VAR_9 |= ((uint64_t) VAR_2[0]);
        break;
    case 0:
        break;
    }
    VAR_8 ^= VAR_9;
    VAR_0;
    VAR_0;
    VAR_5 ^= VAR_9;
    VAR_7 ^= 0xff;
    VAR_0;
    VAR_0;
    VAR_0;
    VAR_0;
    VAR_9 = VAR_5 ^ VAR_6 ^ VAR_7 ^ VAR_8;
    FUNC_1(VAR_1, VAR_9);

    return 0;
}
