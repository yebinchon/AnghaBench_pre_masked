
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t U32 ;
typedef size_t U16 ;
struct TYPE_2__ {void* nbBits; void* byte; } ;
typedef TYPE_1__ HUF_DEltX2 ;
typedef void* BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t FUNC_3 (void**,int,size_t*,size_t*,size_t*,void const*,size_t) ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_4 (U16* VAR_3, const void* VAR_4, size_t VAR_5)
{
    BYTE VAR_6[VAR_1 + 1];
    U32 VAR_7[VAR_0 + 1];
    U32 VAR_8 = 0;
    const BYTE* VAR_9 = (const BYTE*) VAR_4;
    size_t VAR_10 = VAR_9[0];
    U32 VAR_11 = 0;
    U32 VAR_12;
    U32 VAR_13;
    void* VAR_14 = VAR_3+1;
    HUF_DEltX2* const VAR_15 = (HUF_DEltX2*)VAR_14;

    FUNC_1(sizeof(HUF_DEltX2) == sizeof(U16));


    VAR_10 = FUNC_3(VAR_6, VAR_1 + 1, VAR_7, &VAR_11, &VAR_8, VAR_4, VAR_5);
    if (FUNC_2(VAR_10)) return VAR_10;


    if (VAR_8 > VAR_3[0]) return FUNC_0(VAR_2);
    VAR_3[0] = (U16)VAR_8;


    VAR_13 = 0;
    for (VAR_12=1; VAR_12<=VAR_8; VAR_12++)
    {
        U32 VAR_16 = VAR_13;
        VAR_13 += (VAR_7[VAR_12] << (VAR_12-1));
        VAR_7[VAR_12] = VAR_16;
    }


    for (VAR_12=0; VAR_12<VAR_11; VAR_12++)
    {
        const U32 VAR_17 = VAR_6[VAR_12];
        const U32 VAR_18 = (1 << VAR_17) >> 1;
        U32 VAR_19;
        HUF_DEltX2 VAR_20;
        VAR_20.byte = (BYTE)VAR_12; VAR_20.nbBits = (BYTE)(VAR_8 + 1 - VAR_17);
        for (VAR_19 = VAR_7[VAR_17]; VAR_19 < VAR_7[VAR_17] + VAR_18; VAR_19++)
            VAR_15[VAR_19] = VAR_20;
        VAR_7[VAR_17] += VAR_18;
    }

    return VAR_10;
}
