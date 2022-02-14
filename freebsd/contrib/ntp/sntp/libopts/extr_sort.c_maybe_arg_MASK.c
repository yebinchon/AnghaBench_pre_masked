
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int tSuccess ;
struct TYPE_5__ {size_t curOptIdx; size_t origArgCt; char** origArgVect; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_6__ {int optType; int * pzOptArg; } ;
typedef TYPE_2__ tOptState ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



__attribute__((used)) static tSuccess
FUNC_0(tOptions * VAR_4, char * VAR_5, tOptState * VAR_6,
          char ** VAR_7, uint32_t * VAR_8)
{



    switch (VAR_6->optType) {
    case 128:





        if (*VAR_5 != VAR_1)
            return VAR_3;
        break;

    case 129:




        if (VAR_6->pzOptArg != ((void*)0))
            return VAR_3;
        break;

    default:
        return VAR_0;
    }
    if (VAR_4->curOptIdx >= VAR_4->origArgCt)
        return VAR_2;

    VAR_5 = VAR_4->origArgVect[ VAR_4->curOptIdx ];
    if (*VAR_5 != '-')
        VAR_7[ (*VAR_8)++ ] = VAR_4->origArgVect[ (VAR_4->curOptIdx)++ ];
    return VAR_3;
}
