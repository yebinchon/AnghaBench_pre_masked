
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* h; } ;
typedef scalar_t__ SHA_LONG64 ;
typedef TYPE_1__ SHA512_CTX ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(SHA512_CTX *VAR_1, const void *VAR_2,
                                    size_t VAR_3)
{
    const SHA_LONG64 *VAR_4 = VAR_2;
    SHA_LONG64 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    SHA_LONG64 VAR_16[16];
    int VAR_17;

    while (VAR_3--) {

        VAR_5 = VAR_1->h[0];
        VAR_6 = VAR_1->h[1];
        VAR_7 = VAR_1->h[2];
        VAR_8 = VAR_1->h[3];
        VAR_9 = VAR_1->h[4];
        VAR_10 = VAR_1->h[5];
        VAR_11 = VAR_1->h[6];
        VAR_12 = VAR_1->h[7];
        VAR_15 = VAR_16[0] = FUNC_0(VAR_4[0]);
        FUNC_1(0, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
        VAR_15 = VAR_16[1] = FUNC_0(VAR_4[1]);
        FUNC_1(1, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
        VAR_15 = VAR_16[2] = FUNC_0(VAR_4[2]);
        FUNC_1(2, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_15 = VAR_16[3] = FUNC_0(VAR_4[3]);
        FUNC_1(3, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        VAR_15 = VAR_16[4] = FUNC_0(VAR_4[4]);
        FUNC_1(4, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8);
        VAR_15 = VAR_16[5] = FUNC_0(VAR_4[5]);
        FUNC_1(5, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7);
        VAR_15 = VAR_16[6] = FUNC_0(VAR_4[6]);
        FUNC_1(6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6);
        VAR_15 = VAR_16[7] = FUNC_0(VAR_4[7]);
        FUNC_1(7, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5);
        VAR_15 = VAR_16[8] = FUNC_0(VAR_4[8]);
        FUNC_1(8, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
        VAR_15 = VAR_16[9] = FUNC_0(VAR_4[9]);
        FUNC_1(9, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
        VAR_15 = VAR_16[10] = FUNC_0(VAR_4[10]);
        FUNC_1(10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
        VAR_15 = VAR_16[11] = FUNC_0(VAR_4[11]);
        FUNC_1(11, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        VAR_15 = VAR_16[12] = FUNC_0(VAR_4[12]);
        FUNC_1(12, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8);
        VAR_15 = VAR_16[13] = FUNC_0(VAR_4[13]);
        FUNC_1(13, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7);
        VAR_15 = VAR_16[14] = FUNC_0(VAR_4[14]);
        FUNC_1(14, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6);
        VAR_15 = VAR_16[15] = FUNC_0(VAR_4[15]);
        FUNC_1(15, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5);


        for (VAR_17 = 16; VAR_17 < 80; VAR_17 += 16) {
            FUNC_2(VAR_17, 0, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_16);
            FUNC_2(VAR_17, 1, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_16);
            FUNC_2(VAR_17, 2, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_16);
            FUNC_2(VAR_17, 3, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_16);
            FUNC_2(VAR_17, 4, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_16);
            FUNC_2(VAR_17, 5, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_16);
            FUNC_2(VAR_17, 6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_16);
            FUNC_2(VAR_17, 7, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_16);
            FUNC_2(VAR_17, 8, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_16);
            FUNC_2(VAR_17, 9, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_16);
            FUNC_2(VAR_17, 10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_16);
            FUNC_2(VAR_17, 11, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_16);
            FUNC_2(VAR_17, 12, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_16);
            FUNC_2(VAR_17, 13, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_7, VAR_16);
            FUNC_2(VAR_17, 14, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_6, VAR_16);
            FUNC_2(VAR_17, 15, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, VAR_16);
        }

        VAR_1->h[0] += VAR_5;
        VAR_1->h[1] += VAR_6;
        VAR_1->h[2] += VAR_7;
        VAR_1->h[3] += VAR_8;
        VAR_1->h[4] += VAR_9;
        VAR_1->h[5] += VAR_10;
        VAR_1->h[6] += VAR_11;
        VAR_1->h[7] += VAR_12;

        VAR_4 += VAR_0;
    }
}
