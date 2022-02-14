
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tOptions ;
struct TYPE_5__ {int* argString; int argBool; } ;
struct TYPE_6__ {int fOptState; TYPE_1__ optArg; } ;
typedef TYPE_2__ tOptDesc ;


 int FUNC_0 (float*) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;

 int VAR_0 ;
 long FUNC_2 (int*,char**,int ) ;

void
FUNC_3(tOptions * VAR_1, tOptDesc * VAR_2)
{
    char * VAR_3;
    bool VAR_4 = 1;

    if (FUNC_1(VAR_1, VAR_2))
        return;

    if (VAR_2->optArg.argString == ((void*)0)) {
        VAR_2->optArg.argBool = 0;
        return;
    }

    switch (*(VAR_2->optArg.argString)) {
    case '0':
    {
        long VAR_5 = FUNC_2(VAR_2->optArg.argString, &VAR_3, 0);
        if ((VAR_5 != 0) || (*VAR_3 != 128))
            break;

    }
    case 'N':
    case 'n':
    case 'F':
    case 'f':
    case 128:
        VAR_4 = 0;
        break;
    case '#':
        if (VAR_2->optArg.argString[1] != 'f')
            break;
        VAR_4 = 0;
    }

    if (VAR_2->fOptState & VAR_0) {
        FUNC_0(VAR_2->optArg.argString);
        VAR_2->fOptState &= ~VAR_0;
    }
    VAR_2->optArg.argBool = VAR_4;
}
