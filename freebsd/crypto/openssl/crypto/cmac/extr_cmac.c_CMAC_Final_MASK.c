
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nlast_block; unsigned char* last_block; unsigned char* k1; unsigned char* k2; int cctx; } ;
typedef TYPE_1__ CMAC_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int*,int ,int) ;

int FUNC_4(CMAC_CTX *VAR_0, unsigned char *VAR_1, size_t *VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    if (VAR_0->nlast_block == -1)
        return 0;
    VAR_4 = FUNC_0(VAR_0->cctx);
    *VAR_2 = (size_t)VAR_4;
    if (!VAR_1)
        return 1;
    VAR_5 = VAR_0->nlast_block;

    if (VAR_5 == VAR_4) {
        for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
            VAR_1[VAR_3] = VAR_0->last_block[VAR_3] ^ VAR_0->k1[VAR_3];
    } else {
        VAR_0->last_block[VAR_5] = 0x80;
        if (VAR_4 - VAR_5 > 1)
            FUNC_3(VAR_0->last_block + VAR_5 + 1, 0, VAR_4 - VAR_5 - 1);
        for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
            VAR_1[VAR_3] = VAR_0->last_block[VAR_3] ^ VAR_0->k2[VAR_3];
    }
    if (!FUNC_1(VAR_0->cctx, VAR_1, VAR_1, VAR_4)) {
        FUNC_2(VAR_1, VAR_4);
        return 0;
    }
    return 1;
}
