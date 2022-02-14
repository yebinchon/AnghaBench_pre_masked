
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sequence ;
struct TYPE_8__ {int offset; } ;
typedef TYPE_1__ seq_t ;
struct TYPE_9__ {int prevOffset; int DStream; int stateML; int stateOffb; int stateLL; int const* dumpsEnd; int const* dumps; } ;
typedef TYPE_2__ seqState_t ;
struct TYPE_10__ {int litSize; scalar_t__ base; int * OffTable; int * MLTable; int * LLTable; int const* litPtr; } ;
typedef TYPE_3__ ZSTD_DCtx ;
typedef int U32 ;
typedef int const BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int const*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,int *) ;
 size_t FUNC_6 (int*,int const**,size_t*,int *,int *,int *,int const*,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 size_t FUNC_8 (int const*,TYPE_1__,int const**,int const* const,int const* const,int const* const) ;
 scalar_t__ FUNC_9 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int const*,int const*,size_t) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

__attribute__((used)) static size_t FUNC_12(
                               void* VAR_3,
                               void* VAR_4, size_t VAR_5,
                         const void* VAR_6, size_t VAR_7)
{
    ZSTD_DCtx* VAR_8 = (ZSTD_DCtx*)VAR_3;
    const BYTE* VAR_9 = (const BYTE*)VAR_6;
    const BYTE* const VAR_10 = VAR_9 + VAR_7;
    BYTE* const VAR_11 = (BYTE* const)VAR_4;
    BYTE* VAR_12 = VAR_11;
    BYTE* const VAR_13 = VAR_11 + VAR_5;
    size_t VAR_14, VAR_15;
    const BYTE* VAR_16 = VAR_8->litPtr;
    const BYTE* const VAR_17 = VAR_16 + VAR_8->litSize;
    int VAR_18;
    const BYTE* VAR_19;
    U32* VAR_20 = VAR_8->LLTable;
    U32* VAR_21 = VAR_8->MLTable;
    U32* VAR_22 = VAR_8->OffTable;
    BYTE* const VAR_23 = (BYTE*) (VAR_8->base);


    VAR_14 = FUNC_6(&VAR_18, &VAR_19, &VAR_15,
                                      VAR_20, VAR_21, VAR_22,
                                      VAR_9, VAR_10-VAR_9);
    if (FUNC_9(VAR_14)) return VAR_14;
    VAR_9 += VAR_14;


    {
        seq_t VAR_24;
        seqState_t VAR_25;

        FUNC_11(&VAR_24, 0, sizeof(VAR_24));
        VAR_25.dumps = VAR_19;
        VAR_25.dumpsEnd = VAR_19 + VAR_15;
        VAR_25.prevOffset = VAR_24.offset = 4;
        VAR_14 = FUNC_1(&(VAR_25.DStream), VAR_9, VAR_10-VAR_9);
        if (FUNC_4(VAR_14)) return FUNC_3(VAR_1);
        FUNC_5(&(VAR_25.stateLL), &(VAR_25.DStream), VAR_20);
        FUNC_5(&(VAR_25.stateOffb), &(VAR_25.DStream), VAR_22);
        FUNC_5(&(VAR_25.stateML), &(VAR_25.DStream), VAR_21);

        for ( ; (FUNC_2(&(VAR_25.DStream)) <= VAR_0) && (VAR_18>0) ; )
        {
            size_t VAR_26;
            VAR_18--;
            FUNC_7(&VAR_24, &VAR_25);
            VAR_26 = FUNC_8(VAR_12, VAR_24, &VAR_16, VAR_17, VAR_23, VAR_13);
            if (FUNC_9(VAR_26)) return VAR_26;
            VAR_12 += VAR_26;
        }


        if ( !FUNC_0(&(VAR_25.DStream)) ) return FUNC_3(VAR_1);
        if (VAR_18<0) return FUNC_3(VAR_1);


        {
            size_t VAR_27 = VAR_17 - VAR_16;
            if (VAR_16 > VAR_17) return FUNC_3(VAR_1);
            if (VAR_12+VAR_27 > VAR_13) return FUNC_3(VAR_2);
            if (VAR_12 != VAR_16) FUNC_10(VAR_12, VAR_16, VAR_27);
            VAR_12 += VAR_27;
        }
    }

    return VAR_12-VAR_11;
}
