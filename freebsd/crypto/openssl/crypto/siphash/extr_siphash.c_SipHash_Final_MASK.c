
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int total_inlen; int v0; int v1; int v2; int v3; scalar_t__ hash_size; int len; int crounds; int drounds; int * leavings; } ;
typedef TYPE_1__ SIPHASH ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int) ;

int FUNC_1(SIPHASH *VAR_3, unsigned char *VAR_4, size_t VAR_5)
{

    int VAR_6;
    uint64_t VAR_7 = VAR_3->total_inlen << 56;
    uint64_t VAR_8 = VAR_3->v0;
    uint64_t VAR_9 = VAR_3->v1;
    uint64_t VAR_10 = VAR_3->v2;
    uint64_t VAR_11 = VAR_3->v3;

    if (VAR_5 != (size_t)VAR_3->hash_size)
        return 0;

    switch (VAR_3->len) {
    case 7:
        VAR_7 |= ((uint64_t)VAR_3->leavings[6]) << 48;

    case 6:
        VAR_7 |= ((uint64_t)VAR_3->leavings[5]) << 40;

    case 5:
        VAR_7 |= ((uint64_t)VAR_3->leavings[4]) << 32;

    case 4:
        VAR_7 |= ((uint64_t)VAR_3->leavings[3]) << 24;

    case 3:
        VAR_7 |= ((uint64_t)VAR_3->leavings[2]) << 16;

    case 2:
        VAR_7 |= ((uint64_t)VAR_3->leavings[1]) << 8;

    case 1:
        VAR_7 |= ((uint64_t)VAR_3->leavings[0]);
    case 0:
        break;
    }

    VAR_11 ^= VAR_7;
    for (VAR_6 = 0; VAR_6 < VAR_3->crounds; ++VAR_6)
        VAR_2;
    VAR_8 ^= VAR_7;
    if (VAR_3->hash_size == VAR_0)
        VAR_10 ^= 0xee;
    else
        VAR_10 ^= 0xff;
    for (VAR_6 = 0; VAR_6 < VAR_3->drounds; ++VAR_6)
        VAR_2;
    VAR_7 = VAR_8 ^ VAR_9 ^ VAR_10 ^ VAR_11;
    FUNC_0(VAR_4, VAR_7);
    if (VAR_3->hash_size == VAR_1)
        return 1;
    VAR_9 ^= 0xdd;
    for (VAR_6 = 0; VAR_6 < VAR_3->drounds; ++VAR_6)
        VAR_2;
    VAR_7 = VAR_8 ^ VAR_9 ^ VAR_10 ^ VAR_11;
    FUNC_0(VAR_4 + 8, VAR_7);
    return 1;
}
