
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int blockProperties_t ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (size_t*,unsigned long long*,size_t) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (void const*) ;
 size_t FUNC_3 (int const*,size_t,int *) ;
 scalar_t__ FUNC_4 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_5(const void *VAR_6, size_t VAR_7, size_t* VAR_8, unsigned long long* VAR_9)
{
    const BYTE* VAR_10 = (const BYTE*)VAR_6;
    size_t VAR_11 = VAR_7;
    size_t VAR_12 = 0;
    U32 VAR_13;
    blockProperties_t VAR_14;


    if (VAR_7 < VAR_2+VAR_1) {
        FUNC_1(VAR_8, VAR_9, FUNC_0(VAR_5));
        return;
    }
    VAR_13 = FUNC_2(VAR_6);
    if (VAR_13 != VAR_3) {
        FUNC_1(VAR_8, VAR_9, FUNC_0(VAR_4));
        return;
    }
    VAR_10 += VAR_2; VAR_11 -= VAR_2;


    while (1)
    {
        size_t VAR_15 = FUNC_3(VAR_10, VAR_11, &VAR_14);
        if (FUNC_4(VAR_15)) {
            FUNC_1(VAR_8, VAR_9, VAR_15);
            return;
        }

        VAR_10 += VAR_1;
        VAR_11 -= VAR_1;
        if (VAR_15 > VAR_11) {
            FUNC_1(VAR_8, VAR_9, FUNC_0(VAR_5));
            return;
        }

        if (VAR_15 == 0) break;

        VAR_10 += VAR_15;
        VAR_11 -= VAR_15;
        VAR_12++;
    }

    *VAR_8 = VAR_10 - (const BYTE*)VAR_6;
    *VAR_9 = VAR_12 * VAR_0;
}
