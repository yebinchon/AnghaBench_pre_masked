
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buffer_t ;
struct TYPE_5__ {int totalBuffers; int poolMutex; TYPE_1__* bTable; } ;
typedef TYPE_2__ ZSTDMT_bufferPool ;
struct TYPE_4__ {scalar_t__ capacity; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static size_t FUNC_2(ZSTDMT_bufferPool* VAR_0)
{
    size_t const VAR_1 = sizeof(*VAR_0)
                          + (VAR_0->totalBuffers - 1) * sizeof(buffer_t);
    unsigned VAR_2;
    size_t VAR_3 = 0;
    FUNC_0(&VAR_0->poolMutex);
    for (VAR_2=0; VAR_2<VAR_0->totalBuffers; VAR_2++)
        VAR_3 += VAR_0->bTable[VAR_2].capacity;
    FUNC_1(&VAR_0->poolMutex);

    return VAR_1 + VAR_3;
}
