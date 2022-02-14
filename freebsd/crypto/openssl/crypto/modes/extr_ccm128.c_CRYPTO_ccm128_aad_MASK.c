
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int (* block128_f ) (int*,int*,int ) ;
typedef int alen ;
struct TYPE_6__ {int* c; } ;
struct TYPE_5__ {int* c; } ;
struct TYPE_7__ {int blocks; int key; TYPE_2__ cmac; TYPE_1__ nonce; int (* block ) (int*,int*,int ) ;} ;
typedef TYPE_3__ CCM128_CONTEXT ;


 int FUNC_0 (int*,int*,int ) ;
 int FUNC_1 (int*,int*,int ) ;

void FUNC_2(CCM128_CONTEXT *VAR_0,
                       const unsigned char *VAR_1, size_t VAR_2)
{
    unsigned int VAR_3;
    block128_f VAR_4 = VAR_0->block;

    if (VAR_2 == 0)
        return;

    VAR_0->nonce.c[0] |= 0x40;
    (*VAR_4) (VAR_0->nonce.c, VAR_0->cmac.c, VAR_0->key), VAR_0->blocks++;

    if (VAR_2 < (0x10000 - 0x100)) {
        VAR_0->cmac.c[0] ^= (u8)(VAR_2 >> 8);
        VAR_0->cmac.c[1] ^= (u8)VAR_2;
        VAR_3 = 2;
    } else if (sizeof(VAR_2) == 8
               && VAR_2 >= (size_t)1 << (32 % (sizeof(VAR_2) * 8))) {
        VAR_0->cmac.c[0] ^= 0xFF;
        VAR_0->cmac.c[1] ^= 0xFF;
        VAR_0->cmac.c[2] ^= (u8)(VAR_2 >> (56 % (sizeof(VAR_2) * 8)));
        VAR_0->cmac.c[3] ^= (u8)(VAR_2 >> (48 % (sizeof(VAR_2) * 8)));
        VAR_0->cmac.c[4] ^= (u8)(VAR_2 >> (40 % (sizeof(VAR_2) * 8)));
        VAR_0->cmac.c[5] ^= (u8)(VAR_2 >> (32 % (sizeof(VAR_2) * 8)));
        VAR_0->cmac.c[6] ^= (u8)(VAR_2 >> 24);
        VAR_0->cmac.c[7] ^= (u8)(VAR_2 >> 16);
        VAR_0->cmac.c[8] ^= (u8)(VAR_2 >> 8);
        VAR_0->cmac.c[9] ^= (u8)VAR_2;
        VAR_3 = 10;
    } else {
        VAR_0->cmac.c[0] ^= 0xFF;
        VAR_0->cmac.c[1] ^= 0xFE;
        VAR_0->cmac.c[2] ^= (u8)(VAR_2 >> 24);
        VAR_0->cmac.c[3] ^= (u8)(VAR_2 >> 16);
        VAR_0->cmac.c[4] ^= (u8)(VAR_2 >> 8);
        VAR_0->cmac.c[5] ^= (u8)VAR_2;
        VAR_3 = 6;
    }

    do {
        for (; VAR_3 < 16 && VAR_2; ++VAR_3, ++VAR_1, --VAR_2)
            VAR_0->cmac.c[VAR_3] ^= *VAR_1;
        (*VAR_4) (VAR_0->cmac.c, VAR_0->cmac.c, VAR_0->key), VAR_0->blocks++;
        VAR_3 = 0;
    } while (VAR_2);
}
