
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t temp ;
struct TYPE_3__ {int* rd_key; int rounds; } ;
typedef TYPE_1__ AES_KEY ;


 int FUNC_0 (unsigned char const*) ;
 scalar_t__* VAR_0 ;
 int* VAR_1 ;

int FUNC_1(const unsigned char *VAR_2, const int VAR_3,
                        AES_KEY *VAR_4)
{

    u32 *VAR_5;
    int VAR_6 = 0;
    u32 VAR_7;

    if (!VAR_2 || !VAR_4)
        return -1;
    if (VAR_3 != 128 && VAR_3 != 192 && VAR_3 != 256)
        return -2;

    VAR_5 = VAR_4->rd_key;

    if (VAR_3==128)
        VAR_4->rounds = 10;
    else if (VAR_3==192)
        VAR_4->rounds = 12;
    else
        VAR_4->rounds = 14;

    VAR_5[0] = FUNC_0(VAR_2 );
    VAR_5[1] = FUNC_0(VAR_2 + 4);
    VAR_5[2] = FUNC_0(VAR_2 + 8);
    VAR_5[3] = FUNC_0(VAR_2 + 12);
    if (VAR_3 == 128) {
        while (1) {
            VAR_7 = VAR_5[3];
            VAR_5[4] = VAR_5[0] ^
                ((u32)VAR_0[(VAR_7 >> 8) & 0xff] ) ^
                ((u32)VAR_0[(VAR_7 >> 16) & 0xff] << 8) ^
                ((u32)VAR_0[(VAR_7 >> 24) ] << 16) ^
                ((u32)VAR_0[(VAR_7 ) & 0xff] << 24) ^
                VAR_1[VAR_6];
            VAR_5[5] = VAR_5[1] ^ VAR_5[4];
            VAR_5[6] = VAR_5[2] ^ VAR_5[5];
            VAR_5[7] = VAR_5[3] ^ VAR_5[6];
            if (++VAR_6 == 10) {
                return 0;
            }
            VAR_5 += 4;
        }
    }
    VAR_5[4] = FUNC_0(VAR_2 + 16);
    VAR_5[5] = FUNC_0(VAR_2 + 20);
    if (VAR_3 == 192) {
        while (1) {
            VAR_7 = VAR_5[ 5];
            VAR_5[ 6] = VAR_5[ 0] ^
                ((u32)VAR_0[(VAR_7 >> 8) & 0xff] ) ^
                ((u32)VAR_0[(VAR_7 >> 16) & 0xff] << 8) ^
                ((u32)VAR_0[(VAR_7 >> 24) ] << 16) ^
                ((u32)VAR_0[(VAR_7 ) & 0xff] << 24) ^
                VAR_1[VAR_6];
            VAR_5[ 7] = VAR_5[ 1] ^ VAR_5[ 6];
            VAR_5[ 8] = VAR_5[ 2] ^ VAR_5[ 7];
            VAR_5[ 9] = VAR_5[ 3] ^ VAR_5[ 8];
            if (++VAR_6 == 8) {
                return 0;
            }
            VAR_5[10] = VAR_5[ 4] ^ VAR_5[ 9];
            VAR_5[11] = VAR_5[ 5] ^ VAR_5[10];
            VAR_5 += 6;
        }
    }
    VAR_5[6] = FUNC_0(VAR_2 + 24);
    VAR_5[7] = FUNC_0(VAR_2 + 28);
    if (VAR_3 == 256) {
        while (1) {
            VAR_7 = VAR_5[ 7];
            VAR_5[ 8] = VAR_5[ 0] ^
                ((u32)VAR_0[(VAR_7 >> 8) & 0xff] ) ^
                ((u32)VAR_0[(VAR_7 >> 16) & 0xff] << 8) ^
                ((u32)VAR_0[(VAR_7 >> 24) ] << 16) ^
                ((u32)VAR_0[(VAR_7 ) & 0xff] << 24) ^
                VAR_1[VAR_6];
            VAR_5[ 9] = VAR_5[ 1] ^ VAR_5[ 8];
            VAR_5[10] = VAR_5[ 2] ^ VAR_5[ 9];
            VAR_5[11] = VAR_5[ 3] ^ VAR_5[10];
            if (++VAR_6 == 7) {
                return 0;
            }
            VAR_7 = VAR_5[11];
            VAR_5[12] = VAR_5[ 4] ^
                ((u32)VAR_0[(VAR_7 ) & 0xff] ) ^
                ((u32)VAR_0[(VAR_7 >> 8) & 0xff] << 8) ^
                ((u32)VAR_0[(VAR_7 >> 16) & 0xff] << 16) ^
                ((u32)VAR_0[(VAR_7 >> 24) ] << 24);
            VAR_5[13] = VAR_5[ 5] ^ VAR_5[12];
            VAR_5[14] = VAR_5[ 6] ^ VAR_5[13];
            VAR_5[15] = VAR_5[ 7] ^ VAR_5[14];

            VAR_5 += 8;
            }
    }
    return 0;
}
