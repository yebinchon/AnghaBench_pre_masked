
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int opaque; scalar_t__ (* customAlloc ) (int ,int) ;int customFree; } ;
typedef TYPE_1__ ZSTDv07_customMem ;
struct TYPE_9__ {int customMem; } ;
typedef TYPE_2__ ZSTDv07_DCtx ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

ZSTDv07_DCtx* FUNC_3(ZSTDv07_customMem VAR_1)
{
    ZSTDv07_DCtx* VAR_2;

    if (!VAR_1.customAlloc && !VAR_1.customFree)
        VAR_1 = VAR_0;

    if (!VAR_1.customAlloc || !VAR_1.customFree)
        return ((void*)0);

    VAR_2 = (ZSTDv07_DCtx*) VAR_1.customAlloc(VAR_1.opaque, sizeof(ZSTDv07_DCtx));
    if (!VAR_2) return ((void*)0);
    FUNC_1(&VAR_2->customMem, &VAR_1, sizeof(ZSTDv07_customMem));
    FUNC_0(VAR_2);
    return VAR_2;
}
