
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tSuccess ;
struct TYPE_7__ {int * pzCurOpt; int pzProgPath; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_8__ {scalar_t__ optType; TYPE_1__* pOD; int * pzOptArg; } ;
typedef TYPE_3__ tOptState ;
struct TYPE_6__ {int pz_Name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static tSuccess
FUNC_1(tOptions * VAR_5, tOptState * VAR_6)
{




    if (VAR_6->optType == VAR_2)
        (VAR_5->pzCurOpt)++;




    else if (VAR_6->pzOptArg != ((void*)0)) {
        FUNC_0(VAR_3, VAR_4, VAR_5->pzProgPath, VAR_6->pOD->pz_Name);
        return VAR_0;
    }




    else
        VAR_5->pzCurOpt = ((void*)0);
    return VAR_1;
}
