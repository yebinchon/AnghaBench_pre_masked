
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
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

int FUNC_1(const unsigned char *VAR_5, const int VAR_6,
                        AES_KEY *VAR_7)
{

    u32 *VAR_8;
    int VAR_9 = 0;
    u32 VAR_10;

    if (!VAR_5 || !VAR_7)
        return -1;
    if (VAR_6 != 128 && VAR_6 != 192 && VAR_6 != 256)
        return -2;

    VAR_8 = VAR_7->rd_key;

    if (VAR_6 == 128)
        VAR_7->rounds = 10;
    else if (VAR_6 == 192)
        VAR_7->rounds = 12;
    else
        VAR_7->rounds = 14;

    VAR_8[0] = FUNC_0(VAR_5 );
    VAR_8[1] = FUNC_0(VAR_5 + 4);
    VAR_8[2] = FUNC_0(VAR_5 + 8);
    VAR_8[3] = FUNC_0(VAR_5 + 12);
    if (VAR_6 == 128) {
        while (1) {
            VAR_10 = VAR_8[3];
            VAR_8[4] = VAR_8[0] ^
                (VAR_2[(VAR_10 >> 16) & 0xff] & 0xff000000) ^
                (VAR_3[(VAR_10 >> 8) & 0xff] & 0x00ff0000) ^
                (VAR_0[(VAR_10 ) & 0xff] & 0x0000ff00) ^
                (VAR_1[(VAR_10 >> 24) ] & 0x000000ff) ^
                VAR_4[VAR_9];
            VAR_8[5] = VAR_8[1] ^ VAR_8[4];
            VAR_8[6] = VAR_8[2] ^ VAR_8[5];
            VAR_8[7] = VAR_8[3] ^ VAR_8[6];
            if (++VAR_9 == 10) {
                return 0;
            }
            VAR_8 += 4;
        }
    }
    VAR_8[4] = FUNC_0(VAR_5 + 16);
    VAR_8[5] = FUNC_0(VAR_5 + 20);
    if (VAR_6 == 192) {
        while (1) {
            VAR_10 = VAR_8[ 5];
            VAR_8[ 6] = VAR_8[ 0] ^
                (VAR_2[(VAR_10 >> 16) & 0xff] & 0xff000000) ^
                (VAR_3[(VAR_10 >> 8) & 0xff] & 0x00ff0000) ^
                (VAR_0[(VAR_10 ) & 0xff] & 0x0000ff00) ^
                (VAR_1[(VAR_10 >> 24) ] & 0x000000ff) ^
                VAR_4[VAR_9];
            VAR_8[ 7] = VAR_8[ 1] ^ VAR_8[ 6];
            VAR_8[ 8] = VAR_8[ 2] ^ VAR_8[ 7];
            VAR_8[ 9] = VAR_8[ 3] ^ VAR_8[ 8];
            if (++VAR_9 == 8) {
                return 0;
            }
            VAR_8[10] = VAR_8[ 4] ^ VAR_8[ 9];
            VAR_8[11] = VAR_8[ 5] ^ VAR_8[10];
            VAR_8 += 6;
        }
    }
    VAR_8[6] = FUNC_0(VAR_5 + 24);
    VAR_8[7] = FUNC_0(VAR_5 + 28);
    if (VAR_6 == 256) {
        while (1) {
            VAR_10 = VAR_8[ 7];
            VAR_8[ 8] = VAR_8[ 0] ^
                (VAR_2[(VAR_10 >> 16) & 0xff] & 0xff000000) ^
                (VAR_3[(VAR_10 >> 8) & 0xff] & 0x00ff0000) ^
                (VAR_0[(VAR_10 ) & 0xff] & 0x0000ff00) ^
                (VAR_1[(VAR_10 >> 24) ] & 0x000000ff) ^
                VAR_4[VAR_9];
            VAR_8[ 9] = VAR_8[ 1] ^ VAR_8[ 8];
            VAR_8[10] = VAR_8[ 2] ^ VAR_8[ 9];
            VAR_8[11] = VAR_8[ 3] ^ VAR_8[10];
            if (++VAR_9 == 7) {
                return 0;
            }
            VAR_10 = VAR_8[11];
            VAR_8[12] = VAR_8[ 4] ^
                (VAR_2[(VAR_10 >> 24) ] & 0xff000000) ^
                (VAR_3[(VAR_10 >> 16) & 0xff] & 0x00ff0000) ^
                (VAR_0[(VAR_10 >> 8) & 0xff] & 0x0000ff00) ^
                (VAR_1[(VAR_10 ) & 0xff] & 0x000000ff);
            VAR_8[13] = VAR_8[ 5] ^ VAR_8[12];
            VAR_8[14] = VAR_8[ 6] ^ VAR_8[13];
            VAR_8[15] = VAR_8[ 7] ^ VAR_8[14];

            VAR_8 += 8;
            }
    }
    return 0;
}
