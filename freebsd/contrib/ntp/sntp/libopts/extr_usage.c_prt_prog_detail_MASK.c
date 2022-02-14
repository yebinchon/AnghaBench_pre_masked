
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fOptSet; int optCt; int * pzDetail; TYPE_2__* pOptDesc; int pzPROGNAME; int pzProgPath; int pzRcName; int * papzHomeList; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_6__ {int (* pOptProc ) (int ,TYPE_2__*) ;int fOptState; } ;
typedef TYPE_2__ tOptDesc ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 char* VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_7(tOptions * VAR_7)
{
    bool VAR_8 = (VAR_7->papzHomeList == ((void*)0));





    if (! VAR_8)
        FUNC_5(VAR_7->papzHomeList, VAR_7->pzRcName, VAR_7->pzProgPath);




    if ((VAR_7->fOptSet & VAR_2) != 0) {
        if (VAR_8)
            FUNC_4(VAR_6, VAR_4);

        FUNC_2(VAR_4, VAR_5, VAR_7->pzPROGNAME);
    }






    if (VAR_3) {
        int VAR_9 = VAR_7->optCt;
        int VAR_10 = 0;
        tOptDesc * VAR_11 = VAR_7->pOptDesc;

        FUNC_3(VAR_0, VAR_4);
        FUNC_1(VAR_4);
        do {
            switch (FUNC_0(VAR_11->fOptState)) {
            case 129:
            case 128:
                (*(VAR_11->pOptProc))(VAR_1, VAR_11);
            }
        } while (VAR_11++, VAR_10++, (--VAR_9 > 0));
    }




    if (VAR_7->pzDetail != ((void*)0))
        FUNC_4(VAR_7->pzDetail, VAR_4);
}
