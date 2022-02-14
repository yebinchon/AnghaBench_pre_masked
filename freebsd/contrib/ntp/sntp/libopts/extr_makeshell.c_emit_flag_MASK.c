
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int optCt; int pzPROGNAME; TYPE_2__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_8__ {int optValue; } ;
typedef TYPE_2__ tOptDesc ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 char* VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static void
FUNC_5(tOptions * VAR_5)
{
    tOptDesc * VAR_6 = VAR_5->pOptDesc;
    int VAR_7 = VAR_5->optCt;

    FUNC_3(VAR_3, VAR_2);

    for (;VAR_7 > 0; VAR_6++, --VAR_7) {

        if (FUNC_1(VAR_6) || ! FUNC_0(VAR_6->optValue))
            continue;

        FUNC_4(VAR_4, VAR_6->optValue);
        FUNC_2(VAR_5, VAR_6);
    }
    FUNC_4(VAR_1, VAR_0, VAR_5->pzPROGNAME);
}
