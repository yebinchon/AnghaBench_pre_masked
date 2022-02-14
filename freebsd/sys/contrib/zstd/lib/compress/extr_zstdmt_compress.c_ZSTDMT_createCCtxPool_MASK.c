
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_customMem ;
typedef int ZSTD_CCtx ;
struct TYPE_5__ {int totalCCtx; int availCCtx; int * cctx; int cMem; int poolMutex; } ;
typedef TYPE_1__ ZSTDMT_CCtxPool ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (TYPE_1__* const) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__* const,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static ZSTDMT_CCtxPool* FUNC_7(int VAR_0,
                                              ZSTD_customMem VAR_1)
{
    ZSTDMT_CCtxPool* const VAR_2 = (ZSTDMT_CCtxPool*) FUNC_2(
        sizeof(ZSTDMT_CCtxPool) + (VAR_0-1)*sizeof(ZSTD_CCtx*), VAR_1);
    FUNC_6(VAR_0 > 0);
    if (!VAR_2) return ((void*)0);
    if (FUNC_5(&VAR_2->poolMutex, ((void*)0))) {
        FUNC_4(VAR_2, VAR_1);
        return ((void*)0);
    }
    VAR_2->cMem = VAR_1;
    VAR_2->totalCCtx = VAR_0;
    VAR_2->availCCtx = 1;
    VAR_2->cctx[0] = FUNC_3(VAR_1);
    if (!VAR_2->cctx[0]) { FUNC_1(VAR_2); return ((void*)0); }
    FUNC_0(3, "cctxPool created, with %u workers", VAR_0);
    return VAR_2;
}
