
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int optCt; int pzPROGNAME; TYPE_2__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_12__ {int * pz_DisableName; int * pz_Name; } ;
typedef TYPE_2__ tOptDesc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 char* VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(tOptions * VAR_4)
{
    tOptDesc * VAR_5 = VAR_4->pOptDesc;
    int VAR_6 = VAR_4->optCt;

    FUNC_4(VAR_3, VAR_2);




    do {



        if (FUNC_0(VAR_5))
            continue;

        FUNC_3(VAR_5->pz_Name, VAR_5, VAR_4);
        FUNC_1(VAR_4, VAR_5);




        if (VAR_5->pz_DisableName != ((void*)0)) {
            FUNC_3(VAR_5->pz_DisableName, VAR_5, VAR_4);
            FUNC_2(VAR_4, VAR_5);
        }
    } while (VAR_5++, --VAR_6 > 0);

    FUNC_5(VAR_1, VAR_0, VAR_4->pzPROGNAME);
}
