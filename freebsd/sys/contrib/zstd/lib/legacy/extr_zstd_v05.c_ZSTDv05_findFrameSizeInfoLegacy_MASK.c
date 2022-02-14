
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int blockProperties_t ;
typedef int BYTE ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (size_t*,unsigned long long*,size_t) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_3 (int const*,size_t,int *) ;
 scalar_t__ FUNC_4 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_5(const void *VAR_6, size_t VAR_7, size_t* VAR_8, unsigned long long* VAR_9)
{
    const BYTE* VAR_10 = (const BYTE*)VAR_6;
    size_t VAR_11 = VAR_7;
    size_t VAR_12 = 0;
    blockProperties_t VAR_13;


    if (VAR_7 < VAR_3) {
        FUNC_2(VAR_8, VAR_9, FUNC_0(VAR_5));
        return;
    }
    if (FUNC_1(VAR_6) != VAR_1) {
        FUNC_2(VAR_8, VAR_9, FUNC_0(VAR_4));
        return;
    }
    VAR_10 += VAR_3; VAR_11 -= VAR_3;


    while (1)
    {
        size_t VAR_14 = FUNC_3(VAR_10, VAR_11, &VAR_13);
        if (FUNC_4(VAR_14)) {
            FUNC_2(VAR_8, VAR_9, VAR_14);
            return;
        }

        VAR_10 += VAR_2;
        VAR_11 -= VAR_2;
        if (VAR_14 > VAR_11) {
            FUNC_2(VAR_8, VAR_9, FUNC_0(VAR_5));
            return;
        }

        if (VAR_14 == 0) break;

        VAR_10 += VAR_14;
        VAR_11 -= VAR_14;
        VAR_12++;
    }

    *VAR_8 = VAR_10 - (const BYTE*)VAR_6;
    *VAR_9 = VAR_12 * VAR_0;
}
