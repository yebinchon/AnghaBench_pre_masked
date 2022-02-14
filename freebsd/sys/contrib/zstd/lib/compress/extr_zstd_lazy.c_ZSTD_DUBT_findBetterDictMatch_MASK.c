
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* base; int dictLimit; scalar_t__* nextSrc; int lowLimit; } ;
struct TYPE_7__ {int hashLog; int chainLog; } ;
struct TYPE_6__ {int* hashTable; int* chainTable; TYPE_1__ window; TYPE_3__ cParams; struct TYPE_6__* dictMatchState; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef scalar_t__ ZSTD_dictMode_e ;
typedef TYPE_3__ ZSTD_compressionParameters ;
typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int,char*,int const,int,int,int const,...) ;
 size_t FUNC_1 (size_t,size_t) ;
 size_t VAR_0 ;
 int const VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const,scalar_t__ const* const,scalar_t__ const* const) ;
 scalar_t__ const VAR_2 ;
 size_t FUNC_3 (scalar_t__ const* const,int const,int const) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (int) ;

__attribute__((used)) static size_t
FUNC_6 (
        ZSTD_matchState_t* VAR_3,
        const BYTE* const VAR_4, const BYTE* const VAR_5,
        size_t* VAR_6,
        size_t VAR_7,
        U32 VAR_8,
        U32 const VAR_9,
        const ZSTD_dictMode_e VAR_10)
{
    const ZSTD_matchState_t * const VAR_11 = VAR_3->dictMatchState;
    const ZSTD_compressionParameters* const VAR_12 = &VAR_11->cParams;
    const U32 * const VAR_13 = VAR_11->hashTable;
    U32 const VAR_14 = VAR_12->hashLog;
    size_t const VAR_15 = FUNC_3(VAR_4, VAR_14, VAR_9);
    U32 VAR_16 = VAR_13[VAR_15];

    const BYTE* const VAR_17 = VAR_3->window.base;
    const BYTE* const VAR_18 = VAR_17 + VAR_3->window.dictLimit;
    U32 const VAR_19 = (U32)(VAR_4-VAR_17);
    const BYTE* const VAR_20 = VAR_11->window.base;
    const BYTE* const VAR_21 = VAR_11->window.nextSrc;
    U32 const VAR_22 = (U32)(VAR_11->window.nextSrc - VAR_11->window.base);
    U32 const VAR_23 = VAR_11->window.lowLimit;
    U32 const VAR_24 = VAR_3->window.lowLimit - VAR_22;

    U32* const VAR_25 = VAR_11->chainTable;
    U32 const VAR_26 = VAR_12->chainLog - 1;
    U32 const VAR_27 = (1 << VAR_26) - 1;
    U32 const VAR_28 = (VAR_27 >= VAR_22 - VAR_23) ? VAR_23 : VAR_22 - VAR_27;

    size_t VAR_29=0, VAR_30=0;

    (void)VAR_10;
    FUNC_5(VAR_10 == VAR_2);

    while (VAR_8-- && (VAR_16 > VAR_23)) {
        U32* const VAR_31 = VAR_25 + 2*(VAR_16 & VAR_27);
        size_t VAR_32 = FUNC_1(VAR_29, VAR_30);
        const BYTE* VAR_33 = VAR_20 + VAR_16;
        VAR_32 += FUNC_2(VAR_4+VAR_32, VAR_33+VAR_32, VAR_5, VAR_21, VAR_18);
        if (VAR_16+VAR_32 >= VAR_22)
            VAR_33 = VAR_17 + VAR_16 + VAR_24;

        if (VAR_32 > VAR_7) {
            U32 VAR_34 = VAR_16 + VAR_24;
            if ( (4*(int)(VAR_32-VAR_7)) > (int)(FUNC_4(VAR_19-VAR_34+1) - FUNC_4((U32)VAR_6[0]+1)) ) {
                FUNC_0(9, "ZSTD_DUBT_findBetterDictMatch(%u) : found better match length %u -> %u and offsetCode %u -> %u (dictMatchIndex %u, matchIndex %u)",
                    VAR_19, (U32)VAR_7, (U32)VAR_32, (U32)*VAR_6, VAR_1 + VAR_19 - VAR_34, VAR_16, VAR_34);
                VAR_7 = VAR_32, *VAR_6 = VAR_1 + VAR_19 - VAR_34;
            }
            if (VAR_4+VAR_32 == VAR_5) {
                break;
            }
        }

        if (VAR_33[VAR_32] < VAR_4[VAR_32]) {
            if (VAR_16 <= VAR_28) { break; }
            VAR_29 = VAR_32;
            VAR_16 = VAR_31[1];
        } else {

            if (VAR_16 <= VAR_28) { break; }
            VAR_30 = VAR_32;
            VAR_16 = VAR_31[0];
        }
    }

    if (VAR_7 >= VAR_0) {
        U32 const VAR_35 = VAR_19 - ((U32)*VAR_6 - VAR_1); (void)VAR_35;
        FUNC_0(8, "ZSTD_DUBT_findBetterDictMatch(%u) : found match of length %u and offsetCode %u (pos %u)",
                    VAR_19, (U32)VAR_7, (U32)*VAR_6, VAR_35);
    }
    return VAR_7;

}
