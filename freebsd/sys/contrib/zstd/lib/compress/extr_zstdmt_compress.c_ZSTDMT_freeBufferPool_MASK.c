
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int totalBuffers; int cMem; int poolMutex; TYPE_1__* bTable; } ;
typedef TYPE_2__ ZSTDMT_bufferPool ;
typedef int U32 ;
struct TYPE_5__ {TYPE_2__* start; } ;


 int FUNC_0 (int,char*,unsigned int,...) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ZSTDMT_bufferPool* VAR_0)
{
    unsigned VAR_1;
    FUNC_0(3, "ZSTDMT_freeBufferPool (address:%08X)", (U32)(size_t)VAR_0);
    if (!VAR_0) return;
    for (VAR_1=0; VAR_1<VAR_0->totalBuffers; VAR_1++) {
        FUNC_0(4, "free buffer %2u (address:%08X)", VAR_1, (U32)(size_t)VAR_0->bTable[VAR_1].start);
        FUNC_1(VAR_0->bTable[VAR_1].start, VAR_0->cMem);
    }
    FUNC_2(&VAR_0->poolMutex);
    FUNC_1(VAR_0, VAR_0->cMem);
}
