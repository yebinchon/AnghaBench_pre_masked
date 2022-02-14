
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* state; int* cksm; } ;
typedef int MD2_INT ;
typedef TYPE_1__ MD2_CTX ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int* VAR_1 ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static void FUNC_2(MD2_CTX *VAR_2, const unsigned char *VAR_3)
{
    register MD2_INT VAR_4, *VAR_5, *VAR_6;
    register int VAR_7, VAR_8;
    MD2_INT VAR_9[48];

    VAR_5 = VAR_2->state;
    VAR_6 = VAR_2->cksm;
    VAR_8 = VAR_6[VAR_0 - 1];
    for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
        VAR_9[VAR_7] = VAR_5[VAR_7];
        VAR_9[VAR_7 + 16] = VAR_4 = VAR_3[VAR_7];
        VAR_9[VAR_7 + 32] = (VAR_4 ^ VAR_5[VAR_7]);
        VAR_8 = VAR_6[VAR_7] ^= VAR_1[VAR_4 ^ VAR_8];
    }
    VAR_4 = 0;
    for (VAR_7 = 0; VAR_7 < 18; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < 48; VAR_8 += 8) {
            VAR_4 = VAR_9[VAR_8 + 0] ^= VAR_1[VAR_4];
            VAR_4 = VAR_9[VAR_8 + 1] ^= VAR_1[VAR_4];
            VAR_4 = VAR_9[VAR_8 + 2] ^= VAR_1[VAR_4];
            VAR_4 = VAR_9[VAR_8 + 3] ^= VAR_1[VAR_4];
            VAR_4 = VAR_9[VAR_8 + 4] ^= VAR_1[VAR_4];
            VAR_4 = VAR_9[VAR_8 + 5] ^= VAR_1[VAR_4];
            VAR_4 = VAR_9[VAR_8 + 6] ^= VAR_1[VAR_4];
            VAR_4 = VAR_9[VAR_8 + 7] ^= VAR_1[VAR_4];
        }
        VAR_4 = (VAR_4 + VAR_7) & 0xff;
    }
    FUNC_1(VAR_5, VAR_9, 16 * sizeof(MD2_INT));
    FUNC_0(VAR_9, 48 * sizeof(MD2_INT));
}
