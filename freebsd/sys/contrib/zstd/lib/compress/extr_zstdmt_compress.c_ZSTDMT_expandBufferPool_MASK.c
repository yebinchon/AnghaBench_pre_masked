
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_7__ {unsigned int const totalBuffers; size_t bufferSize; int cMem; } ;
typedef TYPE_1__ ZSTDMT_bufferPool ;
typedef int U32 ;


 TYPE_1__* FUNC_0 (int,int const) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,size_t const) ;

__attribute__((used)) static ZSTDMT_bufferPool* FUNC_3(ZSTDMT_bufferPool* VAR_0, U32 VAR_1)
{
    unsigned const VAR_2 = 2*VAR_1 + 3;
    if (VAR_0==((void*)0)) return ((void*)0);
    if (VAR_0->totalBuffers >= VAR_2)
        return VAR_0;

    { ZSTD_customMem const VAR_3 = VAR_0->cMem;
        size_t const VAR_4 = VAR_0->bufferSize;
        ZSTDMT_bufferPool* VAR_5;
        FUNC_1(VAR_0);
        VAR_5 = FUNC_0(VAR_1, VAR_3);
        if (VAR_5==((void*)0)) return VAR_5;
        FUNC_2(VAR_5, VAR_4);
        return VAR_5;
    }
}
