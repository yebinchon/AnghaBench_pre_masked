
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int tSuccess ;
struct TYPE_5__ {scalar_t__ curOptIdx; scalar_t__ origArgCt; char** origArgVect; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_6__ {int optType; int * pzOptArg; } ;
typedef TYPE_2__ tOptState ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static tSuccess
FUNC_0(tOptions * VAR_3, char * VAR_4, tOptState * VAR_5,
         char ** VAR_6, uint32_t * VAR_7)
{





    switch (VAR_5->optType) {
    case 128:




        if (*VAR_4 != VAR_1)
            return VAR_2;
        break;

    case 129:




        if (VAR_5->pzOptArg != ((void*)0))
            return VAR_2;
        break;

    default:
        return VAR_0;
    }
    if (VAR_3->curOptIdx >= VAR_3->origArgCt)
        return VAR_0;

    VAR_6[ (*VAR_7)++ ] = VAR_3->origArgVect[ (VAR_3->curOptIdx)++ ];
    return VAR_2;
}
