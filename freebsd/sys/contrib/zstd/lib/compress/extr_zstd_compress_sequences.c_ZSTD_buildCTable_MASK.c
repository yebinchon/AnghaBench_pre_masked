
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolEncodingType_e ;
typedef int const U32 ;
typedef int const S16 ;
typedef int FSE_CTable ;
typedef size_t BYTE ;


 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (size_t const) ;
 size_t const FUNC_2 (int *,size_t) ;
 size_t const FUNC_3 (int *,int const*,int const,int const,void*,size_t) ;
 size_t const FUNC_4 (int const*,int const,unsigned int*,size_t,int const) ;
 int const FUNC_5 (int const,size_t,int const) ;
 size_t FUNC_6 (size_t*,int,int const*,int const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int FUNC_10 (int *,int const*,size_t) ;





size_t
FUNC_11(void* VAR_3, size_t VAR_4,
                FSE_CTable* VAR_5, U32 VAR_6, symbolEncodingType_e VAR_7,
                unsigned* VAR_8, U32 VAR_9,
                const BYTE* VAR_10, size_t VAR_11,
                const S16* VAR_12, U32 VAR_13, U32 VAR_14,
                const FSE_CTable* VAR_15, size_t VAR_16,
                void* VAR_17, size_t VAR_18)
{
    BYTE* VAR_19 = (BYTE*)VAR_3;
    const BYTE* const VAR_20 = VAR_19 + VAR_4;
    FUNC_0(6, "ZSTD_buildCTable (dstCapacity=%u)", (unsigned)VAR_4);

    switch (VAR_7) {
    case 128:
        FUNC_1(FUNC_2(VAR_5, (BYTE)VAR_9));
        FUNC_8(VAR_4==0, VAR_2);
        *VAR_19 = VAR_10[0];
        return 1;
    case 129:
        FUNC_10(VAR_5, VAR_15, VAR_16);
        return 0;
    case 131:
        FUNC_1(FUNC_3(VAR_5, VAR_12, VAR_14, VAR_13, VAR_17, VAR_18));
        return 0;
    case 130: {
        S16 VAR_21[VAR_1 + 1];
        size_t VAR_22 = VAR_11;
        const U32 VAR_23 = FUNC_5(VAR_6, VAR_11, VAR_9);
        if (VAR_8[VAR_10[VAR_11-1]] > 1) {
            VAR_8[VAR_10[VAR_11-1]]--;
            VAR_22--;
        }
        FUNC_9(VAR_22 > 1);
        FUNC_1(FUNC_4(VAR_21, VAR_23, VAR_8, VAR_22, VAR_9));
        { size_t const VAR_24 = FUNC_6(VAR_19, VAR_20 - VAR_19, VAR_21, VAR_9, VAR_23);
            FUNC_1(VAR_24);
            FUNC_1(FUNC_3(VAR_5, VAR_21, VAR_9, VAR_23, VAR_17, VAR_18));
            return VAR_24;
        }
    }
    default: FUNC_9(0); FUNC_7(VAR_0);
    }
}
