
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int FSEv06_DTable ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t FUNC_2 (int *,int const,int ,int ,int const*,int,int ,int ,int) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static size_t FUNC_4(int* VAR_16,
                             FSEv06_DTable* VAR_17, FSEv06_DTable* VAR_18, FSEv06_DTable* VAR_19, U32 VAR_20,
                             const void* VAR_21, size_t VAR_22)
{
    const BYTE* const VAR_23 = (const BYTE* const)VAR_21;
    const BYTE* const VAR_24 = VAR_23 + VAR_22;
    const BYTE* VAR_25 = VAR_23;


    if (VAR_22 < VAR_4) return FUNC_0(VAR_15);


    { int VAR_26 = *VAR_25++;
        if (!VAR_26) { *VAR_16=0; return 1; }
        if (VAR_26 > 0x7F) {
            if (VAR_26 == 0xFF) {
                if (VAR_25+2 > VAR_24) return FUNC_0(VAR_15);
                VAR_26 = FUNC_1(VAR_25) + VAR_3, VAR_25+=2;
            } else {
                if (VAR_25 >= VAR_24) return FUNC_0(VAR_15);
                VAR_26 = ((VAR_26-0x80)<<8) + *VAR_25++;
            }
        }
        *VAR_16 = VAR_26;
    }


    if (VAR_25 + 4 > VAR_24) return FUNC_0(VAR_15);
    { U32 const VAR_27 = *VAR_25 >> 6;
        U32 const VAR_28 = (*VAR_25 >> 4) & 3;
        U32 const VAR_29 = (*VAR_25 >> 2) & 3;
        VAR_25++;


        { size_t const VAR_30 = FUNC_2(VAR_17, VAR_27, VAR_8, VAR_0, VAR_25, VAR_24-VAR_25, VAR_1, VAR_2, VAR_20);
            if (FUNC_3(VAR_30)) return FUNC_0(VAR_14);
            VAR_25 += VAR_30;
        }
        { size_t const VAR_31 = FUNC_2(VAR_19, VAR_28, VAR_10, VAR_13, VAR_25, VAR_24-VAR_25, VAR_11, VAR_12, VAR_20);
            if (FUNC_3(VAR_31)) return FUNC_0(VAR_14);
            VAR_25 += VAR_31;
        }
        { size_t const VAR_32 = FUNC_2(VAR_18, VAR_29, VAR_9, VAR_5, VAR_25, VAR_24-VAR_25, VAR_6, VAR_7, VAR_20);
            if (FUNC_3(VAR_32)) return FUNC_0(VAR_14);
            VAR_25 += VAR_32;
    } }

    return VAR_25-VAR_23;
}
