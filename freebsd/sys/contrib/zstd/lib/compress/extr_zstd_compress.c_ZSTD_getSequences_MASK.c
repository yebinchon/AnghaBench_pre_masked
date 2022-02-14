
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_Sequence ;
struct TYPE_6__ {int collectSequences; size_t seqIndex; size_t maxSequences; int * seqStart; } ;
struct TYPE_5__ {TYPE_2__ seqCollector; } ;
typedef TYPE_1__ ZSTD_CCtx ;
typedef TYPE_2__ SeqCollector ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,void*,size_t const,void const*,size_t) ;
 size_t FUNC_2 (size_t) ;
 int VAR_0 ;
 int FUNC_3 (void*,int ) ;
 void* FUNC_4 (size_t const,int ) ;
 int VAR_1 ;

size_t FUNC_5(ZSTD_CCtx* VAR_2, ZSTD_Sequence* VAR_3,
    size_t VAR_4, const void* VAR_5, size_t VAR_6)
{
    const size_t VAR_7 = FUNC_2(VAR_6);
    void* VAR_8 = FUNC_4(VAR_7, VAR_0);
    SeqCollector VAR_9;

    FUNC_0(VAR_8 == ((void*)0), VAR_1);

    VAR_9.collectSequences = 1;
    VAR_9.seqStart = VAR_3;
    VAR_9.seqIndex = 0;
    VAR_9.maxSequences = VAR_4;
    VAR_2->seqCollector = VAR_9;

    FUNC_1(VAR_2, VAR_8, VAR_7, VAR_5, VAR_6);
    FUNC_3(VAR_8, VAR_0);
    return VAR_2->seqCollector.seqIndex;
}
