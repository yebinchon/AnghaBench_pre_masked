
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t symbol; size_t weight; } ;
typedef TYPE_1__ sortedSymbol_t ;
typedef int rankVal ;
typedef size_t U32 ;
typedef scalar_t__ U16 ;
struct TYPE_6__ {int length; void* nbBits; int sequence; } ;
typedef TYPE_2__ HUF_DEltX2 ;
typedef void* BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (size_t*,size_t const*,int) ;

__attribute__((used)) static void FUNC_2(HUF_DEltX2* VAR_1, U32 VAR_2, const U32 VAR_3,
                           const U32* VAR_4, const int VAR_5,
                           const sortedSymbol_t* VAR_6, const U32 VAR_7,
                           U32 VAR_8, U16 VAR_9)
{
    HUF_DEltX2 VAR_10;
    U32 VAR_11[VAR_0 + 1];


    FUNC_1(VAR_11, VAR_4, sizeof(VAR_11));


    if (VAR_5>1) {
        U32 VAR_12, VAR_13 = VAR_11[VAR_5];
        FUNC_0(&(VAR_10.sequence), VAR_9);
        VAR_10.nbBits = (BYTE)(VAR_3);
        VAR_10.length = 1;
        for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
            VAR_1[VAR_12] = VAR_10;
    }


    { U32 VAR_14; for (VAR_14=0; VAR_14<VAR_7; VAR_14++) {
            const U32 VAR_15 = VAR_6[VAR_14].symbol;
            const U32 VAR_16 = VAR_6[VAR_14].weight;
            const U32 VAR_17 = VAR_8 - VAR_16;
            const U32 VAR_18 = 1 << (VAR_2-VAR_17);
            const U32 VAR_19 = VAR_11[VAR_16];
            U32 VAR_20 = VAR_19;
            const U32 VAR_21 = VAR_19 + VAR_18;

            FUNC_0(&(VAR_10.sequence), (U16)(VAR_9 + (VAR_15 << 8)));
            VAR_10.nbBits = (BYTE)(VAR_17 + VAR_3);
            VAR_10.length = 2;
            do { VAR_1[VAR_20++] = VAR_10; } while (VAR_20<VAR_21);

            VAR_11[VAR_16] += VAR_18;
    } }
}
