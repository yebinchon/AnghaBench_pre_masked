
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int save_opts; } ;
struct TYPE_11__ {int curOptIdx; int fOptSet; int (* pUsageProc ) (TYPE_2__*,int ) ;TYPE_1__ specOptIdx; int pOptDesc; scalar_t__ origArgCt; int * pzCurOpt; } ;
typedef TYPE_2__ tOptions ;
typedef int tOptDesc ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int,char**) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int VAR_3 ;

int
FUNC_10(tOptions * VAR_4, int VAR_5, char ** VAR_6)
{
    if (! FUNC_1(FUNC_9(VAR_4, VAR_6[0])))
        FUNC_2(VAR_3);





    if (! FUNC_3(VAR_4, VAR_5, VAR_6))
        return 0;





    if (VAR_4->curOptIdx <= 0) {
        VAR_4->curOptIdx = 1;
        VAR_4->pzCurOpt = ((void*)0);
    }

    if (! FUNC_1(FUNC_7(VAR_4)))
        return (int)VAR_4->origArgCt;
    switch (VAR_4->specOptIdx.save_opts) {
    case 0:
    case 128:
        break;
    default:
    {
        tOptDesc * VAR_7 = VAR_4->pOptDesc + VAR_4->specOptIdx.save_opts;

        if (FUNC_0(VAR_7)) {
            FUNC_5(VAR_4);
            FUNC_6(VAR_1);
        }
    }
    }





    if (((VAR_4->fOptSet & VAR_2) != 0)
       && (! FUNC_4(VAR_4)))
        (*VAR_4->pUsageProc)(VAR_4, VAR_0);

    return (int)VAR_4->curOptIdx;
}
