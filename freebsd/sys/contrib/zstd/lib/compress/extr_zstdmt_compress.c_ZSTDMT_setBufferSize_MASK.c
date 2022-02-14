
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t bufferSize; int poolMutex; } ;
typedef TYPE_1__ ZSTDMT_bufferPool ;
typedef int U32 ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ZSTDMT_bufferPool* const VAR_0, size_t const VAR_1)
{
    FUNC_1(&VAR_0->poolMutex);
    FUNC_0(4, "ZSTDMT_setBufferSize: bSize = %u", (U32)VAR_1);
    VAR_0->bufferSize = VAR_1;
    FUNC_2(&VAR_0->poolMutex);
}
