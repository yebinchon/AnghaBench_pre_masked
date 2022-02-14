
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ optCt; TYPE_3__* pOptDesc; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_11__ {int argString; } ;
struct TYPE_13__ {int fOptState; scalar_t__ optOccCt; scalar_t__ optMaxCt; int (* pOptProc ) (TYPE_2__*,TYPE_3__*) ;TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int VAR_5 ;

int
FUNC_4(tOptions * VAR_6, tOptDesc * VAR_7, unsigned int VAR_8)
{
    tOptDesc * VAR_9;

    if (VAR_6 <= VAR_1)
        return 0;

    VAR_9 = VAR_6->pOptDesc + VAR_8;
    if ((unsigned)VAR_6->optCt <= VAR_8) {
        FUNC_0(VAR_5, VAR_4);
        FUNC_1(VAR_0);
    }




    VAR_9->fOptState &= VAR_3;
    VAR_9->fOptState |= (VAR_7->fOptState & ~VAR_3);
    VAR_9->optArg.argString = VAR_7->optArg.argString;





    if ( (VAR_9->fOptState & VAR_2)
       && (++VAR_9->optOccCt > VAR_9->optMaxCt) )
        return FUNC_3(VAR_6, VAR_9);




    VAR_7->fOptState &= VAR_3;
    VAR_7->optOccCt = 0;




    if (VAR_9->pOptProc != ((void*)0))
        (*VAR_9->pOptProc)(VAR_6, VAR_9);
    return 0;
}
