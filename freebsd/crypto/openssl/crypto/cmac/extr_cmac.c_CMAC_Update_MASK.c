
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nlast_block; unsigned char const* last_block; int tbl; int cctx; } ;
typedef TYPE_1__ CMAC_CTX ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned char const*,size_t) ;
 int FUNC_2 (unsigned char const*,unsigned char const*,size_t) ;

int FUNC_3(CMAC_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
    const unsigned char *VAR_3 = VAR_1;
    size_t VAR_4;
    if (VAR_0->nlast_block == -1)
        return 0;
    if (VAR_2 == 0)
        return 1;
    VAR_4 = FUNC_0(VAR_0->cctx);

    if (VAR_0->nlast_block > 0) {
        size_t VAR_5;
        VAR_5 = VAR_4 - VAR_0->nlast_block;
        if (VAR_2 < VAR_5)
            VAR_5 = VAR_2;
        FUNC_2(VAR_0->last_block + VAR_0->nlast_block, VAR_3, VAR_5);
        VAR_2 -= VAR_5;
        VAR_0->nlast_block += VAR_5;

        if (VAR_2 == 0)
            return 1;
        VAR_3 += VAR_5;

        if (!FUNC_1(VAR_0->cctx, VAR_0->tbl, VAR_0->last_block, VAR_4))
            return 0;
    }

    while (VAR_2 > VAR_4) {
        if (!FUNC_1(VAR_0->cctx, VAR_0->tbl, VAR_3, VAR_4))
            return 0;
        VAR_2 -= VAR_4;
        VAR_3 += VAR_4;
    }

    FUNC_2(VAR_0->last_block, VAR_3, VAR_2);
    VAR_0->nlast_block = VAR_2;
    return 1;

}
