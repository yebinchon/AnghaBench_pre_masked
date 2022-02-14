
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * base; } ;
struct TYPE_7__ {int hashLog; int minMatch; } ;
struct TYPE_6__ {int* hashTable; int nextToUpdate; TYPE_1__ window; TYPE_3__ cParams; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef scalar_t__ ZSTD_dictTableLoadMethod_e ;
typedef TYPE_3__ ZSTD_compressionParameters ;
typedef int U32 ;
typedef int BYTE ;


 int const* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int const*,int const,int const) ;

void FUNC_1(ZSTD_matchState_t* VAR_2,
                        const void* const VAR_3,
                        ZSTD_dictTableLoadMethod_e VAR_4)
{
    const ZSTD_compressionParameters* const VAR_5 = &VAR_2->cParams;
    U32* const VAR_6 = VAR_2->hashTable;
    U32 const VAR_7 = VAR_5->hashLog;
    U32 const VAR_8 = VAR_5->minMatch;
    const BYTE* const VAR_9 = VAR_2->window.base;
    const BYTE* VAR_10 = VAR_9 + VAR_2->nextToUpdate;
    const BYTE* const VAR_11 = ((const BYTE*)VAR_3) - VAR_0;
    const U32 VAR_12 = 3;




    for ( ; VAR_10 + VAR_12 < VAR_11 + 2; VAR_10 += VAR_12) {
        U32 const VAR_13 = (U32)(VAR_10 - VAR_9);
        size_t const VAR_14 = FUNC_0(VAR_10, VAR_7, VAR_8);
        VAR_6[VAR_14] = VAR_13;
        if (VAR_4 == VAR_1) continue;

        { U32 VAR_15;
            for (VAR_15 = 1; VAR_15 < VAR_12; ++VAR_15) {
                size_t const VAR_16 = FUNC_0(VAR_10 + VAR_15, VAR_7, VAR_8);
                if (VAR_6[VAR_16] == 0) {
                    VAR_6[VAR_16] = VAR_13 + VAR_15;
    } } } }
}
