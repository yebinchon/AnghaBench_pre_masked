
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* weight; void* symbol; } ;
typedef TYPE_1__ sortedSymbol_t ;
typedef int* rankValCol_t ;
typedef int dtd ;
typedef int U32 ;
struct TYPE_7__ {int maxTableLog; int tableType; void* tableLog; } ;
typedef int HUF_DTable ;
typedef int HUF_DEltX2 ;
typedef TYPE_2__ DTableDesc ;
typedef void* BYTE ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int * const,int const,TYPE_1__*,int,int*,int**,int,int) ;
 TYPE_2__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (size_t) ;
 size_t FUNC_6 (void**,int,int*,int*,int*,void const*,size_t) ;
 int FUNC_7 (int *,TYPE_2__*,int) ;
 int FUNC_8 (int*,int ,int) ;
 int VAR_2 ;

size_t FUNC_9(HUF_DTable* VAR_3,
                       const void* VAR_4, size_t VAR_5,
                             void* VAR_6, size_t VAR_7)
{
    U32 VAR_8, VAR_9, VAR_10, VAR_11;
    DTableDesc VAR_12 = FUNC_4(VAR_3);
    U32 const VAR_13 = VAR_12.maxTableLog;
    size_t VAR_14;
    void* VAR_15 = VAR_3+1;
    HUF_DEltX2* const VAR_16 = (HUF_DEltX2*)VAR_15;
    U32 *VAR_17;

    rankValCol_t* VAR_18;
    U32* VAR_19;
    U32* VAR_20;
    sortedSymbol_t* VAR_21;
    BYTE* VAR_22;
    size_t VAR_23 = 0;

    VAR_18 = (rankValCol_t *)((U32 *)VAR_6 + VAR_23);
    VAR_23 += (sizeof(rankValCol_t) * VAR_1) >> 2;
    VAR_19 = (U32 *)VAR_6 + VAR_23;
    VAR_23 += VAR_1 + 1;
    VAR_20 = (U32 *)VAR_6 + VAR_23;
    VAR_23 += VAR_1 + 2;
    VAR_21 = (sortedSymbol_t *)VAR_6 + (VAR_23 * sizeof(U32)) / sizeof(sortedSymbol_t);
    VAR_23 += FUNC_2(sizeof(sortedSymbol_t) * (VAR_0 + 1), sizeof(U32)) >> 2;
    VAR_22 = (BYTE *)((U32 *)VAR_6 + VAR_23);
    VAR_23 += FUNC_2(VAR_0 + 1, sizeof(U32)) >> 2;

    if ((VAR_23 << 2) > VAR_7) return FUNC_1(VAR_2);

    VAR_17 = VAR_20 + 1;
    FUNC_8(VAR_19, 0, sizeof(U32) * (2 * VAR_1 + 2 + 1));

    FUNC_0(sizeof(HUF_DEltX2) == sizeof(HUF_DTable));
    if (VAR_13 > VAR_1) return FUNC_1(VAR_2);


    VAR_14 = FUNC_6(VAR_22, VAR_0 + 1, VAR_19, &VAR_11, &VAR_8, VAR_4, VAR_5);
    if (FUNC_5(VAR_14)) return VAR_14;


    if (VAR_8 > VAR_13) return FUNC_1(VAR_2);


    for (VAR_9 = VAR_8; VAR_19[VAR_9]==0; VAR_9--) {}


    { U32 VAR_24, VAR_25 = 0;
        for (VAR_24=1; VAR_24<VAR_9+1; VAR_24++) {
            U32 VAR_26 = VAR_25;
            VAR_25 += VAR_19[VAR_24];
            VAR_17[VAR_24] = VAR_26;
        }
        VAR_17[0] = VAR_25;
        VAR_10 = VAR_25;
    }


    { U32 VAR_27;
        for (VAR_27=0; VAR_27<VAR_11; VAR_27++) {
            U32 const VAR_28 = VAR_22[VAR_27];
            U32 const VAR_29 = VAR_17[VAR_28]++;
            VAR_21[VAR_29].symbol = (BYTE)VAR_27;
            VAR_21[VAR_29].weight = (BYTE)VAR_28;
        }
        VAR_17[0] = 0;
    }


    { U32* const VAR_30 = VAR_18[0];
        { int const VAR_31 = (VAR_13-VAR_8) - 1;
            U32 VAR_32 = 0;
            U32 VAR_33;
            for (VAR_33=1; VAR_33<VAR_9+1; VAR_33++) {
                U32 VAR_34 = VAR_32;
                VAR_32 += VAR_19[VAR_33] << (VAR_33+VAR_31);
                VAR_30[VAR_33] = VAR_34;
        } }
        { U32 const VAR_35 = VAR_8+1 - VAR_9;
            U32 VAR_36;
            for (VAR_36 = VAR_35; VAR_36 < VAR_13 - VAR_35 + 1; VAR_36++) {
                U32* const VAR_37 = VAR_18[VAR_36];
                U32 VAR_38;
                for (VAR_38 = 1; VAR_38 < VAR_9+1; VAR_38++) {
                    VAR_37[VAR_38] = VAR_30[VAR_38] >> VAR_36;
    } } } }

    FUNC_3(VAR_16, VAR_13,
                   VAR_21, VAR_10,
                   VAR_20, VAR_18, VAR_9,
                   VAR_8+1);

    VAR_12.tableLog = (BYTE)VAR_13;
    VAR_12.tableType = 1;
    FUNC_7(VAR_3, &VAR_12, sizeof(VAR_12));
    return VAR_14;
}
