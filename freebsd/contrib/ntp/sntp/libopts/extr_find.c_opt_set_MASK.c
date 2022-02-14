
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tSuccess ;
struct TYPE_8__ {int fOptSet; int (* pUsageProc ) (TYPE_1__*,int ) ;int pzProgName; TYPE_3__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_9__ {char* pzOptArg; int optType; TYPE_3__* pOD; int flags; } ;
typedef TYPE_2__ tOptState ;
struct TYPE_10__ {int * pzText; int pz_Name; } ;
typedef TYPE_3__ tOptDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *,...) ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 char* VAR_9 ;

__attribute__((used)) static tSuccess
FUNC_5(tOptions * VAR_10, char * VAR_11, int VAR_12, bool VAR_13, tOptState * VAR_14)
{
    tOptDesc * VAR_15 = VAR_10->pOptDesc + VAR_12;

    if (FUNC_0(VAR_15)) {
        if ((VAR_10->fOptSet & VAR_3) == 0)
            return VAR_1;

        FUNC_2(VAR_8, VAR_9, &VAR_10->pzProgName, VAR_15->pz_Name);
        if (VAR_15->pzText != ((void*)0))
            FUNC_2(VAR_8, VAR_5, VAR_15->pzText);
        FUNC_3(VAR_2, VAR_8);
        (*VAR_10->pUsageProc)(VAR_10, VAR_0);

        FUNC_1(VAR_0);
    }





    if (VAR_13)
        VAR_14->flags |= VAR_4;

    VAR_14->pOD = VAR_15;
    VAR_14->pzOptArg = VAR_11;
    VAR_14->optType = VAR_7;

    return VAR_6;
}
