
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nlast_block; int last_block; int tbl; int k2; int k1; int cctx; } ;
typedef TYPE_1__ CMAC_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(CMAC_CTX *VAR_0, const CMAC_CTX *VAR_1)
{
    int VAR_2;
    if (VAR_1->nlast_block == -1)
        return 0;
    if (!FUNC_1(VAR_0->cctx, VAR_1->cctx))
        return 0;
    VAR_2 = FUNC_0(VAR_1->cctx);
    FUNC_2(VAR_0->k1, VAR_1->k1, VAR_2);
    FUNC_2(VAR_0->k2, VAR_1->k2, VAR_2);
    FUNC_2(VAR_0->tbl, VAR_1->tbl, VAR_2);
    FUNC_2(VAR_0->last_block, VAR_1->last_block, VAR_2);
    VAR_0->nlast_block = VAR_1->nlast_block;
    return 1;
}
