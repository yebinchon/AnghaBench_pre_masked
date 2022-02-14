
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pzPROGNAME; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_7__ {int pz_NAME; scalar_t__ optCookie; } ;
typedef TYPE_2__ tOptDesc ;
struct TYPE_8__ {char** apzArgs; int useCt; } ;
typedef TYPE_3__ tArgList ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int) ;
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_2(tOptions * VAR_3, tOptDesc * VAR_4)
{
    tArgList * VAR_5 = (tArgList *)VAR_4->optCookie;
    char const ** VAR_6 = VAR_5->apzArgs;
    int VAR_7 = VAR_5->useCt;

    FUNC_1(VAR_2, VAR_3->pzPROGNAME, VAR_4->pz_NAME, VAR_7);

    while (--VAR_7 >= 0) {
        FUNC_1(VAR_0, VAR_3->pzPROGNAME, VAR_4->pz_NAME,
               VAR_5->useCt - VAR_7);
        FUNC_0(*(VAR_6++));
        FUNC_1(VAR_1, VAR_3->pzPROGNAME, VAR_4->pz_NAME,
               VAR_5->useCt - VAR_7);
    }
}
