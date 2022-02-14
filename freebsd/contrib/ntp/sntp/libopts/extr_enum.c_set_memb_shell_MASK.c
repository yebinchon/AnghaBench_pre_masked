
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tOptions ;
struct TYPE_3__ {scalar_t__ optCookie; } ;
typedef TYPE_1__ tOptDesc ;


 char const* const VAR_0 ;
 int FUNC_0 (char const* const,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(tOptions * VAR_2, tOptDesc * VAR_3, char const * const * VAR_4,
               unsigned int VAR_5)
{



    unsigned int VAR_6 = 0;
    uintptr_t VAR_7 = (uintptr_t)VAR_3->optCookie;
    size_t VAR_8 = 0;

    (void)VAR_2;
    VAR_7 &= ((uintptr_t)1 << (uintptr_t)VAR_5) - (uintptr_t)1;

    while (VAR_7 != 0) {
        if (VAR_7 & 1) {
            if (VAR_8++ > 0) FUNC_0(VAR_0, VAR_1);
            FUNC_0(VAR_4[VAR_6], VAR_1);
        }
        if (++VAR_6 >= VAR_5) break;
        VAR_7 >>= 1;
    }
}
