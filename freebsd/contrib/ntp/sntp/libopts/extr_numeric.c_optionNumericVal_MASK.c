
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int fOptSet; int (* pUsageProc ) (TYPE_2__*,int ) ;int pzProgName; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_9__ {char* argString; long argInt; } ;
struct TYPE_11__ {int fOptState; TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*,int ,char*) ;
 int VAR_7 ;
 long FUNC_3 (char*,char**,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 char* VAR_8 ;

void
FUNC_5(tOptions * VAR_9, tOptDesc * VAR_10)
{
    char * VAR_11;
    long VAR_12;





    if (FUNC_1(VAR_9, VAR_10) || (VAR_10->optArg.argString == ((void*)0)))
        return;







    if ( (VAR_10 == ((void*)0))
       || (VAR_10->optArg.argString == ((void*)0))
       || ((VAR_10->fOptState & VAR_4) != 0))
        return;

    VAR_6 = 0;
    VAR_12 = FUNC_3(VAR_10->optArg.argString, &VAR_11, 0);
    if ((VAR_11 == VAR_10->optArg.argString) || (VAR_6 != 0))
        goto bad_number;

    if ((VAR_10->fOptState & VAR_5) != 0)
        switch (*(VAR_11++)) {
        case 128: VAR_11--; break;
        case 't': VAR_12 *= 1000;
        case 'g': VAR_12 *= 1000;
        case 'm': VAR_12 *= 1000;
        case 'k': VAR_12 *= 1000; break;

        case 'T': VAR_12 *= 1024;
        case 'G': VAR_12 *= 1024;
        case 'M': VAR_12 *= 1024;
        case 'K': VAR_12 *= 1024; break;

        default: goto bad_number;
        }

    if (*VAR_11 != 128)
        goto bad_number;

    if (VAR_10->fOptState & VAR_3) {
        FUNC_0(VAR_10->optArg.argString);
        VAR_10->fOptState &= ~VAR_3;
    }

    VAR_10->optArg.argInt = VAR_12;
    return;

    bad_number:

    FUNC_2( VAR_7, VAR_8, VAR_9->pzProgName, VAR_10->optArg.argString );
    if ((VAR_9->fOptSet & VAR_2) != 0)
        (*(VAR_9->pUsageProc))(VAR_9, VAR_1);

    VAR_6 = VAR_0;
    VAR_10->optArg.argInt = ~0;
}
