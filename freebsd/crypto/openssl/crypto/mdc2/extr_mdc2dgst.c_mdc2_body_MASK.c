
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* h; int* hh; } ;
typedef TYPE_1__ MDC2_CTX ;
typedef int DES_key_schedule ;
typedef int DES_LONG ;


 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (int**,int *) ;
 int FUNC_2 (int**) ;
 int FUNC_3 (unsigned char const*,int) ;
 int FUNC_4 (int,unsigned char*) ;

__attribute__((used)) static void FUNC_5(MDC2_CTX *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    register DES_LONG VAR_3, VAR_4;
    register DES_LONG VAR_5, VAR_6;
    DES_LONG VAR_7[2], VAR_8[2];
    DES_key_schedule VAR_9;
    unsigned char *VAR_10;
    size_t VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11 += 8) {
        FUNC_3(VAR_1, VAR_3);
        VAR_7[0] = VAR_8[0] = VAR_3;
        FUNC_3(VAR_1, VAR_4);
        VAR_7[1] = VAR_8[1] = VAR_4;
        VAR_0->h[0] = (VAR_0->h[0] & 0x9f) | 0x40;
        VAR_0->hh[0] = (VAR_0->hh[0] & 0x9f) | 0x20;

        FUNC_2(&VAR_0->h);
        FUNC_1(&VAR_0->h, &VAR_9);
        FUNC_0(VAR_7, &VAR_9, 1);

        FUNC_2(&VAR_0->hh);
        FUNC_1(&VAR_0->hh, &VAR_9);
        FUNC_0(VAR_8, &VAR_9, 1);

        VAR_5 = VAR_3 ^ VAR_8[0];
        VAR_6 = VAR_4 ^ VAR_8[1];
        VAR_3 ^= VAR_7[0];
        VAR_4 ^= VAR_7[1];

        VAR_10 = VAR_0->h;
        FUNC_4(VAR_3, VAR_10);
        FUNC_4(VAR_6, VAR_10);
        VAR_10 = VAR_0->hh;
        FUNC_4(VAR_5, VAR_10);
        FUNC_4(VAR_4, VAR_10);
    }
}
