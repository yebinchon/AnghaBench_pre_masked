
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tSuccess ;
struct TYPE_6__ {char* pzCurOpt; char** origArgVect; size_t curOptIdx; } ;
typedef TYPE_1__ tOptions ;
struct TYPE_7__ {int optType; char* pzOptArg; } ;
typedef TYPE_2__ tOptState ;


 int FUNC_0 (TYPE_1__*) ;
 char VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static tSuccess
FUNC_2(tOptions * VAR_3, tOptState * VAR_4)
{



    switch (VAR_4->optType) {
    case 128:
        if (*++VAR_3->pzCurOpt != VAR_0)
            VAR_4->pzOptArg = VAR_3->pzCurOpt;
        else {
            char * VAR_5 = VAR_3->origArgVect[ VAR_3->curOptIdx ];






            if ((VAR_5 == ((void*)0)) || (*VAR_5 == '-'))
                VAR_4->pzOptArg = ((void*)0);
            else {
                VAR_3->curOptIdx++;
                VAR_4->pzOptArg = VAR_5;
            }
        }
        break;

    case 129:




        if ( (VAR_4->pzOptArg == ((void*)0))
           && (! FUNC_0(VAR_3))) {
            char * VAR_6 = VAR_3->origArgVect[ VAR_3->curOptIdx ];






            if ((VAR_6 == ((void*)0)) || (*VAR_6 == '-'))
                VAR_4->pzOptArg = ((void*)0);
            else {
                VAR_3->curOptIdx++;
                VAR_4->pzOptArg = VAR_6;
            }
        }
        break;

    default:
    case 130:
        FUNC_1(VAR_2);
    }







    VAR_3->pzCurOpt = ((void*)0);
    return VAR_1;
}
