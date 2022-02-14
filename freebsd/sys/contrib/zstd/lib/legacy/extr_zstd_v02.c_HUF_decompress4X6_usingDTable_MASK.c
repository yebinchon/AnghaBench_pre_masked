
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int HUF_DSeqX6 ;
typedef int HUF_DDescX6 ;
typedef int BYTE ;
typedef int BIT_DStream_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int const* const,size_t const) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int * const,int const*,int const) ;
 scalar_t__ FUNC_8 (size_t) ;
 size_t FUNC_9 (int const* const) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_10(
          void* VAR_2, size_t VAR_3,
    const void* VAR_4, size_t VAR_5,
    const U32* VAR_6)
{
    if (VAR_5 < 10) return FUNC_3(VAR_1);

    {
        const BYTE* const VAR_7 = (const BYTE*) VAR_4;
        BYTE* const VAR_8 = (BYTE*) VAR_2;
        BYTE* const VAR_9 = VAR_8 + VAR_3;

        const U32 VAR_10 = VAR_6[0];
        const void* VAR_11 = VAR_6+1;
        const HUF_DDescX6* VAR_12 = (const HUF_DDescX6*)(VAR_11);
        const void* VAR_13 = VAR_6 + 1 + ((size_t)1<<(VAR_10-1));
        const HUF_DSeqX6* VAR_14 = (const HUF_DSeqX6*)(VAR_13);
        size_t VAR_15;


        BIT_DStream_t VAR_16;
        BIT_DStream_t VAR_17;
        BIT_DStream_t VAR_18;
        BIT_DStream_t VAR_19;
        const size_t VAR_20 = FUNC_9(VAR_7);
        const size_t VAR_21 = FUNC_9(VAR_7+2);
        const size_t VAR_22 = FUNC_9(VAR_7+4);
        size_t VAR_23;
        const BYTE* const VAR_24 = VAR_7 + 6;
        const BYTE* const VAR_25 = VAR_24 + VAR_20;
        const BYTE* const VAR_26 = VAR_25 + VAR_21;
        const BYTE* const VAR_27 = VAR_26 + VAR_22;
        const size_t VAR_28 = (VAR_3+3) / 4;
        BYTE* const VAR_29 = VAR_8 + VAR_28;
        BYTE* const VAR_30 = VAR_29 + VAR_28;
        BYTE* const VAR_31 = VAR_30 + VAR_28;
        BYTE* VAR_32 = VAR_8;
        BYTE* VAR_33 = VAR_29;
        BYTE* VAR_34 = VAR_30;
        BYTE* VAR_35 = VAR_31;
        U32 VAR_36;

        VAR_23 = VAR_5 - (VAR_20 + VAR_21 + VAR_22 + 6);
        if (VAR_23 > VAR_5) return FUNC_3(VAR_1);
        VAR_15 = FUNC_1(&VAR_16, VAR_24, VAR_20);
        if (FUNC_8(VAR_15)) return VAR_15;
        VAR_15 = FUNC_1(&VAR_17, VAR_25, VAR_21);
        if (FUNC_8(VAR_15)) return VAR_15;
        VAR_15 = FUNC_1(&VAR_18, VAR_26, VAR_22);
        if (FUNC_8(VAR_15)) return VAR_15;
        VAR_15 = FUNC_1(&VAR_19, VAR_27, VAR_23);
        if (FUNC_8(VAR_15)) return VAR_15;


        VAR_36 = FUNC_2(&VAR_16) | FUNC_2(&VAR_17) | FUNC_2(&VAR_18) | FUNC_2(&VAR_19);
        for ( ; (VAR_34 <= VAR_31) && (VAR_36==VAR_0) && (VAR_35<=(VAR_9-16)) ; )
        {
            FUNC_6(VAR_32, &VAR_16);
            FUNC_6(VAR_33, &VAR_17);
            FUNC_6(VAR_34, &VAR_18);
            FUNC_6(VAR_35, &VAR_19);
            FUNC_5(VAR_32, &VAR_16);
            FUNC_5(VAR_33, &VAR_17);
            FUNC_5(VAR_34, &VAR_18);
            FUNC_5(VAR_35, &VAR_19);
            FUNC_6(VAR_32, &VAR_16);
            FUNC_6(VAR_33, &VAR_17);
            FUNC_6(VAR_34, &VAR_18);
            FUNC_6(VAR_35, &VAR_19);
            FUNC_4(VAR_32, &VAR_16);
            FUNC_4(VAR_33, &VAR_17);
            FUNC_4(VAR_34, &VAR_18);
            FUNC_4(VAR_35, &VAR_19);

            VAR_36 = FUNC_2(&VAR_16) | FUNC_2(&VAR_17) | FUNC_2(&VAR_18) | FUNC_2(&VAR_19);
        }


        if (VAR_32 > VAR_29) return FUNC_3(VAR_1);
        if (VAR_33 > VAR_30) return FUNC_3(VAR_1);
        if (VAR_34 > VAR_31) return FUNC_3(VAR_1);



        FUNC_7(VAR_32, &VAR_16, VAR_29, VAR_6, VAR_10);
        FUNC_7(VAR_33, &VAR_17, VAR_30, VAR_6, VAR_10);
        FUNC_7(VAR_34, &VAR_18, VAR_31, VAR_6, VAR_10);
        FUNC_7(VAR_35, &VAR_19, VAR_9, VAR_6, VAR_10);


        VAR_36 = FUNC_0(&VAR_16) & FUNC_0(&VAR_17) & FUNC_0(&VAR_18) & FUNC_0(&VAR_19);
        if (!VAR_36) return FUNC_3(VAR_1);


        return VAR_3;
    }
}
