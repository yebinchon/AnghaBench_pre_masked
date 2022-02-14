
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nlast_block; int last_block; int k2; int k1; int tbl; int cctx; } ;
typedef TYPE_1__ CMAC_CTX ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(CMAC_CTX *VAR_1)
{
    FUNC_0(VAR_1->cctx);
    FUNC_1(VAR_1->tbl, VAR_0);
    FUNC_1(VAR_1->k1, VAR_0);
    FUNC_1(VAR_1->k2, VAR_0);
    FUNC_1(VAR_1->last_block, VAR_0);
    VAR_1->nlast_block = -1;
}
