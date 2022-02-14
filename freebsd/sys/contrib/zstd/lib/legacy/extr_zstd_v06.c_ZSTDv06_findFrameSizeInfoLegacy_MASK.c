
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ blockProperties_t ;
typedef int BYTE ;


 size_t const FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (size_t*,unsigned long long*,size_t const) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t const VAR_2 ;
 size_t FUNC_3 (void const*,size_t) ;
 size_t FUNC_4 (int const*,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6(const void *VAR_6, size_t VAR_7, size_t* VAR_8, unsigned long long* VAR_9)
{
    const BYTE* VAR_10 = (const BYTE*)VAR_6;
    size_t VAR_11 = VAR_7;
    size_t VAR_12 = 0;
    blockProperties_t VAR_13 = { VAR_3, 0 };


    { size_t const VAR_14 = FUNC_3(VAR_6, VAR_7);
        if (FUNC_5(VAR_14)) {
            FUNC_2(VAR_8, VAR_9, VAR_14);
            return;
        }
        if (FUNC_1(VAR_6) != VAR_1) {
            FUNC_2(VAR_8, VAR_9, FUNC_0(VAR_4));
            return;
        }
        if (VAR_7 < VAR_14+VAR_2) {
            FUNC_2(VAR_8, VAR_9, FUNC_0(VAR_5));
            return;
        }
        VAR_10 += VAR_14; VAR_11 -= VAR_14;
    }


    while (1) {
        size_t const VAR_15 = FUNC_4(VAR_10, VAR_11, &VAR_13);
        if (FUNC_5(VAR_15)) {
            FUNC_2(VAR_8, VAR_9, VAR_15);
            return;
        }

        VAR_10 += VAR_2;
        VAR_11 -= VAR_2;
        if (VAR_15 > VAR_11) {
            FUNC_2(VAR_8, VAR_9, FUNC_0(VAR_5));
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
