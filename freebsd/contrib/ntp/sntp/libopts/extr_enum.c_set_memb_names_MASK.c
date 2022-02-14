
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tOptions ;
struct TYPE_4__ {char* argString; } ;
struct TYPE_5__ {scalar_t__ optCookie; TYPE_1__ optArg; } ;
typedef TYPE_2__ tOptDesc ;


 char* FUNC_0 (size_t,char*) ;
 char VAR_0 ;
 char const* const VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,char const* const,size_t) ;
 size_t FUNC_2 (char const* const) ;

__attribute__((used)) static void
FUNC_3(tOptions * VAR_3, tOptDesc * VAR_4, char const * const * VAR_5,
               unsigned int VAR_6)
{
    char * VAR_7;
    uintptr_t VAR_8 = (1UL << (uintptr_t)VAR_6) - 1UL;
    uintptr_t VAR_9 = (uintptr_t)VAR_4->optCookie & VAR_8;
    unsigned int VAR_10 = 0;
    size_t VAR_11 = 1;





    while (VAR_9 != 0) {
        if (VAR_9 & 1)
            VAR_11 += FUNC_2(VAR_5[VAR_10]) + VAR_2 + 1;
        if (++VAR_10 >= VAR_6) break;
        VAR_9 >>= 1;
    }

    VAR_4->optArg.argString = VAR_7 = FUNC_0(VAR_11, "enum");
    VAR_9 = (uintptr_t)VAR_4->optCookie & VAR_8;
    if (VAR_9 == 0) {
        *VAR_7 = VAR_0;
        return;
    }

    for (VAR_10 = 0; ; VAR_10++) {
        size_t VAR_12;
        int VAR_13 = VAR_9 & 1;

        VAR_9 >>= 1;
        if (VAR_13 == 0)
            continue;

        VAR_12 = FUNC_2(VAR_5[VAR_10]);
        FUNC_1(VAR_7, VAR_5[VAR_10], VAR_12);
        VAR_7 += VAR_12;
        if (VAR_9 == 0)
            break;
        FUNC_1(VAR_7, VAR_1, VAR_2);
        VAR_7 += VAR_2;
    }
    *VAR_7 = VAR_0;
    (void)VAR_3;
}
