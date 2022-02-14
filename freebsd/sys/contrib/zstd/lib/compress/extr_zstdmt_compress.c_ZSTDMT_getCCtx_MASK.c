
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_CCtx ;
struct TYPE_3__ {int availCCtx; int cMem; int poolMutex; int ** cctx; } ;
typedef TYPE_1__ ZSTDMT_CCtxPool ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ZSTD_CCtx* FUNC_4(ZSTDMT_CCtxPool* VAR_0)
{
    FUNC_0(5, "ZSTDMT_getCCtx");
    FUNC_2(&VAR_0->poolMutex);
    if (VAR_0->availCCtx) {
        VAR_0->availCCtx--;
        { ZSTD_CCtx* const VAR_1 = VAR_0->cctx[VAR_0->availCCtx];
            FUNC_3(&VAR_0->poolMutex);
            return VAR_1;
    } }
    FUNC_3(&VAR_0->poolMutex);
    FUNC_0(5, "create one more CCtx");
    return FUNC_1(VAR_0->cMem);
}
