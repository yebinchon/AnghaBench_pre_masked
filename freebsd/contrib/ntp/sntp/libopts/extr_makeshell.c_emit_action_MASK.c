
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pzPROGNAME; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_6__ {int optMaxCt; int fOptState; int * pz_NAME; int * pOptProc; } ;
typedef TYPE_2__ tOptDesc ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int ) ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int FUNC_2 (char*,int ,...) ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_3(tOptions * VAR_22, tOptDesc * VAR_23)
{
    if (VAR_23->pOptProc == VAR_19)
        FUNC_2(VAR_1, VAR_22->pzPROGNAME, VAR_15);

    else if (VAR_23->pOptProc == VAR_18)
        FUNC_2(VAR_12, VAR_22->pzPROGNAME);

    else if (VAR_23->pOptProc == VAR_17) {
        FUNC_2(VAR_3, VAR_7);
        FUNC_2(VAR_3, VAR_16);

    } else if (VAR_23->pz_NAME == ((void*)0)) {

        if (VAR_23->pOptProc == ((void*)0)) {
            FUNC_2(VAR_3, VAR_8);
            FUNC_2(VAR_3, VAR_9);
        } else
            FUNC_2(VAR_1, VAR_22->pzPROGNAME, VAR_2);

    } else {
        if (VAR_23->optMaxCt == 1)
            FUNC_2(VAR_14, VAR_22->pzPROGNAME, VAR_23->pz_NAME);
        else {
            if ((unsigned)VAR_23->optMaxCt < VAR_5)
                FUNC_2(VAR_0, VAR_22->pzPROGNAME,
                       VAR_23->pz_NAME, VAR_23->optMaxCt);

            FUNC_2(VAR_4, VAR_22->pzPROGNAME, VAR_23->pz_NAME);
        }




        if (FUNC_0(VAR_23->fOptState) == VAR_10) {
            FUNC_2(VAR_13, VAR_22->pzPROGNAME, VAR_23->pz_NAME);
            FUNC_2(VAR_3, VAR_6);

        } else if (VAR_23->fOptState & VAR_11) {
            FUNC_2(VAR_13, VAR_22->pzPROGNAME, VAR_23->pz_NAME);
            FUNC_2(VAR_3, VAR_9);

        } else {
            FUNC_2(VAR_3, VAR_16);
        }
    }
    FUNC_1(VAR_21, VAR_20);
}
