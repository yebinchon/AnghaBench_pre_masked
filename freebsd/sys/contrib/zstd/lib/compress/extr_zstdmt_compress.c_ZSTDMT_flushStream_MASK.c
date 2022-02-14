
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_outBuffer ;
struct TYPE_6__ {TYPE_1__* cctxPool; scalar_t__ singleBlockingThread; } ;
typedef TYPE_2__ ZSTDMT_CCtx ;
struct TYPE_5__ {int * cctx; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 size_t FUNC_2 (int ,int *) ;

size_t FUNC_3(ZSTDMT_CCtx* VAR_1, ZSTD_outBuffer* VAR_2)
{
    FUNC_0(5, "ZSTDMT_flushStream");
    if (VAR_1->singleBlockingThread)
        return FUNC_2(VAR_1->cctxPool->cctx[0], VAR_2);
    return FUNC_1(VAR_1, VAR_2, VAR_0);
}
