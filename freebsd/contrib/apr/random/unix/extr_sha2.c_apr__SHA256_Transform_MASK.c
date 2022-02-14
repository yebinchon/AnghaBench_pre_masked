
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sha2_word32 ;
struct TYPE_3__ {scalar_t__* state; scalar_t__ buffer; } ;
typedef TYPE_1__ SHA256_CTX ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

void FUNC_7(SHA256_CTX* VAR_1, const sha2_word32* VAR_2) {
        sha2_word32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
        sha2_word32 VAR_13, VAR_14, *VAR_15;
        int VAR_16;

        VAR_15 = (sha2_word32*)VAR_1->buffer;


        VAR_3 = VAR_1->state[0];
        VAR_4 = VAR_1->state[1];
        VAR_5 = VAR_1->state[2];
        VAR_6 = VAR_1->state[3];
        VAR_7 = VAR_1->state[4];
        VAR_8 = VAR_1->state[5];
        VAR_9 = VAR_1->state[6];
        VAR_10 = VAR_1->state[7];

        VAR_16 = 0;
        do {


                FUNC_2(*VAR_2++,VAR_15[VAR_16]);

                VAR_13 = VAR_10 + FUNC_4(VAR_7) + FUNC_0(VAR_7, VAR_8, VAR_9) + VAR_0[VAR_16] + VAR_15[VAR_16];




                VAR_14 = FUNC_3(VAR_3) + FUNC_1(VAR_3, VAR_4, VAR_5);
                VAR_10 = VAR_9;
                VAR_9 = VAR_8;
                VAR_8 = VAR_7;
                VAR_7 = VAR_6 + VAR_13;
                VAR_6 = VAR_5;
                VAR_5 = VAR_4;
                VAR_4 = VAR_3;
                VAR_3 = VAR_13 + VAR_14;

                VAR_16++;
        } while (VAR_16 < 16);

        do {

                VAR_11 = VAR_15[(VAR_16+1)&0x0f];
                VAR_11 = FUNC_5(VAR_11);
                VAR_12 = VAR_15[(VAR_16+14)&0x0f];
                VAR_12 = FUNC_6(VAR_12);


                VAR_13 = VAR_10 + FUNC_4(VAR_7) + FUNC_0(VAR_7, VAR_8, VAR_9) + VAR_0[VAR_16] +
                     (VAR_15[VAR_16&0x0f] += VAR_12 + VAR_15[(VAR_16+9)&0x0f] + VAR_11);
                VAR_14 = FUNC_3(VAR_3) + FUNC_1(VAR_3, VAR_4, VAR_5);
                VAR_10 = VAR_9;
                VAR_9 = VAR_8;
                VAR_8 = VAR_7;
                VAR_7 = VAR_6 + VAR_13;
                VAR_6 = VAR_5;
                VAR_5 = VAR_4;
                VAR_4 = VAR_3;
                VAR_3 = VAR_13 + VAR_14;

                VAR_16++;
        } while (VAR_16 < 64);


        VAR_1->state[0] += VAR_3;
        VAR_1->state[1] += VAR_4;
        VAR_1->state[2] += VAR_5;
        VAR_1->state[3] += VAR_6;
        VAR_1->state[4] += VAR_7;
        VAR_1->state[5] += VAR_8;
        VAR_1->state[6] += VAR_9;
        VAR_1->state[7] += VAR_10;


        VAR_3 = VAR_4 = VAR_5 = VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_13 = VAR_14 = 0;
}
