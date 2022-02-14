
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tSuccess ;
struct TYPE_8__ {scalar_t__ default_opt; } ;
struct TYPE_9__ {scalar_t__ pOptDesc; int fOptSet; int (* pUsageProc ) (TYPE_2__*,int ) ;int pzProgPath; TYPE_1__ specOptIdx; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_10__ {scalar_t__ pOD; char const* pzOptArg; int optType; } ;
typedef TYPE_3__ tOptState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,char const*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 char* VAR_7 ;

__attribute__((used)) static tSuccess
FUNC_4(tOptions * VAR_8, char const * VAR_9, char * VAR_10, tOptState * VAR_11)
{






    if ( (VAR_10 == ((void*)0))
       && FUNC_0(VAR_8)
       && (VAR_8->specOptIdx.default_opt != VAR_2)) {

        VAR_11->pOD = VAR_8->pOptDesc + VAR_8->specOptIdx.default_opt;
        VAR_11->pzOptArg = VAR_9;
        VAR_11->optType = VAR_5;
        return VAR_4;
    }

    if ((VAR_8->fOptSet & VAR_3) != 0) {
        FUNC_2(VAR_6, VAR_7, VAR_8->pzProgPath, VAR_9);
        (*VAR_8->pUsageProc)(VAR_8, VAR_0);

        FUNC_1(VAR_0);
    }

    return VAR_1;
}
