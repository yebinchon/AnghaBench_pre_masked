
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tSuccess ;
struct TYPE_7__ {scalar_t__ curOptIdx; scalar_t__ origArgCt; int * pzCurOpt; int pzProgPath; int ** origArgVect; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_8__ {int optType; TYPE_1__* pOD; int * pzOptArg; } ;
typedef TYPE_3__ tOptState ;
struct TYPE_6__ {int pz_Name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 char* VAR_5 ;

__attribute__((used)) static tSuccess
FUNC_3(tOptions * VAR_6, tOptState * VAR_7)
{
    switch (VAR_7->optType) {
    case 128:



        if (*++(VAR_6->pzCurOpt) == VAR_2)
            VAR_6->pzCurOpt = VAR_6->origArgVect[ VAR_6->curOptIdx++ ];
        VAR_7->pzOptArg = VAR_6->pzCurOpt;
        break;

    case 129:




        if (VAR_7->pzOptArg == ((void*)0))
            VAR_7->pzOptArg = VAR_6->origArgVect[ VAR_6->curOptIdx++ ];
        break;

    default:





    case 130:




        break;
    }




    if (VAR_6->curOptIdx > VAR_6->origArgCt) {
        FUNC_0(VAR_4, VAR_5, VAR_6->pzProgPath, VAR_7->pOD->pz_Name);
        return VAR_1;
    }

    VAR_6->pzCurOpt = ((void*)0);
    return VAR_3;
}
