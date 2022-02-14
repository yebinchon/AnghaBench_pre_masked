
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* base; scalar_t__* dictBase; int dictLimit; int lowLimit; } ;
struct TYPE_7__ {int chainLog; unsigned int windowLog; } ;
struct TYPE_6__ {int* chainTable; TYPE_1__ window; TYPE_3__ cParams; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef scalar_t__ ZSTD_dictMode_e ;
typedef TYPE_3__ ZSTD_compressionParameters ;
typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int,char*,int,int const,int const) ;
 size_t FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const) ;
 scalar_t__ FUNC_3 (scalar_t__ const* const,scalar_t__ const*,scalar_t__ const* const,scalar_t__ const* const,scalar_t__ const* const) ;
 scalar_t__ const VAR_0 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(ZSTD_matchState_t* VAR_1,
                 U32 VAR_2, const BYTE* VAR_3,
                 U32 VAR_4, U32 VAR_5,
                 const ZSTD_dictMode_e VAR_6)
{
    const ZSTD_compressionParameters* const VAR_7 = &VAR_1->cParams;
    U32* const VAR_8 = VAR_1->chainTable;
    U32 const VAR_9 = VAR_7->chainLog - 1;
    U32 const VAR_10 = (1 << VAR_9) - 1;
    size_t VAR_11=0, VAR_12=0;
    const BYTE* const VAR_13 = VAR_1->window.base;
    const BYTE* const VAR_14 = VAR_1->window.dictBase;
    const U32 VAR_15 = VAR_1->window.dictLimit;
    const BYTE* const VAR_16 = (VAR_2>=VAR_15) ? VAR_13 + VAR_2 : VAR_14 + VAR_2;
    const BYTE* const VAR_17 = (VAR_2>=VAR_15) ? VAR_3 : VAR_14 + VAR_15;
    const BYTE* const VAR_18 = VAR_14 + VAR_15;
    const BYTE* const VAR_19 = VAR_13 + VAR_15;
    const BYTE* VAR_20;
    U32* VAR_21 = VAR_8 + 2*(VAR_2&VAR_10);
    U32* VAR_22 = VAR_21 + 1;
    U32 VAR_23 = *VAR_21;
    U32 VAR_24;
    U32 const VAR_25 = VAR_1->window.lowLimit;
    U32 const VAR_26 = 1U << VAR_7->windowLog;
    U32 const VAR_27 = (VAR_2 - VAR_25 > VAR_26) ? VAR_2 - VAR_26 : VAR_25;


    FUNC_0(8, "ZSTD_insertDUBT1(%u) (dictLimit=%u, lowLimit=%u)",
                VAR_2, VAR_15, VAR_27);
    FUNC_4(VAR_2 >= VAR_5);
    FUNC_4(VAR_16 < VAR_17);

    while (VAR_4-- && (VAR_23 > VAR_27)) {
        U32* const VAR_28 = VAR_8 + 2*(VAR_23 & VAR_10);
        size_t VAR_29 = FUNC_1(VAR_11, VAR_12);
        FUNC_4(VAR_23 < VAR_2);




        if ( (VAR_6 != VAR_0)
          || (VAR_23+VAR_29 >= VAR_15)
          || (VAR_2 < VAR_15) ) {
            const BYTE* const VAR_30 = ( (VAR_6 != VAR_0)
                                     || (VAR_23+VAR_29 >= VAR_15)) ?
                                        VAR_13 : VAR_14;
            FUNC_4( (VAR_23+VAR_29 >= VAR_15)
                 || (VAR_2 < VAR_15) );
            VAR_20 = VAR_30 + VAR_23;
            VAR_29 += FUNC_2(VAR_16+VAR_29, VAR_20+VAR_29, VAR_17);
        } else {
            VAR_20 = VAR_14 + VAR_23;
            VAR_29 += FUNC_3(VAR_16+VAR_29, VAR_20+VAR_29, VAR_17, VAR_18, VAR_19);
            if (VAR_23+VAR_29 >= VAR_15)
                VAR_20 = VAR_13 + VAR_23;
        }

        FUNC_0(8, "ZSTD_insertDUBT1: comparing %u with %u : found %u common bytes ",
                    VAR_2, VAR_23, (U32)VAR_29);

        if (VAR_16+VAR_29 == VAR_17) {
            break;
        }

        if (VAR_20[VAR_29] < VAR_16[VAR_29]) {

            *VAR_21 = VAR_23;
            VAR_11 = VAR_29;
            if (VAR_23 <= VAR_5) { VAR_21=&VAR_24; break; }
            FUNC_0(8, "ZSTD_insertDUBT1: %u (>btLow=%u) is smaller : next => %u",
                        VAR_23, VAR_5, VAR_28[1]);
            VAR_21 = VAR_28+1;
            VAR_23 = VAR_28[1];
        } else {

            *VAR_22 = VAR_23;
            VAR_12 = VAR_29;
            if (VAR_23 <= VAR_5) { VAR_22=&VAR_24; break; }
            FUNC_0(8, "ZSTD_insertDUBT1: %u (>btLow=%u) is larger => %u",
                        VAR_23, VAR_5, VAR_28[0]);
            VAR_22 = VAR_28;
            VAR_23 = VAR_28[0];
    } }

    *VAR_21 = *VAR_22 = 0;
}
