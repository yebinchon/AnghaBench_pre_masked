
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nlast_block; int * cctx; } ;
typedef TYPE_1__ CMAC_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

CMAC_CTX *FUNC_4(void)
{
    CMAC_CTX *VAR_2;

    if ((VAR_2 = FUNC_3(sizeof(*VAR_2))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_2->cctx = FUNC_1();
    if (VAR_2->cctx == ((void*)0)) {
        FUNC_2(VAR_2);
        return ((void*)0);
    }
    VAR_2->nlast_block = -1;
    return VAR_2;
}
