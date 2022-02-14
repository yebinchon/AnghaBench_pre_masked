
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int fOptSet; int pzProgName; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_11__ {int* argString; } ;
struct TYPE_13__ {int fOptState; TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;

 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,char) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_9(tOptions * VAR_11, tOptDesc * VAR_12, FILE * VAR_13, bool VAR_14)
{
    char VAR_15;

    if (VAR_11 <= VAR_2)
        return;






    if ( (VAR_12->fOptState & VAR_4)
       && (VAR_12->optArg.argString != ((void*)0))
       && (VAR_12->optArg.argString[0] != 128))

        VAR_15 = VAR_12->optArg.argString[0];

    else {
        FUNC_8(VAR_11, ((void*)0));
        VAR_15 = (VAR_11->fOptSet & VAR_3) ? 'c' : 'v';
    }

    switch (VAR_15) {
    case 128:
    case 'v': case 'V': FUNC_2(VAR_11, VAR_13); break;
    case 'c': case 'C': FUNC_0( VAR_11, VAR_13); break;
    case 'n': case 'N': FUNC_1( VAR_11, VAR_13); break;

    default:
        FUNC_5(VAR_5, VAR_7, VAR_15);
        FUNC_7(VAR_0);
    }

    FUNC_4(VAR_13);
    if (FUNC_3(VAR_13))
        FUNC_6(VAR_11->pzProgName, VAR_10,
                   (VAR_13 == VAR_6) ? VAR_9 : VAR_8);

    if (VAR_14)
        FUNC_7(VAR_1);
}
