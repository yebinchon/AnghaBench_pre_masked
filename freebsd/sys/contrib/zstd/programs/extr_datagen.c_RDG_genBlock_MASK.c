
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (scalar_t__ const,size_t) ;
 int FUNC_1 (scalar_t__*,int const*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ const FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int * const,int ,size_t) ;

__attribute__((used)) static void FUNC_6(void* VAR_0, size_t VAR_1, size_t VAR_2,
                         double VAR_3, const BYTE* VAR_4, U32* VAR_5)
{
    BYTE* const VAR_6 = (BYTE*)VAR_0;
    U32 const VAR_7 = (U32)(32768 * VAR_3);
    size_t VAR_8 = VAR_2;
    U32 VAR_9 = 1;


    while (VAR_3 >= 1.0) {
        size_t VAR_10 = FUNC_2(VAR_5) & 3;
        VAR_10 = (size_t)1 << (16 + VAR_10 * 2);
        VAR_10 += FUNC_2(VAR_5) & (VAR_10-1);
        if (VAR_1 < VAR_8 + VAR_10) {
            FUNC_5(VAR_6+VAR_8, 0, VAR_1-VAR_8);
            return;
        }
        FUNC_5(VAR_6+VAR_8, 0, VAR_10);
        VAR_8 += VAR_10;
        VAR_6[VAR_8-1] = FUNC_1(VAR_5, VAR_4);
        continue;
    }


    if (VAR_8==0) VAR_6[0] = FUNC_1(VAR_5, VAR_4), VAR_8=1;


    while (VAR_8 < VAR_1) {

        if (FUNC_3(VAR_5) < VAR_7) {

            U32 const VAR_11 = FUNC_4(VAR_5) + 4;
            U32 const VAR_12 = (U32) FUNC_0(VAR_8 + VAR_11 , VAR_1);
            U32 const VAR_13 = (FUNC_2(VAR_5) & 15) == 2;
            U32 const VAR_14 = FUNC_3(VAR_5) + 1;
            U32 const VAR_15 = VAR_13 ? VAR_9 : (U32) FUNC_0(VAR_14 , VAR_8);
            size_t VAR_16 = VAR_8 - VAR_15;
            while (VAR_8 < VAR_12) { VAR_6[VAR_8++] = VAR_6[VAR_16++]; }
            VAR_9 = VAR_15;
        } else {

            U32 const VAR_17 = FUNC_4(VAR_5);
            U32 const VAR_18 = (U32) FUNC_0(VAR_8 + VAR_17, VAR_1);
            while (VAR_8 < VAR_18) { VAR_6[VAR_8++] = FUNC_1(VAR_5, VAR_4); }
    } }
}
