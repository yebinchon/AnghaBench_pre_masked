
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int customMem; int workspace; int staticSize; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

size_t FUNC_4(ZSTD_CCtx* VAR_1)
{
    if (VAR_1==((void*)0)) return 0;
    FUNC_0(VAR_1->staticSize, VAR_0,
                    "not compatible with static CCtx");
    {
        int VAR_2 = FUNC_1(&VAR_1->workspace, VAR_1);
        FUNC_3(VAR_1);
        if (!VAR_2) {
            FUNC_2(VAR_1, VAR_1->customMem);
        }
    }
    return 0;
}
