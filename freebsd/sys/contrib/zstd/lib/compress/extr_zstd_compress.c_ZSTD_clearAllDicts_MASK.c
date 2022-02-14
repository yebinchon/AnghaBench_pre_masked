
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cdict; int dictBuffer; } ;
struct TYPE_4__ {int * cdict; TYPE_2__ prefixDict; TYPE_2__ localDict; int customMem; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_3(ZSTD_CCtx* VAR_0)
{
    FUNC_0(VAR_0->localDict.dictBuffer, VAR_0->customMem);
    FUNC_1(VAR_0->localDict.cdict);
    FUNC_2(&VAR_0->localDict, 0, sizeof(VAR_0->localDict));
    FUNC_2(&VAR_0->prefixDict, 0, sizeof(VAR_0->prefixDict));
    VAR_0->cdict = ((void*)0);
}
