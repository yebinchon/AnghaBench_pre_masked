
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int seq_t ;
struct TYPE_5__ {size_t* prevOffset; int DStream; int stateML; int stateOffb; int stateLL; } ;
typedef TYPE_1__ seqState_t ;
struct TYPE_6__ {int litSize; int fseEntropy; size_t* rep; scalar_t__ dictEnd; scalar_t__ vBase; scalar_t__ base; int * OffTable; int * MLTable; int * LLTable; int * litPtr; } ;
typedef TYPE_2__ ZSTDv07_DCtx ;
typedef size_t U32 ;
typedef int FSEv07_DTable ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int *,int const*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int FUNC_4 (int *,int *,int *) ;
 size_t VAR_1 ;
 size_t FUNC_5 (int*,int *,int *,int *,int,int const*,size_t) ;
 int FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (int *,int * const,int const,int const**,int const* const,int const* const,int const* const,int const* const) ;
 scalar_t__ FUNC_8 (size_t const) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *,int const*,size_t const) ;

__attribute__((used)) static size_t FUNC_10(
                               ZSTDv07_DCtx* VAR_4,
                               void* VAR_5, size_t VAR_6,
                         const void* VAR_7, size_t VAR_8)
{
    const BYTE* VAR_9 = (const BYTE*)VAR_7;
    const BYTE* const VAR_10 = VAR_9 + VAR_8;
    BYTE* const VAR_11 = (BYTE* const)VAR_5;
    BYTE* const VAR_12 = VAR_11 + VAR_6;
    BYTE* VAR_13 = VAR_11;
    const BYTE* VAR_14 = VAR_4->litPtr;
    const BYTE* const VAR_15 = VAR_14 + VAR_4->litSize;
    FSEv07_DTable* VAR_16 = VAR_4->LLTable;
    FSEv07_DTable* VAR_17 = VAR_4->MLTable;
    FSEv07_DTable* VAR_18 = VAR_4->OffTable;
    const BYTE* const VAR_19 = (const BYTE*) (VAR_4->base);
    const BYTE* const VAR_20 = (const BYTE*) (VAR_4->vBase);
    const BYTE* const VAR_21 = (const BYTE*) (VAR_4->dictEnd);
    int VAR_22;


    { size_t const VAR_23 = FUNC_5(&VAR_22, VAR_16, VAR_17, VAR_18, VAR_4->fseEntropy, VAR_9, VAR_8);
        if (FUNC_8(VAR_23)) return VAR_23;
        VAR_9 += VAR_23;
    }


    if (VAR_22) {
        seqState_t VAR_24;
        VAR_4->fseEntropy = 1;
        { U32 VAR_25; for (VAR_25=0; VAR_25<VAR_1; VAR_25++) VAR_24.prevOffset[VAR_25] = VAR_4->rep[VAR_25]; }
        { size_t const VAR_26 = FUNC_0(&(VAR_24.DStream), VAR_9, VAR_10-VAR_9);
          if (FUNC_3(VAR_26)) return FUNC_2(VAR_2); }
        FUNC_4(&(VAR_24.stateLL), &(VAR_24.DStream), VAR_16);
        FUNC_4(&(VAR_24.stateOffb), &(VAR_24.DStream), VAR_18);
        FUNC_4(&(VAR_24.stateML), &(VAR_24.DStream), VAR_17);

        for ( ; (FUNC_1(&(VAR_24.DStream)) <= VAR_0) && VAR_22 ; ) {
            VAR_22--;
            { seq_t const VAR_27 = FUNC_6(&VAR_24);
                size_t const VAR_28 = FUNC_7(VAR_13, VAR_12, VAR_27, &VAR_14, VAR_15, VAR_19, VAR_20, VAR_21);
                if (FUNC_8(VAR_28)) return VAR_28;
                VAR_13 += VAR_28;
        } }


        if (VAR_22) return FUNC_2(VAR_2);

        { U32 VAR_29; for (VAR_29=0; VAR_29<VAR_1; VAR_29++) VAR_4->rep[VAR_29] = (U32)(VAR_24.prevOffset[VAR_29]); }
    }


    { size_t const VAR_30 = VAR_15 - VAR_14;

        if (VAR_30 > (size_t)(VAR_12-VAR_13)) return FUNC_2(VAR_3);
        FUNC_9(VAR_13, VAR_14, VAR_30);
        VAR_13 += VAR_30;
    }

    return VAR_13-VAR_11;
}
