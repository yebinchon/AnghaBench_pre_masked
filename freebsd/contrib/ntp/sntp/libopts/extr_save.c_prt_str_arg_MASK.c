
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int argString; } ;
struct TYPE_7__ {int fOptState; TYPE_1__ optArg; scalar_t__ optCookie; } ;
typedef TYPE_2__ tOptDesc ;
struct TYPE_8__ {int useCt; char** apzArgs; } ;
typedef TYPE_3__ tArgList ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_1(FILE * VAR_2, tOptDesc * VAR_3)
{
    if (VAR_3->fOptState & VAR_1) {
        tArgList * VAR_4 = (tArgList *)VAR_3->optCookie;
        int VAR_5 = VAR_4->useCt;
        char const ** VAR_6 = VAR_4->apzArgs;




        if (VAR_5 > 1)
            VAR_3->fOptState &= ~VAR_0;

        while (VAR_5-- > 0)
            FUNC_0(VAR_2, VAR_3, *(VAR_6++));
    } else {
        FUNC_0(VAR_2, VAR_3, VAR_3->optArg.argString);
    }
}
