
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u128 ;
struct TYPE_2__ {int* r; int* s; int* h; } ;
typedef TYPE_1__ poly1305_internal ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned char const*) ;

void FUNC_1(void *VAR_1, const unsigned char *VAR_2, size_t VAR_3,
                     u32 VAR_4)
{
    poly1305_internal *VAR_5 = (poly1305_internal *)VAR_1;
    u64 VAR_6, VAR_7, VAR_8;
    u64 VAR_9, VAR_10;
    u64 VAR_11, VAR_12, VAR_13, VAR_14;
    u128 VAR_15, VAR_16, VAR_17;
    u64 VAR_18 = (u64)VAR_4 << 40;

    VAR_6 = VAR_5->r[0];
    VAR_7 = VAR_5->r[1];
    VAR_8 = VAR_5->r[2];

    VAR_9 = VAR_5->s[0];
    VAR_10 = VAR_5->s[1];

    VAR_11 = VAR_5->h[0];
    VAR_12 = VAR_5->h[1];
    VAR_13 = VAR_5->h[2];

    while (VAR_3 >= VAR_0) {
        u64 VAR_19, VAR_20;

        VAR_19 = FUNC_0(VAR_2 + 0);
        VAR_20 = FUNC_0(VAR_2 + 8);


        VAR_11 += VAR_19 & 0x0fffffffffff;
        VAR_12 += ((VAR_19 >> 44) | (VAR_20 << 20)) & 0x0fffffffffff;
        VAR_13 += (VAR_20 >> 24) + VAR_18;


        VAR_15 = ((u128)VAR_11 * VAR_6) + ((u128)VAR_12 * VAR_10) + ((u128)VAR_13 * VAR_9);
        VAR_16 = ((u128)VAR_11 * VAR_7) + ((u128)VAR_12 * VAR_6) + ((u128)VAR_13 * VAR_10);
        VAR_17 = ((u128)VAR_11 * VAR_8) + ((u128)VAR_12 * VAR_7) + ((u128)VAR_13 * VAR_6);


        VAR_11 = (u64)VAR_15 & 0x0fffffffffff;
        VAR_12 = (u64)(VAR_16 += (u64)(VAR_15 >> 44)) & 0x0fffffffffff;
        VAR_13 = (u64)(VAR_17 += (u64)(VAR_16 >> 44)) & 0x03ffffffffff;

        VAR_14 = (VAR_17 >> 42);
        VAR_11 += VAR_14 + (VAR_14 << 2);

        VAR_2 += VAR_0;
        VAR_3 -= VAR_0;
    }

    VAR_5->h[0] = VAR_11;
    VAR_5->h[1] = VAR_12;
    VAR_5->h[2] = VAR_13;
}
